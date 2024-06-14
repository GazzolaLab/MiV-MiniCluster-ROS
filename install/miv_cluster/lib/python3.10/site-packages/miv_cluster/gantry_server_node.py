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
import numpy as np

# import submodules
from .submodules.Stepper_Driver_TMC2209 import *
from .submodules.Force_Sensor import Force_Sensor
from .submodules.Limit_Switch import Limit_Switch

# import message/service types
from std_msgs.msg import String
from miv_cluster_interfaces.srv import Gantry
from miv_cluster_interfaces.msg import Encoder


# DEFINE MOTOR PARAMETERS
######################################################################################### 
# Directions of rotation
POSITIVE = True         #counterclockwise
NEGATIVE = False        #clockwise

# Modes of movement
ABSOLUTE = False        #rotate relative to the 0 position
RELATIVE = False        #rotate relative to the current position

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
S0_AXIS = 1000 # speed at 0 acceleration
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
                 'dirFlipped': False, 'pinLimS': 23, 'pinData': 18, 'pinSCK': 22}
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
        self.pos_StoppedbyForceSensor = 0
        
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
            thread = threading.Thread(target = self.sensor.measure_force_in_loop)
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

# DEFINE ENCODER PUBLISHER CLASS
######################################################################################### 
class EncoderPublisher(Node):

    def __init__(self):
        super().__init__('encoder_publisher')
        self.publisher_ = self.create_publisher(Encoder, 'EncoderCommand', 10)

# DEFINE Abort Signal SUBSCRIBER CLASS
######################################################################################### 
class AbortSubscriber(Node):

    def __init__(self): 
        super().__init__('abort_subscriber')
        self.process_flag = 'Done'       # process flag, set to Aborted when abort signal triggered
        self.subscription = self.create_subscription(
            String,
            'AbortCommand',
            self.task_callback,
            10)
        self.subscription                # prevent unused variable warning
    
    def task_callback(self, msg):
        self.get_logger().info('Received abort signal %s' % msg.data)
        # stop motor to abort the process
        if msg.data == 'True':
            for motor in motors:
                motor.driver.setStopped(True)
            
            self.process_flag = 'Aborted'

# DEFINE SERVICE CLASS
######################################################################################### 
class GantryService(Node):

    def __init__(self):
        super().__init__('gantry_service')
        self.srv = self.create_service(Gantry, 'gantry_move_by', self.move_gantry_distance_callback)
        self.encoder_publisher = EncoderPublisher()     # create encoder publisher
        self.msg = Encoder()
        self.abort_subscriber = AbortSubscriber()       # create abort signal subscriber
        self.position_register = np.zeros(3)            # register previous positions
        
    def abort_signal_checking(self, stop):              # function to run in separate thread
        while True:
            rclpy.spin_once(node=self.abort_subscriber,timeout_sec=0.2)
            if stop():
                break
           
    def standard_encoder_start(self, request):
        self.stop_threads = False                       # reset stop thread flag
        self.spin_abort_thread = threading.Thread(target=self.abort_signal_checking, args=(lambda: self.stop_threads,))                                    # create a thread for checking abort sigal
        self.spin_abort_thread.start()                  # start checking
        # start encoder reading
        self.msg.x_target = request.x - self.position_register[0]
        self.msg.y_target = request.y - self.position_register[1]
        self.msg.z_target = request.z - self.position_register[2]
        self.msg.encoder_switch = 'start'               # start encoder reading
        self.encoder_publisher.publisher_.publish(self.msg)
        time.sleep(0.1)                                 # let encoder read the start value first
    
    def standard_encoder_end(self, request):
        self.msg.encoder_switch = 'end'                 # end encoder reading
        self.encoder_publisher.publisher_.publish(self.msg)
        self.stop_threads = True                        # end checking for abort signal 
        self.spin_abort_thread.join()                   
        self.position_register = np.array([request.x,request.y,request.z]) # store current position
        
    def move_gantry_distance_callback(self, request, response):
    	self.get_logger().info('Incoming request\nX: %.2f, Y: %.2f, Z: %.2f ' % (request.x, request.y, request.z))
    	
    	# homing command, run standard home_motors function and reset motor pulseCount 
    	if request.x == request.y == request.z == 500.0:
    	    self.standard_encoder_start(request)
    	    home_motors()
    	    self.standard_encoder_end(request)
    	    self.position_register = np.zeros(3)         # reset current position after homing
    	    self.abort_subscriber.process_flag = 'Done'  # reset abort flag after homing 
    	else:
    	    # start abort signal checking, when it is not lowering Z for recording
    	    if not request.sensor_flag:
    	        self.standard_encoder_start(request)
    	    
    	    end_point = [request.x,request.x,request.y,request.z]              # run motor
    	    move_to_end_point_threaded(end_point, request.sensor_flag)         # run motor
    	    # stop encoder reading, when it is not lowering Z for recording
    	    if not request.sensor_flag:
    	        self.standard_encoder_end(request)
    	    else:
    	        # When lowering Z for recording, register the motor position after
    	        # stopped by the force sensor, so that correct current position will
    	        # be sent to encoder for the following movements
    	        self.position_register[2] = motors[3].pos_StoppedbyForceSensor
    	        #print(self.position_register)
    	
    	# measure Z force at the end of the movement
    	if request.measurement_flag:
    	    time.sleep(2.0)  
    	    if request.measurement_flag == 'Tare':
    	        motors[3].sensor.reset_and_tare()
    	    response.force_measurement = motors[3].sensor.measure_force_single(5)    # Z only
    	
    	response.status = self.abort_subscriber.process_flag
    	return response

######################################################################################### 
# move entire gantry to end_point with threading
def move_to_end_point_threaded(end_point, sensor_flag = False):
    # create the thread for each motor
    motor_threads = [motor.threadRunToUnitCount(end_point[i]) for i, motor in enumerate(motors)]
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
    for motor in motors: motor.override = False
    print("homed! Accepting command now")

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
    	rclpy.shutdown()  
    	
    except KeyboardInterrupt:
        for motor in motors:
            motor.driver.setPowered(False)
        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        gantry_service.destroy_node()
        print("Interrupted by user. Exiting the gantry server...")
        GPIO.cleanup()
        

if __name__ == '__main__':
    main()
