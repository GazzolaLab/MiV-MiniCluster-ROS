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
import time
import sys, math
import smbus
import numpy as np
import RPi.GPIO as GPIO
from rclpy.node import Node
from std_msgs.msg import String
from miv_cluster_interfaces.msg import Encoder

# Define I2C channels
multiplexer_channels = [0b00000001, 0b00000010, 0b00000100, 0b00001000, 0b00010000, 0b00100000, 0b01000000, 0b10000000]

# DEFINE Abort Signal PUBLISHER CLASS
######################################################################################### 
class AbortPublisher(Node):

    def __init__(self):
        super().__init__('abort_publisher')
        self.publisher_ = self.create_publisher(String, 'AbortCommand', 10)

class TCA9548A:
    def __init__(self):
        self.i2c_address = 0x70            # Default Multiplexer Address
        self.i2c_bus = 1
        self.bus = smbus.SMBus(self.i2c_bus)

    def setup(self, channel):
        self.bus.write_byte(self.i2c_address, channel)
        time.sleep(0.01)
        #print ("TCA9548A I2C channel status:", bin(self.bus.read_byte(self.i2c_address)))

    def read(self, read_address, read_register, read_byte):
        read_bytes = self.bus.read_i2c_block_data(read_address, read_register, read_byte)
        return (read_bytes[0]<<8) | read_bytes[1];

# DEFINE Encoder SUBSCRIBER CLASS
######################################################################################### 
class EncoderSubscriber(Node):

    def __init__(self): 
        super().__init__('encoder_subscriber')
        self.DEVICE_AS5600 = 0x36                           # Default device I2C address
        self.multiplexer = TCA9548A()                       # Create multuplexer controller
        self.num_encoder = 4                                # X1, X2, Y, Z
        self.previous_angle = np.zeros(self.num_encoder)   
        self.current_angle = np.zeros(self.num_encoder)
        self.distance_traveled = np.zeros(self.num_encoder)
        self.motor_target = np.zeros(4)                     # motor travel commands [x, x, y, z]
        self.angle_to_dis = 10.0/360.0                      # angle to distance conversion       
        self.subscription = self.create_subscription(
            Encoder,
            'EncoderCommand',
            self.task_callback,
            10)
        self.subscription                                   # prevent unused variable warning
        self.timer_period = 0.2                             # frequency of checking X, seconds
        self.abort_publisher = AbortPublisher()             # create abort signal publisher class
        self.abort_flag = False                             # abort flag
        self.ignore_flag = False                            # ignore checking for end position

    def timer_callback(self):             
        # read encoder data - if connection is not through, try three times 
        read_count = 0
        while read_count<3:
            try:
                for i in range(self.num_encoder):
                    self.multiplexer.setup(multiplexer_channels[i])
                    self.current_angle[i] = self.multiplexer.read(self.DEVICE_AS5600, 0x0C, 2)*360.0/4096
                break
            except:
                read_count += 1
        
        # calculate distance when it is not the first reading
        if self.previous_angle[0] != 0.0:
            for i in range(self.num_encoder):   
                if self.motor_target[i] < 0.0:     # check the direction of movement
                    if ((self.current_angle[i] + 10.0) < self.previous_angle[i]):
                        self.distance_traveled[i] -= self.angle_to_dis*(self.current_angle[i]+360.0-self.previous_angle[i])        # encoder moving across 360 deg, add a samll margin to ignore those caused by sensor oscillation
                    else:
                        self.distance_traveled[i] -= self.angle_to_dis*(self.current_angle[i] - self.previous_angle[i])
                elif self.motor_target[i] > 0.0:
                    if (self.current_angle[i] > (self.previous_angle[i] + 10.0)):
                        self.distance_traveled[i] += self.angle_to_dis*(360.0-self.current_angle[i]+self.previous_angle[i])       # encoder moving across 360 deg
                    else:
                        self.distance_traveled[i] += self.angle_to_dis*(self.previous_angle[i] - self.current_angle[i])
                else:
                    continue
                
        # store current angle    
        self.previous_angle = self.current_angle.copy()
        self.abort_check_x_axis()
                    
        print("Encoder X1: %6.2f mm  "%(self.distance_traveled[0]), "Encoder X2: %6.2f mm  "%(self.distance_traveled[1]), "Encoder Y: %6.2f mm  "%(self.distance_traveled[2]), "Encoder Z: %6.2f mm  "%(self.distance_traveled[3]))
    
    def task_callback(self, msg):
        self.get_logger().info('Enocder reading %s' % msg.encoder_switch)
        if msg.encoder_switch == 'start':
            self.motor_target = np.array([msg.x_target,msg.x_target,msg.y_target,msg.z_target])
            if np.any(self.motor_target>400.0):                    # running homing function
                self.ignore_flag = True                            # ignore end position check
            else:
                self.ignore_flag = False                           # reset ignore flag
            self.abort_flag = False                                # reset abort flag
            self.timer = self.create_timer(self.timer_period, self.timer_callback)
            self.timer_callback()                                  # update angels at the start 
            print(self.motor_target)    
        else:
            self.timer_callback()                                  # update angels at the end
            self.timer.cancel()                             
            if ((not self.abort_flag) and (not self.ignore_flag)):        
                # check end position when it is not previously aborted and not manually ignored
                self.abort_check_end_of_motion()                       
            self.previous_angle = np.zeros(self.num_encoder)       # reset all encoder parameters
            self.current_angle = np.zeros(self.num_encoder)        # reset all encoder parameters
            self.distance_traveled = np.zeros(self.num_encoder)    # reset all encoder parameters
   
    def abort_check_x_axis(self):
        if abs(self.distance_traveled[0]-self.distance_traveled[1]) > 5.0:
            msg = String()
            msg.data = 'True'
            self.abort_publisher.publisher_.publish(msg)           # send abort signal to Gantry 
            self.abort_flag = True                      # set abort flag, skip end postion check
            print("TWO X AXIS MISMATCH! ABORT PROCESS!")

    def abort_check_end_of_motion(self):
        for i in range(self.num_encoder):
            if abs(self.distance_traveled[i]-self.motor_target[i]) > 5.0:
                msg = String()
                msg.data = 'True'
                self.abort_publisher.publisher_.publish(msg)
                self.abort_flag = True
                print("END POSITION MISMATCH! ABORT PROCESS!")


def main(args=None):
    rclpy.init(args=args)

    try:
        print("Encoder Ready... Waiting for gantry movement")
        encoder_subscriber = EncoderSubscriber()
        rclpy.spin(encoder_subscriber)
        GPIO.cleanup()
        rclpy.shutdown()
    
    except KeyboardInterrupt:
        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        encoder_subscriber.destroy_node()
        print("Interrupted by user. Exiting the gipper subscriber...")
        GPIO.cleanup()


if __name__ == '__main__':
    main()
