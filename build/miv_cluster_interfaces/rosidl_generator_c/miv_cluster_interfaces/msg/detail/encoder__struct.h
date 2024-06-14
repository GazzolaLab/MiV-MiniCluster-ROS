// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_
#define MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'encoder_switch'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Encoder in the package miv_cluster_interfaces.
typedef struct miv_cluster_interfaces__msg__Encoder
{
  float x_target;
  float y_target;
  float z_target;
  rosidl_runtime_c__String encoder_switch;
} miv_cluster_interfaces__msg__Encoder;

// Struct for a sequence of miv_cluster_interfaces__msg__Encoder.
typedef struct miv_cluster_interfaces__msg__Encoder__Sequence
{
  miv_cluster_interfaces__msg__Encoder * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} miv_cluster_interfaces__msg__Encoder__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_H_
