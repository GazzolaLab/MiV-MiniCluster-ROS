# DEFINE GANTRY SERVICE CLIENT CLASS

import rclpy
from rclpy.node import Node
import RPi.GPIO as GPIO
import time
import threading

from miv_cluster_interfaces.srv import Gantry

class GantryClientAsync(Node):

    def __init__(self):
        super().__init__('gantry_client_async')
        self.cli = self.create_client(Gantry, 'gantry_move_by')
        while not self.cli.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('gantry service not available, waiting again...')
        self.req = Gantry.Request()

    def __del__(self):
        log_destructor = "gantry client destructed!"
        print(log_destructor)

    def send_request(self, X, Y, Z, sensor_flag='', measurement_flag=''):
        self.req.x = X
        self.req.y = Y
        self.req.z = Z
        self.req.sensor_flag = sensor_flag
        self.req.measurement_flag = measurement_flag
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()
