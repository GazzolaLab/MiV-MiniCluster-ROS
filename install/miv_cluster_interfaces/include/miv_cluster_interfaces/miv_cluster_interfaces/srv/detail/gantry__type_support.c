// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from miv_cluster_interfaces:srv/Gantry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "miv_cluster_interfaces/srv/detail/gantry__rosidl_typesupport_introspection_c.h"
#include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "miv_cluster_interfaces/srv/detail/gantry__functions.h"
#include "miv_cluster_interfaces/srv/detail/gantry__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  miv_cluster_interfaces__srv__Gantry_Request__init(message_memory);
}

void miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_fini_function(void * message_memory)
{
  miv_cluster_interfaces__srv__Gantry_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_member_array[5] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Gantry_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Gantry_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Gantry_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Gantry_Request, sensor_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Gantry_Request, measurement_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_members = {
  "miv_cluster_interfaces__srv",  // message namespace
  "Gantry_Request",  // message name
  5,  // number of fields
  sizeof(miv_cluster_interfaces__srv__Gantry_Request),
  miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_member_array,  // message members
  miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Gantry_Request)() {
  if (!miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &miv_cluster_interfaces__srv__Gantry_Request__rosidl_typesupport_introspection_c__Gantry_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "miv_cluster_interfaces/srv/detail/gantry__rosidl_typesupport_introspection_c.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/gantry__functions.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/gantry__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  miv_cluster_interfaces__srv__Gantry_Response__init(message_memory);
}

void miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_fini_function(void * message_memory)
{
  miv_cluster_interfaces__srv__Gantry_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Gantry_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_measurement",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Gantry_Response, force_measurement),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_members = {
  "miv_cluster_interfaces__srv",  // message namespace
  "Gantry_Response",  // message name
  2,  // number of fields
  sizeof(miv_cluster_interfaces__srv__Gantry_Response),
  miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_member_array,  // message members
  miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Gantry_Response)() {
  if (!miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &miv_cluster_interfaces__srv__Gantry_Response__rosidl_typesupport_introspection_c__Gantry_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/gantry__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_service_members = {
  "miv_cluster_interfaces__srv",  // service namespace
  "Gantry",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_Request_message_type_support_handle,
  NULL  // response message
  // miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_Response_message_type_support_handle
};

static rosidl_service_type_support_t miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_service_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Gantry_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Gantry_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Gantry)() {
  if (!miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_service_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Gantry_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Gantry_Response)()->data;
  }

  return &miv_cluster_interfaces__srv__detail__gantry__rosidl_typesupport_introspection_c__Gantry_service_type_support_handle;
}
