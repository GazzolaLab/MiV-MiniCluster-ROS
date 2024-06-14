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
from rclpy.node import Node
from std_msgs.msg import String
from miv_cluster_interfaces.srv import Gantry

#publisher/client (commander) classes
#-----------------------------------------------------------------------

#gripper publisher - controlling two servo motors for arm depolyment and gripping motion
class ServoPublisher(Node):

    def __init__(self):
        super().__init__('servo_publisher')
        self.publisher_ = self.create_publisher(String, 'ServoCommand', 10)

#Gantry motion controller
class GantryClientAsync(Node):

    def __init__(self):
        super().__init__('gantry_client_async')
        self.cli = self.create_client(Gantry, 'gantry_move_by')
        while not self.cli.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Gantry.Request()

    def send_request(self, X, Y, Z):
        self.req.x = X
        self.req.y = Y
        self.req.z = Z
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main(args=None):
    rclpy.init(args=args)
    
    #create commanders
    servo_publisher = ServoPublisher()
    gantry_client = GantryClientAsync()
    
    #run routines
    msg = String()
    # withdraw gripper
    msg.data = 'gripper:up'
    servo_publisher.publisher_.publish(msg)
    servo_publisher.get_logger().info('Publishing a servo command: "%s"' % msg.data)
    time.sleep(1)
    msg.data = 'arm:up'
    servo_publisher.publisher_.publish(msg)
    servo_publisher.get_logger().info('Publishing a servo command: "%s"' % msg.data)
    time.sleep(5)
    #move to first MEA
    response = gantry_client.send_request(-40.5, -73.0, -40.0)
    gantry_client.get_logger().info('Moving gantry %s' % response)
    #deploy gripper
    msg.data = 'arm:down'
    servo_publisher.publisher_.publish(msg)
    servo_publisher.get_logger().info('Publishing a servo command: "%s"' % msg.data)
    time.sleep(0.5)
    #lower z to grip level
    response = gantry_client.send_request(0.0, 0.0, -20.0)
    gantry_client.get_logger().info('Moving gantry %s' % response)
    #grip
    msg.data = 'gripper:down'
    servo_publisher.publisher_.publish(msg)
    servo_publisher.get_logger().info('Publishing a servo command: "%s"' % msg.data)
    time.sleep(1)
    #lift up z to movement level
    response = gantry_client.send_request(0.0, 0.0, 20.0)
    gantry_client.get_logger().info('Moving gantry %s' % response)
    #move to lid placement location
    response = gantry_client.send_request(0.0, -95.0, 0.0)
    gantry_client.get_logger().info('Moving gantry %s' % response)
    #lower z to grip level
    response = gantry_client.send_request(0.0, 0.0, -20.0)
    gantry_client.get_logger().info('Moving gantry %s' % response)
    #release
    msg.data = 'gripper:up'
    servo_publisher.publisher_.publish(msg)
    servo_publisher.get_logger().info('Publishing a servo command: "%s"' % msg.data)
    time.sleep(0.5)
    #lift up z to movement level
    response = gantry_client.send_request(0.0, 0.0, 20.0)
    gantry_client.get_logger().info('Moving gantry %s' % response)      
    #withdraw gripper
    msg.data = 'arm:up'
    servo_publisher.publisher_.publish(msg)
    servo_publisher.get_logger().info('Publishing a servo command: "%s"' % msg.data)
    #move to record
    response = gantry_client.send_request(-70.0, 83.7, -50.0)
    gantry_client.get_logger().info('Moving gantry %s' % response)   
    
    
    
    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    servo_publisher.destroy_node()
    gantry_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
