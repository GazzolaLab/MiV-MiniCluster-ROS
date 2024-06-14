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


# import message/service types
from std_msgs.msg import String
from miv_cluster_interfaces.srv import Gantry
from miv_cluster_interfaces.srv import Camera
from miv_cluster_interfaces.srv import MeaJob

# import submodules
from .submodules.flashLight import flashLight
from .submodules.gantryClient import GantryClientAsync
from .submodules.cameraClient import CameraClientAsync
from .submodules.gripperPublisher import GripperPublisher


# DEFINE MEA SLOT PARAMETERS
######################################################################################### 
# define uniserval parameters
UNIVERSAL_PARAMS =   {'lower_to_grip': [0.0, 0.0, -40.0],
                      'lower_to_place': [0.0, 0.0, -25.0],
                      'lower_to_record': [0.0, 0.0, -43.0],
                      'place_location_top': [-20, -3.0, -20.0],
                      'offset_for_measurement': [0.0, 0.0, 10.0]}

# make a dictionary of parameters for each MEA slot
stride_x = 96.5
stride_y = 96.5

# MEA number - MEA_01 (1) to MEA_23 (11)
# Position calibration done for MEA_00 (0) 
MEA_COLLECT = []
for x in range(3):
    for y in range(4):
        offest_x = 0 - x     #calibration done for MEA_00
        offest_y = 0 - y     #calibration done for MEA_00
        name = "MEA_"+str(4*x+y)
        grip_location = [-25+stride_x*offest_x, -3+stride_y*offest_y, -29]
        calibrate_location = [-89.5+stride_x*offest_x, -6+stride_y*offest_y, -85.0]
        MEA = {'name': name, 'grip_location': grip_location, 
               'calibrate_location': calibrate_location, **UNIVERSAL_PARAMS}
        MEA_COLLECT.append(MEA)


def relative_position(a,b):
    return a+b
    
class AbortProcessError(Exception):
    "Abort Current Process Due to Gantry Movement Failure!"
    pass

class LidOperationError(Exception):
    "Abort Current Process Due to Lid Operation Failure!"
    pass

# DEFINE MEA CLASS
######################################################################################### 

class MEA:
    def __init__(self, name, grip_location, lower_to_grip, place_location_top, offset_for_measurement,
                 calibrate_location, lower_to_record, lower_to_place, 
                 recordingTime):
        self.name = name
        # relative locations
        self.lower_to_grip = lower_to_grip
        self.lower_to_place = lower_to_place
        self.offset_for_measurement = offset_for_measurement
        self.lower_to_record = lower_to_record
        
        # locations in gobal coordinate 
        self.grip_location = grip_location
        self.open_close_location = list(map(relative_position, self.grip_location, self.lower_to_grip))
        self.place_location_top = place_location_top
        self.place_location = list(map(relative_position,self.place_location_top, self.lower_to_place))       
        self.calibrate_location = calibrate_location
        # ROS communications
        self.gantry_client = GantryClientAsync()                # create gantry service
        self.gripper_client = GripperPublisher()                # create gripper publisher
        self.camera_client = CameraClientAsync()                # create camera service
        self.flash_light = flashLight()                         # create flash light control module
        
        # other parameters
        self.recordingTime = recordingTime                      # recording time
        self.force_measurement = 0.0                            # store forces for lid operation
        self.num_aborts = 0                                     # number of abort flags 
    
    def __del__(self):
        log_destructor = "MEA_"+str(self.name)+" destructed!"
        print(log_destructor)

    def talk_to_gantry(self, move, sensor_flag='', measurement_flag=''):
    	self.num_aborts = 0                       # reset, reach 3 to end process through exception
    	response = self.gantry_client.send_request(float(move[0]), float(move[1]), float(move[2]), bool(sensor_flag),bool(measurement_flag))
    	self.gantry_client.get_logger().info('Moving gantry %s' % response)
    	if response.status == 'Aborted':    # if process is aborted, go home and retry
    	    if self.num_aborts == 2:
    	        raise AbortProcessError
    	    self.num_aborts += 1
    	    time.sleep(1)
    	    self.standard_aborting()
    	   
    	if measurement_flag:                # if taking force measurement
    	    self.force_measurement = response.force_measurement
    
    def talk_to_gripper(self, message):
        msg = String()
        msg.data = message
        self.gripper_client.publisher_.publish(msg)
        self.gripper_client.get_logger().info('Publish a servo command: "%s"' % msg.data)
 
    def talk_to_camera(self, initial_position, calibration_flag='', qrscan_flag='', iteration=0):
    	response = self.camera_client.send_request(float(initial_position[0]), float(initial_position[1]), float(initial_position[2]), bool(calibration_flag), bool(qrscan_flag), int(iteration))
    	self.camera_client.get_logger().info('Calibration target\nX: %.2f, Y: %.2f, Z: %.2f ' % (response.x2, response.y2, response.z2))
    	return [response.x2,response.y2,response.z2]
    
    def run_routine(self):
        self.open_chamber()
        for num_trials in range(3):                       # try up to 3 times to find the MEA 
            target_position, NoMEAFound = self.calibrate(iterations = 2, calibration_flag='Yes')
            if not NoMEAFound:                            # if calibration good, go record
                self.record(center_on_top=target_position)
                break
        self.close_chamber()
        self.go_home()
        
    def check_lid(self, operation, force_before, force_after):
        lid_correct = False
        if operation == 'Grip':
            lid_correct = ((force_before - force_after) > 0.02)      # weight of the lid ~ 30g
        if operation == 'Release':
            lid_correct = ((force_before - force_after) < 0.02)      # weight of the lid ~ 30g
        return lid_correct

