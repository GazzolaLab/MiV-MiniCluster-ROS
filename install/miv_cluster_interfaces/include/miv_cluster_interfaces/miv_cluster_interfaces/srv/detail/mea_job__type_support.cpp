// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from miv_cluster_interfaces:srv/MeaJob.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "miv_cluster_interfaces/srv/detail/mea_job__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace miv_cluster_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MeaJob_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) miv_cluster_interfaces::srv::MeaJob_Request(_init);
}

void MeaJob_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<miv_cluster_interfaces::srv::MeaJob_Request *>(message_memory);
  typed_message->~MeaJob_Request();
}

size_t size_function__MeaJob_Request__mea_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeaJob_Request__mea_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MeaJob_Request__mea_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeaJob_Request__mea_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__MeaJob_Request__mea_list(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__MeaJob_Request__mea_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__MeaJob_Request__mea_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__MeaJob_Request__mea_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MeaJob_Request__recordtime_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MeaJob_Request__recordtime_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MeaJob_Request__recordtime_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MeaJob_Request__recordtime_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MeaJob_Request__recordtime_list(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MeaJob_Request__recordtime_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MeaJob_Request__recordtime_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MeaJob_Request__recordtime_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MeaJob_Request_message_member_array[2] = {
  {
    "mea_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces::srv::MeaJob_Request, mea_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeaJob_Request__mea_list,  // size() function pointer
    get_const_function__MeaJob_Request__mea_list,  // get_const(index) function pointer
    get_function__MeaJob_Request__mea_list,  // get(index) function pointer
    fetch_function__MeaJob_Request__mea_list,  // fetch(index, &value) function pointer
    assign_function__MeaJob_Request__mea_list,  // assign(index, value) function pointer
    resize_function__MeaJob_Request__mea_list  // resize(index) function pointer
  },
  {
    "recordtime_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces::srv::MeaJob_Request, recordtime_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__MeaJob_Request__recordtime_list,  // size() function pointer
    get_const_function__MeaJob_Request__recordtime_list,  // get_const(index) function pointer
    get_function__MeaJob_Request__recordtime_list,  // get(index) function pointer
    fetch_function__MeaJob_Request__recordtime_list,  // fetch(index, &value) function pointer
    assign_function__MeaJob_Request__recordtime_list,  // assign(index, value) function pointer
    resize_function__MeaJob_Request__recordtime_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MeaJob_Request_message_members = {
  "miv_cluster_interfaces::srv",  // message namespace
  "MeaJob_Request",  // message name
  2,  // number of fields
  sizeof(miv_cluster_interfaces::srv::MeaJob_Request),
  MeaJob_Request_message_member_array,  // message members
  MeaJob_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  MeaJob_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MeaJob_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MeaJob_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace miv_cluster_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<miv_cluster_interfaces::srv::MeaJob_Request>()
{
  return &::miv_cluster_interfaces::srv::rosidl_typesupport_introspection_cpp::MeaJob_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, miv_cluster_interfaces, srv, MeaJob_Request)() {
  return &::miv_cluster_interfaces::srv::rosidl_typesupport_introspection_cpp::MeaJob_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/mea_job__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace miv_cluster_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void MeaJob_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) miv_cluster_interfaces::srv::MeaJob_Response(_init);
}

void MeaJob_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<miv_cluster_interfaces::srv::MeaJob_Response *>(message_memory);
  typed_message->~MeaJob_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MeaJob_Response_message_member_array[1] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(miv_cluster_interfaces::srv::MeaJob_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MeaJob_Response_message_members = {
  "miv_cluster_interfaces::srv",  // message namespace
  "MeaJob_Response",  // message name
  1,  // number of fields
  sizeof(miv_cluster_interfaces::srv::MeaJob_Response),
  MeaJob_Response_message_member_array,  // message members
  MeaJob_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  MeaJob_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MeaJob_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MeaJob_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace miv_cluster_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<miv_cluster_interfaces::srv::MeaJob_Response>()
{
  return &::miv_cluster_interfaces::srv::rosidl_typesupport_introspection_cpp::MeaJob_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, miv_cluster_interfaces, srv, MeaJob_Response)() {
  return &::miv_cluster_interfaces::srv::rosidl_typesupport_introspection_cpp::MeaJob_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/mea_job__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace miv_cluster_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers MeaJob_service_members = {
  "miv_cluster_interfaces::srv",  // service namespace
  "MeaJob",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<miv_cluster_interfaces::srv::MeaJob>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t MeaJob_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MeaJob_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace miv_cluster_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<miv_cluster_interfaces::srv::MeaJob>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::miv_cluster_interfaces::srv::rosidl_typesupport_introspection_cpp::MeaJob_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::miv_cluster_interfaces::srv::MeaJob_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::miv_cluster_interfaces::srv::MeaJob_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, miv_cluster_interfaces, srv, MeaJob)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<miv_cluster_interfaces::srv::MeaJob>();
}

#ifdef __cplusplus
}
#endif
