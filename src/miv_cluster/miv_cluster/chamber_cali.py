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
import numpy as np
from rclpy.node import Node
import time
import RPi.GPIO as GPIO
import threading
import itertools


# import message/service types
from std_msgs.msg import String
from miv_cluster_interfaces.srv import Gantry
from miv_cluster_interfaces.srv import Camera

# import submodules
from .submodules.flashLight import flashLight
from .submodules.gantryClient import GantryClientAsync
from .submodules.cameraClient import CameraClientAsync
from .submodules.gripperPublisher import GripperPublisher

def relative_position(a,b):
    return a+b

class chamberCali:
    def __init__(self):
        # store the parameters
        self.number_scan = 2
        self.scan_location = [[-125, -153, -70],[-221.5, -153, -70]]
        self.target_location = []
        
        # create service 
        self.gantry_client = GantryClientAsync()
        self.camera_client = CameraClientAsync()
        self.flash_light = flashLight()
        self.gripper_client = GripperPublisher()
    
    #def __del__(self):
    #    log_destructor = "chamberCali destructed!"
    #    print(log_destructor)

    def talk_to_gantry(self, move, senor_flag=''):
    	response = self.gantry_client.send_request(float(move[0]), float(move[1]), float(move[2]), bool(senor_flag))
    	self.gantry_client.get_logger().info('Moving gantry %s' % response)
     
    def talk_to_camera(self, initial_position, calibration_flag='', qrscan_flag='', iteration=0):
    	response = self.camera_client.send_request(float(initial_position[0]), float(initial_position[1]), float(initial_position[2]), bool(calibration_flag), bool(qrscan_flag), int(iteration))
    	self.camera_client.get_logger().info('Calibration target\nX: %.2f, Y: %.2f, Z: %.2f ' % (response.x2, response.y2, response.z2))
    	return [response.x2,response.y2,response.z2]
    	
    def talk_to_gripper(self, message):
        msg = String()
        msg.data = message
        self.gripper_client.publisher_.publish(msg)
        self.gripper_client.get_logger().info('Publish a servo command: "%s"' % msg.data)
    
    def run_process(self):
        # reset gripper just to be safe
        self.flash_light.turn_off()
        self.talk_to_gripper('arm:up')
        self.talk_to_gripper('gripper:up')
        time.sleep(1)
        
        for initial_position in self.scan_location:
            # go to scan location
            self.talk_to_gantry(move = initial_position)
            self.flash_light.turn_on()
            time.sleep(1)
            # run qr code detection
            scan_target = self.talk_to_camera(initial_position=initial_position, qrscan_flag=True,iteration=0)
            # check z of target position: a difference in z means no qr code is found.
            # Abort calibration and go home.
            if scan_target[2] != initial_position[2]: 
                self.Abort_flag = "Aborted"
                break
            # if all good, move gantry to target position
            self.target_location.append(scan_target)
            self.Abort_flag = "Done"
            self.flash_light.turn_off()
            time.sleep(1)
        
        # finish calibration, turn light off and go home
        self.write_report()
        self.go_home()

    def go_home(self):
        response = self.talk_to_gantry(move = [500.0, 500.0, 500.0])
        log_home = "Calibration"+self.Abort_flag+"! Gantry homed!"
        self.gantry_client.get_logger().info(log_home)
    
    def write_report(self):
        report = open("chamber_calibration_report.txt","w")
        for idx, scan_target in enumerate(self.target_location):
            report.write("Target qr location "+str(idx)+": "+str(scan_target)+"\n")
        if self.number_scan != len(self.target_location):
            report.write(str(self.number_scan-len(self.target_location))+" qr code missing!\n")
        if len(self.target_location) == 2:
            angle_chamber = (180.0/np.pi) * np.arctan(
                            (self.target_location[1][1]-self.target_location[0][1])/
                            (self.target_location[1][0]-self.target_location[0][0]))
                            
            report.write("Two qr codes detected, chamber angle is:\n")
            report.write(str(angle_chamber)+"\n")
        
        # calcuate calibration location for MEA_00 from the first QR location
        calibration_location = [self.target_location[0][0]+0.5*96.5, self.target_location[0][1]+1.5*96.5, -88]
        report.write("The resulting calibration location for MEA_00 is:\n")
        report.write(str(calibration_location))
        
        report.close()

# DEFINE CHAMBER CALIBRATION NODE MAIN
######################################################################################### 

def main(args=None):
    rclpy.init(args=args)
    
    try:
    	print("About to run calibration process for incubation chamber ...")
    	chamber_calibration = chamberCali()
    	chamber_calibration.run_process()
    	print("Process done! See log info for chamber locations")
    	
    except KeyboardInterrupt:
        print("Interrupted by user. Exiting the MEA node...")
        
    finally:
        rclpy.shutdown()  

if __name__ == '__main__':
    main()
