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
from rclpy.node import Node
import time
import RPi.GPIO as GPIO
import numpy as np
import cv2
from matplotlib import pyplot as plt
from qreader import QReader

# import submodules

# import message/service types
from miv_cluster_interfaces.srv import Camera


# DEFINE SERVICE CLASS
######################################################################################### 
class CameraService(Node):

    def __init__(self):
        super().__init__('camera_service')
        self.srv = self.create_service(Camera, 'calibration_xy', self.camera_cali_callback)
       
        # camera setup
        self.resX = 640
        self.resY = 480
        self.image = np.zeros((self.resX, self.resY, 3), np.uint8)
    
        print("Camera ready ...")
            
    def dynamic_tuning_range(self):
        # setting thershold based on the color of the original image
        # images taken in the current setting appears to be either pink or blue-ish
        # distinguish them based on RED channel
        # data sequence is in BGR
        red_channel = np.mean(self.image[:,:,2])
        if red_channel < 120:
            threshold = 80
        else:
            threshold = 92
        
        tune_range = 10
        return int(threshold-0.5*tune_range), int(threshold+0.5*tune_range)
    
    def capture_a_frame(self):
        # capture an image
        # load camera, if failed exit and report
        cam_index = -1
        cam = cv2.VideoCapture(cam_index, cv2.CAP_V4L2)
        cam.set(3, self.resX)
        cam.set(4, self.resY)
        if not cam.isOpened():
            print("Cannot open camera")
            exit()
        
        ret, self.image = cam.read()
    
    def mea_detection(self,iteration=0):
        # save original image first
        write_name = "calibration_"+str(iteration)+".png" 
        cv2.imwrite(write_name,self.image)
        best_image = None
        best_contour = None
        target_area = 120400.0
        
        # dynamic thresholding to find the best matching pattern
        lower, upper = self.dynamic_tuning_range()
        for dynamic_thres in range(lower, upper):
            ret, thresh_gray = cv2.threshold(cv2.cvtColor(self.image, cv2.COLOR_BGR2GRAY), dynamic_thres, 255, cv2.THRESH_BINARY)        
        
            # Large Pattern Removal - remove large noisy patterns around the MEA
            contours, hier = cv2.findContours(thresh_gray, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
            largest_contour = max(contours, key = cv2.contourArea)
            stencil = np.zeros(thresh_gray.shape).astype(thresh_gray.dtype)
            cv2.fillPoly(stencil, pts=[largest_contour], color=(255,255,255))
            thresh_gray_invert = cv2.bitwise_not(thresh_gray)
            thresh_gray_LPR = cv2.bitwise_and(thresh_gray_invert, stencil)
        
            # Small Pattern Removal - remove small noisy patterns  
            contours, hier = cv2.findContours(thresh_gray_LPR, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
            contour_remove = []
            for contour in contours:
                # remove all small features
                if cv2.contourArea(contour)<15.0:
                    contour_remove.append(contour)
                else:
                    # remove features that are far from the center of the image
                    M = cv2.moments(contour)
                    cX = int(M["m10"] / M["m00"])
                    cY = int(M["m01"] / M["m00"])
                    center_dis = ((cX-0.5*self.resX)**2 + (cY-0.5*self.resY)**2)**0.5
                    if center_dis > 228:
                        contour_remove.append(contour)
        
            # fill all those contours black to remove them
            for contour in contour_remove:
                stencil = np.zeros(thresh_gray_LPR.shape).astype(thresh_gray_LPR.dtype)
                cv2.fillPoly(stencil, pts=[contour], color=(255,255,255))
                stencil = cv2.bitwise_not(stencil)
                thresh_gray_LPR = cv2.bitwise_and(thresh_gray_LPR, stencil)
        
            # opening to merge discrete contact pads
            thresh_gray_LPR_invert = cv2.bitwise_not(thresh_gray_LPR)
            thresh_gray_LPR_invert_opened = cv2.morphologyEx(thresh_gray_LPR_invert, cv2.MORPH_OPEN, cv2.getStructuringElement(cv2.MORPH_ELLIPSE, (30,30)));
            thresh_gray_LPR_opened = cv2.bitwise_not(thresh_gray_LPR_invert_opened)
            cv2.imwrite(str(dynamic_thres)+'MEA_gray.png', thresh_gray_LPR_opened)
         
            # find all contours
            # find octagon shape contour
            # pick the largest octagon shape contour
            # find the center of the approxiamated octagon
            contours, hier = cv2.findContours(thresh_gray_LPR_opened, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
            octagon_contour = []
            for contour in contours:
                perimeter = cv2.arcLength(contour, True)
                approximatedShape = cv2.approxPolyDP(contour, 0.03 * perimeter, True)
                #cv2.drawContours(self.image, [approximatedShape], 0, (0, 255, 0),3)
                if len(approximatedShape) == 8:
                    octagon_contour.append(contour)
            # if an octagon contour is detected
            # iterate and find out the contour closest to the actual MEA size
            if octagon_contour:
                current_octagon_contour = max(octagon_contour, key = cv2.contourArea)
                # if pattern is too small (80% of target area), not MEA, skip it
                if cv2.contourArea(current_octagon_contour)<(0.8*target_area):
                    continue
                # otherwise, find contour closet to the MEA
                if best_image is None:
                    best_image = thresh_gray_LPR_opened
                    best_contour = current_octagon_contour
                else: 
                    best_area = cv2.contourArea(best_contour)
                    current_area = cv2.contourArea(current_octagon_contour)
                    if abs(current_area-target_area)<abs(best_area-target_area):
                        best_image = thresh_gray_LPR_opened
                        best_contour = current_octagon_contour            
            
        if best_image is not None:
            cv2.drawContours(self.image, [best_contour], 0, (0, 0, 255),1)
            M = cv2.moments(best_contour)
            cX = int(M["m10"] / M["m00"])
            cY = int(M["m01"] / M["m00"])
            cZ = 0
            cv2.circle(self.image, (cX, cY), 7, (0, 0, 255), -1)
            write_name = "calibration_gray_"+str(iteration)+".png"
            cv2.imwrite(write_name, best_image)
            write_name = "calibration_center_"+str(iteration)+".png"
            cv2.imwrite(write_name, self.image)
        else:
            cX = 0
            cY = 0
            cZ = -50  #set a difference in z to indicate an error encounter in calibration 
        
        return cX, cY, cZ
    
    def qrcode_detection(self):
        # save original image first
        write_name = "QRcode.png" 
        cv2.imwrite(write_name,self.image)       
        
        # qr code detector
        qreader = QReader()
        detections = qreader.detect(image=self.image)
        
        # check if a qrcode is detected in the image
        for detection in detections:
            if detection:
                points = detection['polygon_xy']
                ctr = np.array(points).astype(np.int32)
                cv2.drawContours(self.image, [ctr], 0, (0, 0, 255),1)
                M = cv2.moments(points)
                cX = int(M["m10"] / M["m00"])
                cY = int(M["m01"] / M["m00"])
                cZ = 0
                cv2.circle(self.image, (cX, cY), 7, (0, 0, 255), -1)
                write_name = "QRcode_detected.png"
                cv2.imwrite(write_name, self.image)
            else:
                cX = 0
                cY = 0
                cZ = -50  #set a difference in z to indicate that no qrcode detected
        
        return cX, cY, cZ  
          
    def convert_distance(self, cX, cY, cZ):
        pixel_to_distance = 1/7            # calibrate pixel to mm ratio at z = -88
        return pixel_to_distance*(cX-0.5*self.resX), pixel_to_distance*(cY-0.5*self.resY+17.5), cZ 
    
    def camera_cali_callback(self, request, response):
        self.get_logger().info('Camera calibration request: %s' % str(request.calibration_flag))
        
        # if running MEA job, detect MEA
        if request.calibration_flag:
            self.capture_a_frame()
            centerX, centerY, centerZ = self.mea_detection(iteration=request.iteration)
            disX, disY, disZ = self.convert_distance(centerX, centerY, centerZ)
            #print("distance to center: X:",disX, "Y:", disY)
            response.x2=request.x1 - disY
            response.y2=request.y1 - disX
            response.z2=request.z1 - disZ
        # if running calibration job, detect QR code
        elif request.qrscan_flag:
            self.capture_a_frame()
            centerX, centerY, centerZ = self.qrcode_detection()
            disX, disY, disZ = self.convert_distance(centerX, centerY, centerZ)
            response.x2=request.x1 - disY
            response.y2=request.y1 - disX
            response.z2=request.z1 - disZ
        else:
            response.x2=request.x1
            response.y2=request.y1
            response.z2=request.z1       
        
        return response    

def main():
    rclpy.init()
    
    # create camera service
    try:
        camera_service = CameraService()
        rclpy.spin(camera_service)
        rclpy.shutdown()
       
    except KeyboardInterrupt:
        camera_service.destroy_node()
        print("Interrupted by user. Exiting the camera server...")
            
if __name__ == '__main__':
    main()
