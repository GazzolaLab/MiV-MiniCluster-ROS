// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/srv/detail/camera__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "miv_cluster_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "miv_cluster_interfaces/srv/detail/camera__struct.h"
#include "miv_cluster_interfaces/srv/detail/camera__functions.h"
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


// forward declare type support functions


using _Camera_Request__ros_msg_type = miv_cluster_interfaces__srv__Camera_Request;

static bool _Camera_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Camera_Request__ros_msg_type * ros_message = static_cast<const _Camera_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x1
  {
    cdr << ros_message->x1;
  }

  // Field name: y1
  {
    cdr << ros_message->y1;
  }

  // Field name: z1
  {
    cdr << ros_message->z1;
  }

  // Field name: calibration_flag
  {
    cdr << (ros_message->calibration_flag ? true : false);
  }

  // Field name: qrscan_flag
  {
    cdr << (ros_message->qrscan_flag ? true : false);
  }

  // Field name: iteration
  {
    cdr << ros_message->iteration;
  }

  return true;
}

static bool _Camera_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Camera_Request__ros_msg_type * ros_message = static_cast<_Camera_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x1
  {
    cdr >> ros_message->x1;
  }

  // Field name: y1
  {
    cdr >> ros_message->y1;
  }

  // Field name: z1
  {
    cdr >> ros_message->z1;
  }

  // Field name: calibration_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->calibration_flag = tmp ? true : false;
  }

  // Field name: qrscan_flag
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->qrscan_flag = tmp ? true : false;
  }

  // Field name: iteration
  {
    cdr >> ros_message->iteration;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t get_serialized_size_miv_cluster_interfaces__srv__Camera_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Camera_Request__ros_msg_type * ros_message = static_cast<const _Camera_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x1
  {
    size_t item_size = sizeof(ros_message->x1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y1
  {
    size_t item_size = sizeof(ros_message->y1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z1
  {
    size_t item_size = sizeof(ros_message->z1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibration_flag
  {
    size_t item_size = sizeof(ros_message->calibration_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name qrscan_flag
  {
    size_t item_size = sizeof(ros_message->qrscan_flag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iteration
  {
    size_t item_size = sizeof(ros_message->iteration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Camera_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_miv_cluster_interfaces__srv__Camera_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t max_serialized_size_miv_cluster_interfaces__srv__Camera_Request(
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

  // member: x1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: calibration_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: qrscan_flag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: iteration
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Camera_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_miv_cluster_interfaces__srv__Camera_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Camera_Request = {
  "miv_cluster_interfaces::srv",
  "Camera_Request",
  _Camera_Request__cdr_serialize,
  _Camera_Request__cdr_deserialize,
  _Camera_Request__get_serialized_size,
  _Camera_Request__max_serialized_size
};

static rosidl_message_type_support_t _Camera_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Camera_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, Camera_Request)() {
  return &_Camera_Request__type_support;
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
// #include "miv_cluster_interfaces/srv/detail/camera__struct.h"
// already included above
// #include "miv_cluster_interfaces/srv/detail/camera__functions.h"
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


// forward declare type support functions


using _Camera_Response__ros_msg_type = miv_cluster_interfaces__srv__Camera_Response;

static bool _Camera_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Camera_Response__ros_msg_type * ros_message = static_cast<const _Camera_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x2
  {
    cdr << ros_message->x2;
  }

  // Field name: y2
  {
    cdr << ros_message->y2;
  }

  // Field name: z2
  {
    cdr << ros_message->z2;
  }

  return true;
}

static bool _Camera_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Camera_Response__ros_msg_type * ros_message = static_cast<_Camera_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: x2
  {
    cdr >> ros_message->x2;
  }

  // Field name: y2
  {
    cdr >> ros_message->y2;
  }

  // Field name: z2
  {
    cdr >> ros_message->z2;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t get_serialized_size_miv_cluster_interfaces__srv__Camera_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Camera_Response__ros_msg_type * ros_message = static_cast<const _Camera_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x2
  {
    size_t item_size = sizeof(ros_message->x2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y2
  {
    size_t item_size = sizeof(ros_message->y2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z2
  {
    size_t item_size = sizeof(ros_message->z2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Camera_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_miv_cluster_interfaces__srv__Camera_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_miv_cluster_interfaces
size_t max_serialized_size_miv_cluster_interfaces__srv__Camera_Response(
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

  // member: x2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _Camera_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_miv_cluster_interfaces__srv__Camera_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Camera_Response = {
  "miv_cluster_interfaces::srv",
  "Camera_Response",
  _Camera_Response__cdr_serialize,
  _Camera_Response__cdr_deserialize,
  _Camera_Response__get_serialized_size,
  _Camera_Response__max_serialized_size
};

static rosidl_message_type_support_t _Camera_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Camera_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, Camera_Response)() {
  return &_Camera_Response__type_support;
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
#include "miv_cluster_interfaces/srv/camera.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t Camera__callbacks = {
  "miv_cluster_interfaces::srv",
  "Camera",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, Camera_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, Camera_Response)(),
};

static rosidl_service_type_support_t Camera__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &Camera__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, miv_cluster_interfaces, srv, Camera)() {
  return &Camera__handle;
}

#if defined(__cplusplus)
}
#endif
