// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/msg/detail/encoder__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "miv_cluster_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "miv_cluster_interfaces/msg/detail/encoder__struct.h"
#include "miv_cluster_interfaces/msg/detail/encoder__functions.h"
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

#include "rosidl_runtime_c/string.h"  // encoder_switch
#include "rosidl_runtime_c/string_functions.h"  // encoder_switch

// forward declare type support functions


using _Encoder__ros_msg_type = miv_cluster_interfaces__msg__Encoder;

static bool _Encoder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Encoder__ros_msg_type * ros_message = static_cast<const _Encoder__ros_msg_type *>(untyped_ros_message);
  // Field name: x_target
  {
    cdr << ros_message->x_target;
  }

  // Field name: y_target
  {
    cdr << ros_message->y_target;
  }

  // Field name: z_target
  {
    cdr << ros_message->z_target;
  }

  // Field name: encoder_switch
  {
    const rosidl_runtime_c__String * str = &ros_message->encoder_switch;
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

static bool _Encoder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Encoder__ros_msg_type * ros_message = static_cast<_Encoder__ros_msg_type *>(untyped_ros_message);
  // Field name: x_target
  {
    cdr >> ros_message->x_target;
  }

  // Field name: y_target
  {
    cdr >> ros_message->y_target;
  }

  // Field name: z_target
  {
    cdr >> ros_message->z_target;
  }

  // Field name: encoder_switch
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->encoder_switch.data) {
      rosidl_runtime_c__String__init(&ros_message->encoder_switch);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->encoder_switch,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'encoder_switch'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t get_serialized_size_miv_cluster_interfaces__msg__Encoder(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Encoder__ros_msg_type * ros_message = static_cast<const _Encoder__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_target
  {
    size_t item_size = sizeof(ros_message->x_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_target
  {
    size_t item_size = sizeof(ros_message->y_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_target
  {
    size_t item_size = sizeof(ros_message->z_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name encoder_switch
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->encoder_switch.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Encoder__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_miv_cluster_interfaces__msg__Encoder(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t max_serialized_size_miv_cluster_interfaces__msg__Encoder(
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

  // member: x_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: encoder_switch
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

static size_t _Encoder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_miv_cluster_interfaces__msg__Encoder(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Encoder = {
  "miv_cluster_interfaces::msg",
  "Encoder",
  _Encoder__cdr_serialize,
  _Encoder__cdr_deserialize,
  _Encoder__get_serialized_size,
  _Encoder__max_serialized_size
};

static rosidl_message_type_support_t _Encoder__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Encoder,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, msg, Encoder)() {
  return &_Encoder__type_support;
}

#if defined(__cplusplus)
}
#endif
