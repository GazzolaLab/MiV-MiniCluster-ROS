// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from miv_cluster_interfaces:srv/Gantry.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__STRUCT_H_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Gantry in the package miv_cluster_interfaces.
typedef struct miv_cluster_interfaces__srv__Gantry_Request
{
  float x;
  float y;
  float z;
  bool sensor_flag;
  bool measurement_flag;
} miv_cluster_interfaces__srv__Gantry_Request;

// Struct for a sequence of miv_cluster_interfaces__srv__Gantry_Request.
typedef struct miv_cluster_interfaces__srv__Gantry_Request__Sequence
{
  miv_cluster_interfaces__srv__Gantry_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} miv_cluster_interfaces__srv__Gantry_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Gantry in the package miv_cluster_interfaces.
typedef struct miv_cluster_interfaces__srv__Gantry_Response
{
  rosidl_runtime_c__String status;
  float force_measurement;
} miv_cluster_interfaces__srv__Gantry_Response;

// Struct for a sequence of miv_cluster_interfaces__srv__Gantry_Response.
typedef struct miv_cluster_interfaces__srv__Gantry_Response__Sequence
{
  miv_cluster_interfaces__srv__Gantry_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} miv_cluster_interfaces__srv__Gantry_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__STRUCT_H_
