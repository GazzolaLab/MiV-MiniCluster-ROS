// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "miv_cluster_interfaces/msg/detail/encoder__rosidl_typesupport_introspection_c.h"
#include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "miv_cluster_interfaces/msg/detail/encoder__functions.h"
#include "miv_cluster_interfaces/msg/detail/encoder__struct.h"


// Include directives for member types
// Member `encoder_switch`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  miv_cluster_interfaces__msg__Encoder__init(message_memory);
}

void miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_fini_function(void * message_memory)
{
  miv_cluster_interfaces__msg__Encoder__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_member_array[4] = {
  {
    "x_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__msg__Encoder, x_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__msg__Encoder, y_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_target",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__msg__Encoder, z_target),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoder_switch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__msg__Encoder, encoder_switch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_members = {
  "miv_cluster_interfaces__msg",  // message namespace
  "Encoder",  // message name
  4,  // number of fields
  sizeof(miv_cluster_interfaces__msg__Encoder),
  miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_member_array,  // message members
  miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_init_function,  // function to initialize message memory (memory has to be allocated)
  miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_type_support_handle = {
  0,
  &miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, msg, Encoder)() {
  if (!miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &miv_cluster_interfaces__msg__Encoder__rosidl_typesupport_introspection_c__Encoder_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
