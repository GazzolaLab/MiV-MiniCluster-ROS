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
import RPi.GPIO as GPIO
import rclpy
from rclpy.node import Node
import time
import schedule
import numpy as np

# import message/service types
from std_msgs.msg import String
from miv_cluster_interfaces.srv import MeaJob


class RunNowAsync(Node):

    def __init__(self):
        super().__init__('runnow_async')
        self.cli = self.create_client(MeaJob, 'run_a_job')
        while not self.cli.wait_for_service(timeout_sec=5.0):
            self.get_logger().info('service not available, waiting again...')
        self.req = MeaJob.Request()

    def send_request(self, list_of_MEA, list_of_recordTime):
        self.req.mea_list = list_of_MEA
        self.req.recordtime_list = list_of_recordTime
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        return self.future.result()

def main():
    rclpy.init()
    
    try:
        # DEFINE YOUR MEA LIST, numbering from 1 to 11
        #myMEAs = [1,2,3,4,5,6,7,8,9,10,11]
        myMEAs = [8]
        # DEFINE RECORDING TIME FOR EACH MEA IN THE LIST, in second
        myRecordingTime = [120.0]
        
        assert len(myMEAs) == len(myRecordingTime), "Define recording time for each MEA!"
        # set up scheduler
        myRunner = RunNowAsync()
        
        response = myRunner.send_request(myMEAs, myRecordingTime)
        myRunner.get_logger().info('Recording Job %s' % response)
        myRunner.destroy_node()
    	
    except KeyboardInterrupt:
        print("Interrupted by user. Exiting the Scheduler...")
        
    finally:
        rclpy.shutdown()
        print("JOB DONE")
    
if __name__ == '__main__':
    main()
