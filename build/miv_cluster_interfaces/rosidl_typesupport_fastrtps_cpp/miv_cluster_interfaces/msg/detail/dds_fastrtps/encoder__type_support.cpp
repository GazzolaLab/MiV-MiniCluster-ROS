// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/msg/detail/encoder__rosidl_typesupport_fastrtps_cpp.hpp"
#include "miv_cluster_interfaces/msg/detail/encoder__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace miv_cluster_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_miv_cluster_interfaces
cdr_serialize(
  const miv_cluster_interfaces::msg::Encoder & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_target
  cdr << ros_message.x_target;
  // Member: y_target
  cdr << ros_message.y_target;
  // Member: z_target
  cdr << ros_message.z_target;
  // Member: encoder_switch
  cdr << ros_message.encoder_switch;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_miv_cluster_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  miv_cluster_interfaces::msg::Encoder & ros_message)
{
  // Member: x_target
  cdr >> ros_message.x_target;

  // Member: y_target
  cdr >> ros_message.y_target;

  // Member: z_target
  cdr >> ros_message.z_target;

  // Member: encoder_switch
  cdr >> ros_message.encoder_switch;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_miv_cluster_interfaces
get_serialized_size(
  const miv_cluster_interfaces::msg::Encoder & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_target
  {
    size_t item_size = sizeof(ros_message.x_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_target
  {
    size_t item_size = sizeof(ros_message.y_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: z_target
  {
    size_t item_size = sizeof(ros_message.z_target);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: encoder_switch
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.encoder_switch.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_miv_cluster_interfaces
max_serialized_size_Encoder(
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


  // Member: x_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: y_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: z_target
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: encoder_switch
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

static bool _Encoder__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const miv_cluster_interfaces::msg::Encoder *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Encoder__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<miv_cluster_interfaces::msg::Encoder *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Encoder__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const miv_cluster_interfaces::msg::Encoder *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Encoder__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Encoder(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Encoder__callbacks = {
  "miv_cluster_interfaces::msg",
  "Encoder",
  _Encoder__cdr_serialize,
  _Encoder__cdr_deserialize,
  _Encoder__get_serialized_size,
  _Encoder__max_serialized_size
};

static rosidl_message_type_support_t _Encoder__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Encoder__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace miv_cluster_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_miv_cluster_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<miv_cluster_interfaces::msg::Encoder>()
{
  return &miv_cluster_interfaces::msg::typesupport_fastrtps_cpp::_Encoder__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, miv_cluster_interfaces, msg, Encoder)() {
  return &miv_cluster_interfaces::msg::typesupport_fastrtps_cpp::_Encoder__handle;
}

#ifdef __cplusplus
}
#endif
