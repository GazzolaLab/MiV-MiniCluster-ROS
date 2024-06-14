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

import RPi.GPIO as GPIO

class ServoMotor:

    def __init__(self, gpio_pin, receiving_freq, pwm_range):
    	self.gpio_pin = gpio_pin
    	self.pwm_range = pwm_range
    	
    	GPIO.setmode(GPIO.BCM)
    	GPIO.setwarnings(False)
    	GPIO.setup(gpio_pin, GPIO.OUT)
    	self.pin_pwm = GPIO.PWM(gpio_pin,receiving_freq)      	

class GripperSubscriber(Node):

    def __init__(self): 
        super().__init__('gripper_subscriber')
        # init the servo motors - one for arm, one for gripper
        arm_pin = 4
        arm_range = [11,1]                         #frequcenies for position 'up' and 'down'  
        self.arm_motor = ServoMotor(arm_pin, 50, arm_range)  #receiving frequency of servo - 50Hz 
        gripper_pin = 17
        gripper_range = [8,6.3]                      #frequcenies for position 'up' and 'down'  
        self.gripper_motor = ServoMotor(gripper_pin, 50, gripper_range) 

        default_msg = 'start'
        self.set_servo(default_msg)
        self.subscription = self.create_subscription(
            String,
            'GripperCommand',
            self.task_callback,
            10)
        self.subscription  # prevent unused variable warning

    def task_callback(self, msg):
        self.get_logger().info('Receiving a servo command: "%s"' % msg.data)
        self.set_servo(msg.data)
        
    def set_servo(self,s_command):
    
        if s_command=='start':
            self.arm_motor.pin_pwm.start(0)
            self.gripper_motor.pin_pwm.start(0)
            time.sleep(0.5)
        else:
       	    # assign action to motor
       	    servo_motor = self.arm_motor if s_command.partition(":")[0] == 'arm' else self.gripper_motor 
       	    servo_action = servo_motor.pwm_range[0] if s_command.partition(":")[2] == 'up' else servo_motor.pwm_range[1]
       	     
       	    # activate motor
            servo_motor.pin_pwm.ChangeDutyCycle(servo_action)      
            time.sleep(0.5)
            servo_motor.pin_pwm.ChangeDutyCycle(0)
  
        


def main(args=None):
    rclpy.init(args=args)

    try:
        gripper_subscriber = GripperSubscriber()
        rclpy.spin(gripper_subscriber)
        GPIO.cleanup()
        rclpy.shutdown()
    
    except KeyboardInterrupt:
        # Destroy the node explicitly
        # (optional - otherwise it will be done automatically
        # when the garbage collector destroys the node object)
        gripper_subscriber.destroy_node()
        print("Interrupted by user. Exiting the gipper subscriber...")
        GPIO.cleanup()


if __name__ == '__main__':
    main()
