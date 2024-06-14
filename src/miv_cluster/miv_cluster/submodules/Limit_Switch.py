import RPi.GPIO as GPIO
import time
import threading

# DEFINE LIMIT SWITCH CLASS
class Limit_Switch:
    def __init__(self, pin, name, motor, activeHigh = False):
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
        # add the callback function with a debounce time of 1 s and passing the state of the switch
        GPIO.add_event_detect(pin, GPIO.BOTH, callback = self.callback, bouncetime = 1000) 

    # callback function to update the state of the switch
    def callback(self, pin):
        self.active = GPIO.input(pin) == self.activeHigh
        print(self.motor.name + " " + self.name + "limit switch state changed to " + ("active" if self.active else "inactive"))
        self.motor.checkLimited()
        if not self.motor.override: self.driver.setStopped(self.active)