# FUNCTIONS
#----------------------------------------------------------------------------------
    def standard_aborting(self):
        self.go_home()                                   # go home and sit for 10s
        time.sleep(10)
        self.talk_to_gantry(move = [-100.0,-100.0,-5.0]) # go to court center to avoid conlison
    
    def standard_lid_gripping(self, target_position):
        count = 0
        while count < 3:                                 # try up to three times
            self.talk_to_gripper('gripper:up')           # for security
            force_measurement_location = list(map(relative_position, target_position, self.offset_for_measurement))
            self.talk_to_gantry(move = force_measurement_location, measurement_flag='Yes')
            force_before = self.force_measurement        # measure Z force and store before gripping
            self.talk_to_gantry(move = target_position)  # go to target lid position             
            self.talk_to_gripper('gripper:down')
            time.sleep(1.0)
            self.talk_to_gantry(move = force_measurement_location, measurement_flag='Yes') 
            force_after = self.force_measurement         # store force after gripping
            lid_gripped = self.check_lid('Grip', force_before, force_after)
            if lid_gripped:
                break
            elif count == 2:
                self.go_home()
                raise LidOperationError
            count += 1
            # in case the lid is actually gripped but force sensor gives wrong value, 
            # lower to release the lid and do it again 
            self.talk_to_gantry(move = list(map(relative_position, target_position, [0.0,0.0,3.0])))
            #self.go_home()
            time.sleep(5)
         
    
    def standard_lid_releasing(self, target_position, add_shake=False):
        count = 0
        while count < 3:                                  # try up to three times of placing lid
            force_measurement_location = list(map(relative_position, target_position, self.offset_for_measurement)) 
            self.talk_to_gantry(move = force_measurement_location, measurement_flag='Yes')
            force_before = self.force_measurement         # measure Z force and store before placing
            if add_shake:
                closing_location = list(map(relative_position, target_position, [0.0,0.0,3.0])) 
                self.talk_to_gantry(move = closing_location)
                self.add_a_small_shake(closing_location, 2.0)
                self.talk_to_gantry(move = closing_location)
            else:
                self.talk_to_gantry(move = target_position)
            self.talk_to_gripper('gripper:up')
            time.sleep(1.0)
            self.talk_to_gripper('gripper:up')            # for security
            time.sleep(1.0)
            self.talk_to_gripper('gripper:up')
            self.talk_to_gantry(move = force_measurement_location, measurement_flag='Yes')
            force_after = self.force_measurement          # store force after placing
            lid_released = self.check_lid('Release', force_before, force_after)
            if lid_released:
                break
            elif count == 2:
                self.go_home()
                raise LidOperationError
            count += 1 
            #self.go_home()
            time.sleep(5)
           
    def open_chamber(self):
        # moving to MEA, open lid, place lid
        self.talk_to_gantry(move = self.grip_location)
        self.talk_to_gripper('arm:down')
        time.sleep(0.2)
        self.standard_lid_gripping(self.open_close_location)
        self.talk_to_gantry(move = self.grip_location)
        self.talk_to_gantry(move = self.place_location_top)
        self.standard_lid_releasing(self.place_location)
        self.talk_to_gantry(move = self.place_location_top)
        self.talk_to_gripper('arm:up')
        time.sleep(1.0)

    def close_chamber(self):
        # move to lid, move back, close lid
        self.talk_to_gantry(move = self.place_location_top)
        self.talk_to_gripper('arm:down')
        time.sleep(0.2)
        self.standard_lid_gripping(self.place_location)
        self.talk_to_gantry(move = self.place_location_top)
        self.talk_to_gantry(move = list([self.grip_location[0],self.grip_location[1],self.place_location_top[2]]))
        self.standard_lid_releasing(self.open_close_location, True)
        self.talk_to_gantry(move = self.grip_location)
        self.talk_to_gripper('arm:up')
        
    # add a small shake to robustify the lid closing
    def add_a_small_shake(self, closing_location=[], shake_mag=0):
        time.sleep(0.05)
        self.talk_to_gantry(move = list(map(relative_position, closing_location, [shake_mag, 0.0, 0.0])))
        time.sleep(0.05)
        self.talk_to_gantry(move = list(map(relative_position, closing_location, [0.0, shake_mag, 0.0])))
        time.sleep(0.05)
        self.talk_to_gantry(move = list(map(relative_position, closing_location, [-shake_mag, 0.0, 0.0])))
        time.sleep(0.05)
        self.talk_to_gantry(move = list(map(relative_position, closing_location, [0.0, -shake_mag, 0.0])))
   
    def calibrate(self, iterations = 0, calibration_flag=''):
        NoMEAFound = False
        self.talk_to_gantry(move = list(map(relative_position, self.calibrate_location, [0.0, 0.0, 40])))
        self.talk_to_gripper('arm:up')            # for security
        self.talk_to_gantry(move = self.calibrate_location)
        self.flash_light.turn_on()
        time.sleep(1)
        initial_position_ = self.calibrate_location
        # a few interations
        for i in range(iterations):
            target_position = self.talk_to_camera(initial_position=initial_position_, calibration_flag=calibration_flag,iteration=i)
            # check z of target position: a difference in z means an error encountered in
            # the calibration process. Abort recording and go close the chamber.
            if target_position[2] != initial_position_[2]:
                NoMEAFound = True
                break
            # if all good, move gantry to target position
            self.talk_to_gantry(move = target_position)
            initial_position_ = target_position
            time.sleep(1)
        
        # finish calibration, turn light off and return final target_position
        self.flash_light.turn_off()
        return target_position, NoMEAFound
                
    def record(self, center_on_top):
        # fast lowering
        self.talk_to_gantry(move = list(map(relative_position,center_on_top, [0.0,0.0,-20.0])))
        # slow lowering with force sensor on
        self.talk_to_gantry(move = list(map(relative_position,center_on_top, self.lower_to_record)), sensor_flag='Yes')
        record_pin = 15                  # pin 15 reserved for recording
        GPIO.setmode(GPIO.BCM)
        GPIO.setwarnings(False)
        GPIO.setup(record_pin, GPIO.OUT)
        GPIO.output(record_pin, GPIO.LOW)     # set initial low 
        time.sleep(120)                    # give some time to talk to OE I/O
        GPIO.output(record_pin, GPIO.HIGH)    # rising edge trigger start
        time.sleep(self.recordingTime)   # recording time
        GPIO.output(record_pin, GPIO.LOW)     # falling edge trigger end
        time.sleep(2)                    # wrap up and prepare to go up
        self.talk_to_gantry(move = center_on_top)
        
    def go_home(self):
        # Set all numbers to 500.0 to activate the standard homing function in gantry_server_node. 
        # This will reset all motor pulse counts for better positioning repetability.
        self.talk_to_gantry(move = [500.0, 500.0, 500.0]) 
        log_home = self.name+" Gantry homed! Motor reset!"
        self.gantry_client.get_logger().info(log_home)
    
    def init_gripper(self):
        self.talk_to_gripper('arm:up')
        self.talk_to_gripper('gripper:up')
        self.talk_to_gripper('arm:down')
        time.sleep(2.0)
        self.talk_to_gripper('arm:up')
        self.talk_to_gripper('gripper:up')
        
        
    def flash_light(self, turn_on = False):
        GPIO.setmode(GPIO.BCM)
        GPIO.setwarnings(False)
        GPIO.setup(self.LED_pin, GPIO.OUT)
        if turn_on:
            GPIO.output(self.LED_pin, GPIO.HIGH)
        else:
            GPIO.output(self.LED_pin, GPIO.LOW)
            

