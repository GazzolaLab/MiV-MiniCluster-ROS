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


class SchedulerAsync(Node):

    def __init__(self):
        super().__init__('Scheduler_async')
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

def job_to_run():
    # DEFINE YOUR MEA LIST, numbering from 1 to 11
    myMEAs = [1,2,3,4,5,6,7,8,9,10,11]
    # DEFINE RECORDING TIME FOR EACH MEA IN THE LIST, in second
    myRecordingTime = [20.0,20.0,20.0,20.0,20.0,20.0,20.0,20.0,20.0,20.0,20.0]
    assert len(myMEAs) == len(myRecordingTime), "Define recording time for each MEA!"
    # set up scheduler
    myScheduler = SchedulerAsync()
    
    print("Running MEA Job Scheduler. Running Job...") 
    response = myScheduler.send_request(myMEAs, myRecordingTime)
    myScheduler.get_logger().info('Recording Job %s' % response)
    myScheduler.destroy_node()
    
def main():
    rclpy.init()
    
    try:
         # select one of the following methods to schedule your job
         # NOTE 1. Make sure the time interval between two runs is larger than the time needed 
         # for excuting each run (estimate: SUM of all recording time + 2mins * number of MEAs)
         # NOTE 2. every.(XX).minute/hour indicates the interval between two runs,
         # if wants to start the run  at exact minute/hour, use the every.minute.at("") function
         print("Running MEA Job Scheduler. Pending ...")
         
         schedule.every(1.0).minutes.do(job_to_run)     
         #schedule.every().hour.do(job_to_run)
         #schedule.every().monday.do(job_to_run)
         #schedule.every().day.at("10:30").do(job_to_run)
         #schedule.every().thursday.at("16:37").do(job_to_run)
         #schedule.every().day.at("14:15", "Europe/Amsterdam").do(job_to_run)
         #schedule.every().minute.at(":17").do(job_to_run)
         
         while True:
             schedule.run_pending()

    	
    except KeyboardInterrupt:
        print("Interrupted by user. Exiting the Scheduler...")
        
    finally:
        rclpy.shutdown()
        print("JOB DONE")  

    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
