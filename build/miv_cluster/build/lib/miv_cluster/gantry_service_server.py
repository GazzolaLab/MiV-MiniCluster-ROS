# Under MiV Cluster package - Gazzola Lab 
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node
import time
import RPi.GPIO as GPIO
import threading
import itertools

# import submodules
from .submodules.Stepper_Driver_TMC2209 import *
from .submodules.hx711 import HX711

# import message/service types
from miv_cluster_interfaces.srv import Gantry


# DEFINE MOTOR PARAMETERS
######################################################################################### 
# Directions of rotation
POSITIVE = True         #counterclockwise
NEGATIVE = False        #clockwise

# Modes of movement
ABSOLUTE = False        #rotate relative to the 0 position
RELATIVE = True         #rotate relative to the current position

# Define limit switches and force sensor configuration 
# motor_X1: LimS, LimE 
# motor_X2: LimS, LimE 
# motor_Y: LimS, LimE 
# motor_Z: LimS, LimE, ForceSensor 

# Gantry axis constants
SPR_AXIS = 200 # steps/rev conversion factor
PPS_AXIS = 8 # pulses/step conversion factor
A0_AXIS = 500 # acceleration at 0 speed
A_MAX_AXIS = 1400 # maximum acceleration
A_MIN_AXIS = 1 # minimum acceleration
S0_AXIS = 2400 # speed at 0 acceleration
S_MAX_AXIS = 2400 # maximum speed
S_MIN_AXIS = 1 # minimum speed
CONV_AXIS = 10 # mm/rev
UNIT_AXIS = 'mm/rev'
AXIS_DRIVER_PARAMS =   {'pulsesPerStep': PPS_AXIS, 'stepsPerRev': SPR_AXIS,
                        'accel0': A0_AXIS, 'accelMax': A_MAX_AXIS, 'accelMin': A_MIN_AXIS,
                        'speed0': S0_AXIS, 'speedMax': S_MAX_AXIS, 'speedMin': S_MIN_AXIS}

# make a dictionary of parameters for each motor
X1_PARAMS =     {'name': 'axis_x1', 'group': 'axis',
                 'revToUnit': CONV_AXIS,'poseUnit': UNIT_AXIS,
                 'pinEn': None, 'pinDir': 9, 'pinStep': 10, **AXIS_DRIVER_PARAMS,
                 'dirFlipped': False, 'pinLimS': 21, 'pinLimE': 20}

X2_PARAMS =     {'name': 'axis_x2', 'group': 'axis',
                 'revToUnit': CONV_AXIS,'poseUnit': UNIT_AXIS,
                 'pinEn': None, 'pinDir': 5, 'pinStep': 11, **AXIS_DRIVER_PARAMS,
                 'dirFlipped': False, 'pinLimS': 16, 'pinLimE': 12}

Y_PARAMS =      {'name': 'axis_y', 'group': 'axis',
                 'revToUnit': CONV_AXIS,'poseUnit': UNIT_AXIS,
                 'pinEn': None, 'pinDir': 13, 'pinStep': 6, **AXIS_DRIVER_PARAMS,
                 'dirFlipped': False, 'pinLimS': 25, 'pinLimE': 24}

Z_PARAMS =      {'name': 'axis_z', 'group': 'axis',
                 'revToUnit': CONV_AXIS,'poseUnit': UNIT_AXIS,
                 'pinEn': None, 'pinDir': 26, 'pinStep': 19, **AXIS_DRIVER_PARAMS,
                 'dirFlipped': False, 'pinLimS': 23, 'pinData': 2, 'pinSCK': 3}
                 #'pinLimE': 18

MOTOR_PARAMS = [X1_PARAMS, X2_PARAMS, Y_PARAMS, Z_PARAMS]
motors = []
motor_order = []

# DEFINE MOTOR CLASS
######################################################################################### 

