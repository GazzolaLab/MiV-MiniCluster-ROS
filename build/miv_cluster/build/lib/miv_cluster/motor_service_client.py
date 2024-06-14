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

from miv_cluster_interfaces.srv import Gantry
import rclpy
from rclpy.node import Node


class GantryClientAsync(Node):

    def __init__(self):
        super().__init__('gantry_client_async')
        self.cli = self.create_client(Gantry, 'gantry_move_by')
        while not self.cli.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = Gantry.Request()

    def send_request(self, X, Y, Z, sensor_flag):
        self.req.x = X
        self.req.y = Y
        self.req.z = Z
        self.req.sensor_flag = sensor_flag
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()


def main():
    rclpy.init()

    gantry_client = GantryClientAsync()
    response = gantry_client.send_request(float(sys.argv[1]), float(sys.argv[2]), float(sys.argv[3]), bool(sys.argv[4]))
    gantry_client.get_logger().info(
        'Moving gantry %s' % response)

    gantry_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
