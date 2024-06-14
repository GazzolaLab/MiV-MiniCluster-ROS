# creat controller for onboard flash light


import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
import time
import threading

class flashLight:

    def __init__(self):
        GPIO.setmode(GPIO.BCM)
        GPIO.setwarnings(False)
        self.LED_pin = 27                      # pin 27 for controlling LED
        GPIO.setup(self.LED_pin, GPIO.OUT)
   
    def __del__(self):
        log_destructor = "flash light controller destructed!"
        print(log_destructor)
        
        
    def turn_on(self):
        GPIO.output(self.LED_pin, GPIO.HIGH)
        
    def turn_off(self):
        GPIO.output(self.LED_pin, GPIO.LOW)
    
