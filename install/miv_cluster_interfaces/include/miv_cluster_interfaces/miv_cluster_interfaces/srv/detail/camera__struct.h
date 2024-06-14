// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__STRUCT_H_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Camera in the package miv_cluster_interfaces.
typedef struct miv_cluster_interfaces__srv__Camera_Request
{
  float x1;
  float y1;
  float z1;
  bool calibration_flag;
  bool qrscan_flag;
  int32_t iteration;
} miv_cluster_interfaces__srv__Camera_Request;

// Struct for a sequence of miv_cluster_interfaces__srv__Camera_Request.
typedef struct miv_cluster_interfaces__srv__Camera_Request__Sequence
{
  miv_cluster_interfaces__srv__Camera_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} miv_cluster_interfaces__srv__Camera_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Camera in the package miv_cluster_interfaces.
typedef struct miv_cluster_interfaces__srv__Camera_Response
{
  float x2;
  float y2;
  float z2;
} miv_cluster_interfaces__srv__Camera_Response;

// Struct for a sequence of miv_cluster_interfaces__srv__Camera_Response.
typedef struct miv_cluster_interfaces__srv__Camera_Response__Sequence
{
  miv_cluster_interfaces__srv__Camera_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} miv_cluster_interfaces__srv__Camera_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__STRUCT_H_