# function to wrap the Stepper_Driver class and add limit switches and properties
class Motor:
    def __init__(self, name, group,
                 revToUnit, poseUnit,
                 pinEn, pinDir, pinStep,
                 pulsesPerStep, stepsPerRev, 
                 accel0, accelMax, accelMin,
                 speed0, speedMax, speedMin,
                 pinLimS = None, pinLimE = None, 
                 pinData = None, pinSCK = None, dirFlipped = False):
        # store the parameters
        self.name = name
        self.group = group
        self.pinEn = pinEn
        self.pinDir = pinDir
        self.pinStep = pinStep
        self.pulsesPerStep = pulsesPerStep
        self.stepsPerRev = stepsPerRev
        self.revToUnit = revToUnit
        self.poseUnit = poseUnit
        self.accel0 = accel0
        self.accelMax = accelMax
        self.accelMin = accelMin
        self.speed0 = speed0
        self.speedMax = speedMax
        self.speedMin = speedMin
        self.dirFlipped = dirFlipped
        self.pinLimS = pinLimS
        self.pinLimE = pinLimE
        self.pinData = pinData
        self.pinSCK = pinSCK
        self.override = False
        self.limited = False
        self.limits = {}
        # create the driver
        self.driver = Stepper_Driver(pinStep, pinDir, pinEn,
                                     pulsesPerStep, stepsPerRev,
                                     accel0, accelMax, accelMin,
                                     speed0, speedMax, speedMin)
        # create the limit switches
        self.limits = {'start': Limit_Switch(pinLimS, 'start', motor = self) if pinLimS else None,
                       'end': Limit_Switch(pinLimE, 'end', motor = self) if pinLimE else None}
        # check if the motor is limited but only if it has a limit switch
        if self.limits['start'] or self.limits['end']:
            self.checkLimited()
            
        # create the force sensor
        self.sensor = Force_Sensor(pinData, pinSCK, motor = self) if pinData else None

    def threadReadFromSensor(self):
        if self.sensor is not None:
            thread = threading.Thread(target = self.sensor.measure_force)
            return thread  
    	 	
    # method to run driver to converted value requiring a driver and optionally a target value, speed, and acceleration
    def threadRunToUnitCount(self, unit_count):
        thread = threading.Thread(target = self.runToUnitCount, args=([unit_count]))
        return thread

    def runToUnitCount(self, unit_count):
        return self.driver.runToRevCount(unit_count / self.revToUnit*(-1 if self.dirFlipped else 1))

    def setUnitSpeedTarget(self, value):
        return self.driver.setRevSpeedTarget(value / self.revToUnit)
    
    def checkLimited(self):
        limited_list = []
        for limit in self.limits:
            if self.limits[limit] is not None:
            	limited_list.append(self.limits[limit].active)
            self.limited = any(limited_list)
        return self.limited

# DEFINE LIMIT SWITCH CLASS
######################################################################################### 
# create a limit switch class to wrap the GPIO class
class Limit_Switch:
    def __init__(self, pin, name, activeHigh = False, motor = Motor):
        # store the parameters
        self.pin = pin
        self.name = name
        self.activeHigh = activeHigh
        self.motor = motor
        self.driver = motor.driver
        self.active = None
        # set up the GPIO pin
        GPIO.setup(pin, GPIO.IN, pull_up_down = GPIO.PUD_UP if activeHigh else GPIO.PUD_DOWN)
        # set the initial state
        self.active = GPIO.input(self.pin) == self.activeHigh
        # update the limited state of the motor
        self.motor.checkLimited()
        # add the callback function with a debounce time of 500 ms and passing the state of the switch
        GPIO.add_event_detect(pin, GPIO.BOTH, callback = self.callback, bouncetime = 500) 

    # callback function to update the state of the switch
    def callback(self, pin):
        self.active = GPIO.input(pin) == self.activeHigh
        print(self.motor.name + " " + self.name + "limit switch state changed to " + ("active" if self.active else "inactive"))
        self.motor.checkLimited()
        if not self.motor.override: self.driver.setStopped(self.active)


