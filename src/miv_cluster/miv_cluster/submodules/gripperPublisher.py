# creat controller for onboard flash light


import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
import time
import threading
from std_msgs.msg import String

class GripperPublisher(Node):

    def __init__(self):
        super().__init__('gripper_publisher')
        self.publisher_ = self.create_publisher(String, 'GripperCommand', 10)
