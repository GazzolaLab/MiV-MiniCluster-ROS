// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from miv_cluster_interfaces:srv/Scheduler.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "miv_cluster_interfaces/srv/detail/scheduler__rosidl_typesupport_introspection_c.h"
#include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "miv_cluster_interfaces/srv/detail/scheduler__functions.h"
#include "miv_cluster_interfaces/srv/detail/scheduler__struct.h"


// Include directives for member types
// Member `mea_list`
// Member `recordtime_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  miv_cluster_interfaces__srv__Scheduler_Request__init(message_memory);
}

void miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_fini_function(void * message_memory)
{
  miv_cluster_interfaces__srv__Scheduler_Request__fini(message_memory);
}

size_t miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__size_function__Scheduler_Request__mea_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_const_function__Scheduler_Request__mea_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_function__Scheduler_Request__mea_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__fetch_function__Scheduler_Request__mea_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_const_function__Scheduler_Request__mea_list(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__assign_function__Scheduler_Request__mea_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_function__Scheduler_Request__mea_list(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__resize_function__Scheduler_Request__mea_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__size_function__Scheduler_Request__recordtime_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_const_function__Scheduler_Request__recordtime_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_function__Scheduler_Request__recordtime_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__fetch_function__Scheduler_Request__recordtime_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_const_function__Scheduler_Request__recordtime_list(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__assign_function__Scheduler_Request__recordtime_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_function__Scheduler_Request__recordtime_list(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__resize_function__Scheduler_Request__recordtime_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_member_array[2] = {
  {
    "mea_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Scheduler_Request, mea_list),  // bytes offset in struct
    NULL,  // default value
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__size_function__Scheduler_Request__mea_list,  // size() function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_const_function__Scheduler_Request__mea_list,  // get_const(index) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_function__Scheduler_Request__mea_list,  // get(index) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__fetch_function__Scheduler_Request__mea_list,  // fetch(index, &value) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__assign_function__Scheduler_Request__mea_list,  // assign(index, value) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__resize_function__Scheduler_Request__mea_list  // resize(index) function pointer
  },
  {
    "recordtime_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Scheduler_Request, recordtime_list),  // bytes offset in struct
    NULL,  // default value
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__size_function__Scheduler_Request__recordtime_list,  // size() function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_const_function__Scheduler_Request__recordtime_list,  // get_const(index) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__get_function__Scheduler_Request__recordtime_list,  // get(index) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__fetch_function__Scheduler_Request__recordtime_list,  // fetch(index, &value) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__assign_function__Scheduler_Request__recordtime_list,  // assign(index, value) function pointer
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__resize_function__Scheduler_Request__recordtime_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_members = {
  "miv_cluster_interfaces__srv",  // message namespace
  "Scheduler_Request",  // message name
  2,  // number of fields
  sizeof(miv_cluster_interfaces__srv__Scheduler_Request),
  miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_member_array,  // message members
  miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Scheduler_Request)() {
  if (!miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &miv_cluster_interfaces__srv__Scheduler_Request__rosidl_typesupport_introspection_c__Scheduler_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "miv_cluster_interfaces/srv/detail/scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/scheduler__functions.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/scheduler__struct.h"


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  miv_cluster_interfaces__srv__Scheduler_Response__init(message_memory);
}

void miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_fini_function(void * message_memory)
{
  miv_cluster_interfaces__srv__Scheduler_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_member_array[1] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces__srv__Scheduler_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_members = {
  "miv_cluster_interfaces__srv",  // message namespace
  "Scheduler_Response",  // message name
  1,  // number of fields
  sizeof(miv_cluster_interfaces__srv__Scheduler_Response),
  miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_member_array,  // message members
  miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Scheduler_Response)() {
  if (!miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &miv_cluster_interfaces__srv__Scheduler_Response__rosidl_typesupport_introspection_c__Scheduler_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/scheduler__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_service_members = {
  "miv_cluster_interfaces__srv",  // service namespace
  "Scheduler",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_Request_message_type_support_handle,
  NULL  // response message
  // miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_Response_message_type_support_handle
};

static rosidl_service_type_support_t miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_service_type_support_handle = {
  0,
  &miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Scheduler_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Scheduler_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_miv_cluster_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Scheduler)() {
  if (!miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_service_type_support_handle.typesupport_identifier) {
    miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Scheduler_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, miv_cluster_interfaces, srv, Scheduler_Response)()->data;
  }

  return &miv_cluster_interfaces__srv__detail__scheduler__rosidl_typesupport_introspection_c__Scheduler_service_type_support_handle;
}