# DEFINE SERVICE SERVER CLASS for MEA NODE
######################################################################################### 

class MEAService(Node):

    def __init__(self):
        super().__init__('MEA_service')
        self.srv = self.create_service(MeaJob, 'run_a_job', self.run_a_job_callback)
        self.current_MEA = 0

    def run_a_job_callback(self, request, response):
        self.get_logger().info('Incoming request: run a MEA job')
        list_of_MEA = request.mea_list
        list_of_recordTime = request.recordtime_list
        
        # spawn each MEA and run the job
        try:
            for (mea_index, recordingTime) in zip(list_of_MEA, list_of_recordTime):
    	        # spawn MEA
    	        mea_config = MEA_COLLECT[int(mea_index)]
    	        mea = MEA(**mea_config,recordingTime=recordingTime)
    	        # excute the job
    	        self.current_MEA = mea_index 
    	        mea.init_gripper()
    	        mea.flash_light.turn_off()
    	        time.sleep(3)
    	        mea.run_routine()
    	        del mea
    	        time.sleep(3)
    	        
        except AbortProcessError:
            response.status = 'MEA'+str(self.current_MEA)+': Failed During Gantry Movement'
            return response
        
        except LidOperationError:
            response.status = 'MEA'+str(self.current_MEA)+': Failed During Lid Operation'
            return response
            
        response.status = 'Done'
        return response

# DEFINE MEA NODE MAIN
######################################################################################### 

def main(args=None):
    rclpy.init(args=args)
    
    try:
    	print("MEA node ready ... waiting for a MEA job")
    	mea_service = MEAService()
    	rclpy.spin(mea_service)
    	rclpy.shutdown()  
    	
    except KeyboardInterrupt:
        mea_service.destroy_node()
        print("Interrupted by user. Exiting the MEA node...")
       
        

if __name__ == '__main__':
    main()
