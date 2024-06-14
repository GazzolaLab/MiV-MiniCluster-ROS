# DEFINE CAMERA SERVICE CLIENT CLASS

import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
import time
import threading

from miv_cluster_interfaces.srv import Camera

class CameraClientAsync(Node):

    def __init__(self):
        super().__init__('camera_client_async')
        self.cli = self.create_client(Camera, 'calibration_xy')
        while not self.cli.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('camera service not available, waiting again...')
        self.req = Camera.Request()
        
    def __del__(self):
        log_destructor = "camera client destructed!"
        print(log_destructor)

    def send_request(self, X, Y, Z, calibration_flag='', qrscan_flag='', iteration=0):
        self.req.x1 = X
        self.req.y1 = Y
        self.req.z1 = Z
        self.req.calibration_flag = calibration_flag
        self.req.qrscan_flag = qrscan_flag
        self.req.iteration = iteration
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