# DEFINE FORCE SENSOR CLASS
######################################################################################### 
class Force_Sensor:
    def __init__(self, pin_data, pin_sck, motor = Motor):
        # store the parameters
        self.motor = motor
        self.driver = motor.driver
        self.alert = None
        referenceUnit = 208000                           # measured 208000 at 1kg
        self.threshold = 0.5                             # 0.5kg 
        self.checkFreq = 200
        self.hx = HX711(pin_data,pin_sck)                # data, SCK
        self.hx.set_reading_format("MSB", "MSB")
        self.hx.set_reference_unit(referenceUnit)
        self.hx.reset()
        # zeroing
        self.hx.tare()
        offset = self.hx.get_offset()
        print("Tare done! Offset is ",offset)
    
    def measure_force(self):
        while self.driver.getActive():
            val = self.hx.get_weight(1)              #unit in kg, up direction is positive
            print(val)         
            if val>self.threshold: 
                self.stop_motor()
            #self.hx.power_down()
            #self.hx.power_up()
            time.sleep(float(1/self.checkFreq))
    
    def stop_motor(self):
    	self.driver.setStopped(True)

# DEFINE MOVEMENT FUNCTIONS
######################################################################################### 

# move entire gantry to end_point with threading
def move_to_end_point_threaded(end_point, sensor_flag = False):
    # create the thread for each motor
    motor_threads = [motor.threadRunToUnitCount(end_point[i]) for i, motor in enumerate(motors)]
    #motor_threads = []
    # create thread for sensor
    # WARNING HERE: running force feedback makes all threads excution much slower 
    # (needs to see why). Therefore, we only create force sensor when it is needed - 
    # when lowering z axis and approaching MEA. It will naturally run z in a
    # slower motion, which is good in this case for controlling the applied pressure.  
    
    if sensor_flag:
        sensor_threads = [motor.threadReadFromSensor() for i, motor in enumerate(motors)]
    else:
    	sensor_threads = []
    # Start motor threads and wait for them to finish
    print("running to end_point {}".format(end_point))
    for t in itertools.chain(motor_threads,sensor_threads): 
        if t is not None: t.start()
    for t in itertools.chain(motor_threads,sensor_threads):
    	if t is not None: t.join()
    print("finished running to end_point {}".format(end_point))
    
    #for motor in motors:
    #    motor.driver.setPulseCountAbs(0)
    #    motor.driver._pulseCount = 0
 
# homing function
def home_motors():
    # first check if any motor is limited, if yes, skip homing
    homing_point = []
    for motor in motors:
        motor.driver.setMovementMode(RELATIVE)
        homing_point.append(0 if motor.checkLimited() else 500)

    print("gantry homing, please wait ...")
    move_to_end_point_threaded(homing_point)
    for motor in motors:
        motor.driver.setPulseCountAbs(0)
        motor.driver._pulseCount = 0
        motor.override = True
        motor.driver.setStopped(False)
        motor.driver.setDirection(not motor.driver.getDirection())
    #move_to_end_point_threaded([-1 for i in motors])
    for motor in motors: motor.override = False
    print("homed! Accepting command now")

# DEFINE SERVICE CLASS
######################################################################################### 

class GantryService(Node):

    def __init__(self):
        super().__init__('gantry_service')
        self.srv = self.create_service(Gantry, 'gantry_move_by', self.move_gantry_distance_callback)

    def move_gantry_distance_callback(self, request, response):
    	self.get_logger().info('Incoming request\nX: %.2f, Y: %.2f, Z: %.2f ' % (request.x, request.y, request.z))
    	
    	end_point = [request.x,request.x,request.y,request.z]
    	move_to_end_point_threaded(end_point, request.sensor_flag)
    	response.status = 'DONE'
    	
    	return response

def main():
    rclpy.init()
    
    # setup GPIO
    GPIO.setmode(GPIO.BCM)
    GPIO.setwarnings(False)
    
    # spawn motors
    for MOTOR_PARAM in MOTOR_PARAMS:
        m = Motor(**MOTOR_PARAM)
        motors.append(m)
        motor_order.append(MOTOR_PARAM['name'])
        m.driver.setPowered(True)
        m.driver.setEnabled(True)
    
    try:
    	print("gantry starting, please wait 5s")
    	time.sleep(5)
    	# home motors
    	home_motors()
    	time.sleep(0.5)
    	gantry_service = GantryService()
    	rclpy.spin(gantry_service)
    	
    except KeyboardInterrupt:
        print("Interrupted by user. Exiting...")
        
    finally:
        for motor in motors:
            motor.driver.setPowered(False)
        GPIO.cleanup()
        rclpy.shutdown()
        print("all done")   

if __name__ == '__main__':
    main()
