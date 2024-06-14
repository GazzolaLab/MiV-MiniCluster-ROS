#!/usr/bin/env python

########################
# Imports
########################
import math
import time
import RPi.GPIO as GPIO

###########################
# Constants
###########################
#Directions of rotation from perspective with motor shaft pointed towards you with right hand rule
POSITIVE = True         #counterclockwise
NEGATIVE = False          #clockwise
#Modes of movement
ABSOLUTE = False         #rotate relative to the 0 position
RELATIVE = True          #rotate relative to the current position

#####################################################################################
# Stepper Main Class
#####################################################################################
class Stepper_Driver(object):

	#------------------------------------------
	# Variable Defaults
	#------------------------------------------
	_pinStep = -1              # gpio pin for step signal
	_pinDir = -1               # gpio pin for direction signal
	_pinEn = -1                # gpio pin for enable signal
	_direction = None          # current direction of rotation for positive steps
	_enabled = None            # motor can move when true
	_powered = None 	   # motor is powered when true
	_movementMode = None       # mode of movement
	_active = False            # the moving state of the motor
	_stopped = False           # whether or not to stop the motor
	_pulsesPerStep = 256       # microstepping - number of pulses for one full step
	_stepsPerRev = 200         # steps per one revolution of the motor
	_pulseCountAbs = 0         # current position of stepper in steps
	_pulseCountAbsTarget = 0   # the target position in steps
	_pulseSpeed = -1           # the current speed in pulses per second
	_pulseSpeedTarget = -1     # the maximum speed in pulses per second
	_pulseAcceleration = -1    # the acceleration in steps per second per second
	_pulseAccelerationMax = -1 # the max acceleration in steps per second per second
	_pulseAccelerationMin = -1 # the min acceleration in steps per second per second
	_pulseTimeLast = 0         # the last step time in microseconds
	_pulseAccelCount = 0       # step counter
	_pulsePeriod = -1          # the current interval between two steps
	_pulsePeriod0 = 200        # initial step size in microseconds
	_pulsePeriodMax = -1       # maximium recognizable period by driver circuit
	_pulsePeriodMin = -1       # minimum allowed pulse width in microseconds
	_pulsePeriodLast = 0       # last step size in microseconds
	_pulsePeriodTarget = -1    # min step size in microseconds based on maxSpeed
	_pulseCount = 0

	#----------------------------------------------
	# constructor
	#----------------------------------------------
	def __init__(self, pinStep, pinDir, pinEn, pulsesPerStep, stepsPerRev, accel0, accelMax, accelMin, speed0, speedMax, speedMin, dir = POSITIVE):
		self._pinStep = pinStep
		self._pinDir = pinDir
		self._pinEn = pinEn
		self._pulsesPerStep = pulsesPerStep
		self._stepsPerRev = stepsPerRev
		self._pulseAccelerationMax = accelMax
		self._pulseAccelerationMin = accelMin
		self._pulseSpeed = 0
		self._pulseSpeedMin = speedMin
		self._pulseSpeedMax = speedMax
		self._pulsePeriod0 = 1000000/speedMin
		self._pulsePeriodMin = 1000000/speedMin
		self._pulsePeriodMax = 1000000/speedMax
		self._Speed0 = speed0
		GPIO.setmode(GPIO.BCM)
		GPIO.setwarnings(False)
		GPIO.setup(self._pinStep, GPIO.OUT)
		GPIO.setup(self._pinDir, GPIO.OUT)
		if not self._pinEn is None:
			GPIO.setup(self._pinEn, GPIO.OUT)

		self.setDirection(dir)

	#-----------------------------------------------------------------------
	# destructor
	#-----------------------------------------------------------------------
	def __del__(self):
		GPIO.cleanup()

	#-----------------------------------------------------------------------
	# returns the motor's pin for step signal
	#-----------------------------------------------------------------------
	def getPinStep(self):
		return self._pinStep

	#-----------------------------------------------------------------------
	# overwrites the motor's pin for step signal
	#-----------------------------------------------------------------------
	def setPinStep(self, pinStep):
		self._stepPin = pinStep

	#-----------------------------------------------------------------------
	# returns the motor's pin for direction signal
	#-----------------------------------------------------------------------
	def getPinDir(self):
		return self._pinDir

	#-----------------------------------------------------------------------
	# overwrites the motor's pin for direction signal
	#-----------------------------------------------------------------------
	def setPinDir(self, pinDir):
		self._pinDir = pinDir

	#-----------------------------------------------------------------------
	# returns the motor's pin for enable signal
	#-----------------------------------------------------------------------
	def getPinEn(self):
		return self._pinEn

	#-----------------------------------------------------------------------
	# overwrites the motor's pin for enable signal
	#-----------------------------------------------------------------------
	def setPinEn(self, pinEn):
		self._pinEn = pinEn

	#-----------------------------------------------------------------------
	# returns the motor shaft direction
	#-----------------------------------------------------------------------
	def getDirection(self):
		return (self._direction)

	#-----------------------------------------------------------------------
	# sets the motor shaft direction
	#-----------------------------------------------------------------------
	def setDirection(self, direction):
		self._direction = direction
		GPIO.output(self._pinDir, direction)

	#-----------------------------------------------------------------------
	# gets whether motor is enabled or disabled
	#-----------------------------------------------------------------------
	def getPowered(self):
		return self._powered

	#-----------------------------------------------------------------------
	# enables or disables the motor current output
	#-----------------------------------------------------------------------
	def setPowered(self, en):
		self._powered = en
		if not self._pinEn is None:
			GPIO.output(self._pinEn, not en)

	#-----------------------------------------------------------------------
	# gets whether motor is enabled or disabled
	#-----------------------------------------------------------------------
	def getEnabled(self):
		return self._enabled

	#-----------------------------------------------------------------------
	# enables or disables the motor current output
	#-----------------------------------------------------------------------
	def setEnabled(self, en):
		self._enabled = en

	#-----------------------------------------------------------------------
	# get the current general movment mode: False = Absolute; True = Relative
	#-----------------------------------------------------------------------
	def getMovementMode(self):
		return self._movementMode

	#-----------------------------------------------------------------------
	# set the general movment mode: False = Absolute; True = Relative
	#-----------------------------------------------------------------------
	def setMovementMode(self, movementMode):
		self._movementMode = movementMode

	#-----------------------------------------------------------------------
	# gets whether motor is actively moving
	#-----------------------------------------------------------------------
	def getActive(self):
		return self._active

	#-----------------------------------------------------------------------
	# get the stopped status of the motor
	#-----------------------------------------------------------------------
	def getStopped(self):
		return self._stopped

	#-----------------------------------------------------------------------
	# set the stopped status of the current movement
	#-----------------------------------------------------------------------
	def setStopped(self, stop):
		self._stopped = stop

	#-----------------------------------------------------------------------
	# get the microstep setting of the motor
	#-----------------------------------------------------------------------
	def getPulsesPerStep(self):
		return self._pulsesPerStep

	#-----------------------------------------------------------------------
	# set the number of pulses to make one full step (microstepping)
	#-----------------------------------------------------------------------
	def setPulsesPerStep(self, pulses):
		self._pulsesPerStep = pulses

	#-----------------------------------------------------------------------
	# get the number of steps per revolution
	#-----------------------------------------------------------------------
	def getStepsPerRev(self):
		return self._stepsPerRev

	#-----------------------------------------------------------------------
	# set the number of steps requires to rotate the motor shaft 360 degrees
	#-----------------------------------------------------------------------
	def setStepsPerRev(self, steps):
		self._stepsPerRev = steps

	#-----------------------------------------------------------------------
	# returns the current motor position in microsteps
	#-----------------------------------------------------------------------
	def getPulseCountAbs(self):
		return self._pulseCountAbs

	#-----------------------------------------------------------------------
	# overwrites the current motor position in microsteps
	#-----------------------------------------------------------------------
	def setPulseCountAbs(self, pos):
		self._pulseCountAbs = pos

	#-----------------------------------------------------------------------
	# returns the current motor position in Rev - MODIFIED
	#-----------------------------------------------------------------------
	def getRevCountAbs(self):
		return self._pulseCountAbs/self._pulsesPerStep/self._stepsPerRev

	#-----------------------------------------------------------------------
	# overwrites the current motor position in revolutions
	#-----------------------------------------------------------------------
	def setRevCountAbs(self, count):
		self.setPulseCountAbs(self._pulsesPerStep*self._stepsPerRev*count)

	#-----------------------------------------------------------------------
	# returns the target motor speed in pulses per second
	#-----------------------------------------------------------------------
	def getPulseSpeedTarget(self):
		return self._pulseSpeedTarget

	#-----------------------------------------------------------------------
	# runs the motor to the given position.
	# with acceleration and deceleration
	# blocks the code until finished or stopped from a different thread!
	# returns true when the movement if finshed normally and false,
	# when the movement was stopped
	#-----------------------------------------------------------------------
	def runToRevCount(self, rev):
		return self.runToPulseCount(rev*self._pulsesPerStep*self._stepsPerRev)
	#-----------------------------------------------------------------------
	# runs the motor to the given pulse count
	#-----------------------------------------------------------------------		
	def runToPulseCount(self, pulses):
		self._active = True
		self.setStopped(False)	
		self._pulseCount = 0
		if(self._movementMode == RELATIVE):
			self._pulseCountAbsTarget = self._pulseCountAbs + round(pulses)
		else:
			self._pulseCountAbsTarget = round(pulses)
		#if (not (self._pulseCountAbs == pulses)):
		#	self._pulseCountAbsTarget = round(pulses)
		self.computeNewSpeed()
		while (self.run() and not self._stopped and self._enabled): #returns false when target position is reached
			pass
		self._active = False
		self._seeking = False
		return not self._stopped

	#-----------------------------------------------------------------------
	# calculates a new speed if a speed was made
	# returns true if the target position is reached
	# should not be called from outside!
	#-----------------------------------------------------------------------
	def run(self):
		if (self.runSpeed()): #returns true, when a step is made
			self.computeNewSpeed()
		return (self._pulseSpeed != 0.0 and self.pulsesToGo() != 0)

	#-----------------------------------------------------------------------
	# this methods does the actual steps with the current speed
	#-----------------------------------------------------------------------
	def runSpeed(self):
		# Dont do anything unless we actually have a step interval
		if (not self._pulsePeriod):
			return False
		t = time.time_ns()/1000
		if (t - self._pulseTimeLast >= self._pulsePeriod):
			if (self._direction == POSITIVE):
				self._pulseCountAbs += 1
			else:
				self._pulseCountAbs -= 1
			self.pulse()
			self._pulseCount += 1
			self._pulseTimeLast = t # Caution: does not account for costs in step()
			return True
		else:
			return False
			
			
	#-----------------------------------------------------------------------
	# returns the remaining distance the motor should run
	#-----------------------------------------------------------------------
	def pulsesToGo(self):
		return round(self._pulseCountAbsTarget - self._pulseCountAbs)

	#-----------------------------------------------------------------------
	# returns the calculated current speed depending on the acceleration
	# this code is based on:
	# "Generate stepper-motor speed profiles in real time" by David Austin
	#
	# https://www.embedded.com/generate-stepper-motor-speed-profiles-in-real-time/
	# https://web.archive.org/web/20140705143928/http://fab.cba.mit.edu/classes/MIT/961.09/projects/i0/Stepper_Motor_Speed_Profile.pdf
	#-----------------------------------------------------------------------
	def computeNewSpeed(self):
		pulsesToGo = self.pulsesToGo() # get how many pulses are left until target
		#print('pulsesToGo:',pulsesToGo)

		# compute speed
		if (self._pulseCount == 0):
			# make sure step pin is low so a pulse is effective
			GPIO.output(self._pinStep, GPIO.LOW)
			if(pulsesToGo < 0):
				self.setDirection(NEGATIVE)
			elif(pulsesToGo > 0):
				self.setDirection(POSITIVE)		
			else:
				self.setStopped(True)		
		
		self._pulsePeriod = 1000000.0/2000.0
		# set the speed magnitude according to the new period
		self._pulseSpeed = 1000000.0 / self._pulsePeriod #1 second in nano seconds / period in nanoseconds
		# set the speed sign according the direction of motion
		if (self._direction == NEGATIVE):
			self._pulseSpeed = -self._pulseSpeed

	#-----------------------------------------------------------------------
	# method that makes one pulse
	# for the TMC2209 there needs to be a signal duration of minimum 100 ns
	#-----------------------------------------------------------------------
	def pulse(self):
		GPIO.output(self._pinStep, GPIO.HIGH)
		time.sleep(1/1000/1000)
		GPIO.output(self._pinStep, GPIO.LOW)
		time.sleep(1/1000/1000)


