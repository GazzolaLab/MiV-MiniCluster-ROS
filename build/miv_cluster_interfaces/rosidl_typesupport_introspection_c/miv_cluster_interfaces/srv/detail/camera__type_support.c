// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "miv_cluster_interfaces/srv/detail/camera__rosidl_typesupport_introspection_c.h"
#include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "miv_cluster_interfaces/srv/detail/camera__functions.h"
#include "miv_cluster_interfaces/srv/detail/camera__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  miv_cluster_interfaces__srv__Camera_Request__init(message_memory);
}

void miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_fini_function(void * message_memory)
{
  miv_cluster_interfaces__srv__Camera_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_member_array[6] = {
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Request, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Request, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Request, z1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Request, calibration_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qrscan_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Request, qrscan_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iteration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Request, iteration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_members = {
  "miv_cluster_interfaces__srv",  // message namespace
  "Camera_Request",  // message name
  6,  // number of fields
  sizeof(miv_cluster_interfaces__srv__Camera_Request),
  miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_member_array,  // message members
  miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Camera_Request)() {
  if (!miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &miv_cluster_interfaces__srv__Camera_Request__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "miv_cluster_interfaces/srv/detail/camera__rosidl_typesupport_introspection_c.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/camera__functions.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/camera__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  miv_cluster_interfaces__srv__Camera_Response__init(message_memory);
}

void miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_fini_function(void * message_memory)
{
  miv_cluster_interfaces__srv__Camera_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_member_array[3] = {
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Response, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Response, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Camera_Response, z2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_members = {
  "miv_cluster_interfaces__srv",  // message namespace
  "Camera_Response",  // message name
  3,  // number of fields
  sizeof(miv_cluster_interfaces__srv__Camera_Response),
  miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_member_array,  // message members
  miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Camera_Response)() {
  if (!miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &miv_cluster_interfaces__srv__Camera_Response__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/camera__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_service_members = {
  "miv_cluster_interfaces__srv",  // service namespace
  "Camera",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_Request_message_type_support_handle,
  NULL  // response message
  // miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_Response_message_type_support_handle
};

static rosidl_service_type_support_t miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Camera_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Camera_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Camera)() {
  if (!miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Camera_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Camera_Response)()->data;
  }

  return &miv_cluster_interfaces__srv__detail__camera__rosidl_typesupport_introspection_c__Camera_service_type_support_handle;
}
