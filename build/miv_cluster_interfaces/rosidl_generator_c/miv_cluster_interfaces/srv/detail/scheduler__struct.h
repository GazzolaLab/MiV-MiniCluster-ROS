// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from miv_cluster_interfaces:srv/Scheduler.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__SCHEDULER__STRUCT_H_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__SCHEDULER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mea_list'
// Member 'recordtime_list'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/Scheduler in the package miv_cluster_interfaces.
typedef struct miv_cluster_interfaces__srv__Scheduler_Request
{
  rosidl_runtime_c__int32__Sequence mea_list;
  rosidl_runtime_c__float__Sequence recordtime_list;
} miv_cluster_interfaces__srv__Scheduler_Request;

// Struct for a sequence of miv_cluster_interfaces__srv__Scheduler_Request.
typedef struct miv_cluster_interfaces__srv__Scheduler_Request__Sequence
{
  miv_cluster_interfaces__srv__Scheduler_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} miv_cluster_interfaces__srv__Scheduler_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Scheduler in the package miv_cluster_interfaces.
typedef struct miv_cluster_interfaces__srv__Scheduler_Response
{
  rosidl_runtime_c__String status;
} miv_cluster_interfaces__srv__Scheduler_Response;

// Struct for a sequence of miv_cluster_interfaces__srv__Scheduler_Response.
typedef struct miv_cluster_interfaces__srv__Scheduler_Response__Sequence
{
  miv_cluster_interfaces__srv__Scheduler_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} miv_cluster_interfaces__srv__Scheduler_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__SCHEDULER__STRUCT_H_
