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

import sys
import rclpy
import time
from rclpy.node import Node
from std_msgs.msg import String

class ServoPublisher(Node):

    def __init__(self):
        super().__init__('servo_publisher')
        self.publisher_ = self.create_publisher(String, 'ServoCommand', 10)
        #timer_period = 5  # seconds
        #self.timer = self.create_timer(timer_period, self.timer_callback)
        #self.i = 0
"""
    def timer_callback(self):
        msg = String()
        if (self.i%2) == 0:
       	    msg.data = 'arm:down'
       	    self.publisher_.publish(msg)
       	    self.get_logger().info('Publishing a servo command: "%s"' % msg.data)
       	    time.sleep(2)
            msg.data = 'gripper:down'
       	    self.publisher_.publish(msg) 
       	    self.get_logger().info('Publishing a servo command: "%s"' % msg.data)     	    
       	else:
       	    msg.data = 'gripper:up'
       	    self.publisher_.publish(msg)
       	    self.get_logger().info('Publishing a servo command: "%s"' % msg.data)
       	    time.sleep(2)
            msg.data = 'arm:up'
       	    self.publisher_.publish(msg) 
       	    self.get_logger().info('Publishing a servo command: "%s"' % msg.data)   
        
        self.i += 1
"""
def main(args=None):
    rclpy.init(args=args)

    servo_publisher = ServoPublisher()
    msg = String()
    msg.data = sys.argv[1]
    servo_publisher.publisher_.publish(msg)
    servo_publisher.get_logger().info('Publishing a servo command: "%s"' % msg.data)
    
    #rclpy.spin(servo_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    servo_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
