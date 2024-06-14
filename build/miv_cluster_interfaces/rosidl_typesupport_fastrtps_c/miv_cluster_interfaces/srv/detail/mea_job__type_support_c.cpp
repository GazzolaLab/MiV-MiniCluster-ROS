// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from miv_cluster_interfaces:srv/MeaJob.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/srv/detail/mea_job__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "miv_cluster_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "miv_cluster_interfaces/srv/detail/mea_job__struct.h"
#include "miv_cluster_interfaces/srv/detail/mea_job__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // mea_list, recordtime_list
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // mea_list, recordtime_list

// forward declare type support functions


using _MeaJob_Request__ros_msg_type = miv_cluster_interfaces__srv__MeaJob_Request;

static bool _MeaJob_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MeaJob_Request__ros_msg_type * ros_message = static_cast<const _MeaJob_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mea_list
  {
    size_t size = ros_message->mea_list.size;
    auto array_ptr = ros_message->mea_list.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: recordtime_list
  {
    size_t size = ros_message->recordtime_list.size;
    auto array_ptr = ros_message->recordtime_list.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _MeaJob_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MeaJob_Request__ros_msg_type * ros_message = static_cast<_MeaJob_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: mea_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->mea_list.data) {
      rosidl_runtime_c__int32__Sequence__fini(&ros_message->mea_list);
    }
    if (!rosidl_runtime_c__int32__Sequence__init(&ros_message->mea_list, size)) {
      fprintf(stderr, "failed to create array for field 'mea_list'");
      return false;
    }
    auto array_ptr = ros_message->mea_list.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: recordtime_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->recordtime_list.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->recordtime_list);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->recordtime_list, size)) {
      fprintf(stderr, "failed to create array for field 'recordtime_list'");
      return false;
    }
    auto array_ptr = ros_message->recordtime_list.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t get_serialized_size_miv_cluster_interfaces__srv__MeaJob_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MeaJob_Request__ros_msg_type * ros_message = static_cast<const _MeaJob_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mea_list
  {
    size_t array_size = ros_message->mea_list.size;
    auto array_ptr = ros_message->mea_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name recordtime_list
  {
    size_t array_size = ros_message->recordtime_list.size;
    auto array_ptr = ros_message->recordtime_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _MeaJob_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_miv_cluster_interfaces__srv__MeaJob_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t max_serialized_size_miv_cluster_interfaces__srv__MeaJob_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: mea_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: recordtime_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _MeaJob_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_miv_cluster_interfaces__srv__MeaJob_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MeaJob_Request = {
  "miv_cluster_interfaces::srv",
  "MeaJob_Request",
  _MeaJob_Request__cdr_serialize,
  _MeaJob_Request__cdr_deserialize,
  _MeaJob_Request__get_serialized_size,
  _MeaJob_Request__max_serialized_size
};

static rosidl_message_type_support_t _MeaJob_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MeaJob_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, MeaJob_Request)() {
  return &_MeaJob_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/mea_job__struct.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/mea_job__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // status
#include "rosidl_runtime_c/string_functions.h"  // status

// forward declare type support functions


using _MeaJob_Response__ros_msg_type = miv_cluster_interfaces__srv__MeaJob_Response;

static bool _MeaJob_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _MeaJob_Response__ros_msg_type * ros_message = static_cast<const _MeaJob_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    const rosidl_runtime_c__String * str = &ros_message->status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _MeaJob_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _MeaJob_Response__ros_msg_type * ros_message = static_cast<_MeaJob_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->status.data) {
      rosidl_runtime_c__String__init(&ros_message->status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'status'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t get_serialized_size_miv_cluster_interfaces__srv__MeaJob_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _MeaJob_Response__ros_msg_type * ros_message = static_cast<const _MeaJob_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->status.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _MeaJob_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_miv_cluster_interfaces__srv__MeaJob_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t max_serialized_size_miv_cluster_interfaces__srv__MeaJob_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _MeaJob_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_miv_cluster_interfaces__srv__MeaJob_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_MeaJob_Response = {
  "miv_cluster_interfaces::srv",
  "MeaJob_Response",
  _MeaJob_Response__cdr_serialize,
  _MeaJob_Response__cdr_deserialize,
  _MeaJob_Response__get_serialized_size,
  _MeaJob_Response__max_serialized_size
};

static rosidl_message_type_support_t _MeaJob_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_MeaJob_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, MeaJob_Response)() {
  return &_MeaJob_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "miv_cluster_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "miv_cluster_interfaces/srv/mea_job.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t MeaJob__callbacks = {
  "miv_cluster_interfaces::srv",
  "MeaJob",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, MeaJob_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, MeaJob_Response)(),
};

static rosidl_service_type_support_t MeaJob__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &MeaJob__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, MeaJob)() {
  return &MeaJob__handle;
}

#if defined(__cplusplus)
}
#endif
