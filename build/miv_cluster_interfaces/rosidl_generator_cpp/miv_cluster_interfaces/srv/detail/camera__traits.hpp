// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__TRAITS_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "miv_cluster_interfaces/srv/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace miv_cluster_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Camera_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: z1
  {
    out << "z1: ";
    rosidl_generator_traits::value_to_yaml(msg.z1, out);
    out << ", ";
  }

  // member: calibration_flag
  {
    out << "calibration_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_flag, out);
    out << ", ";
  }

  // member: qrscan_flag
  {
    out << "qrscan_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.qrscan_flag, out);
    out << ", ";
  }

  // member: iteration
  {
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Camera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: z1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z1: ";
    rosidl_generator_traits::value_to_yaml(msg.z1, out);
    out << "\n";
  }

  // member: calibration_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_flag, out);
    out << "\n";
  }

  // member: qrscan_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qrscan_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.qrscan_flag, out);
    out << "\n";
  }

  // member: iteration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "iteration: ";
    rosidl_generator_traits::value_to_yaml(msg.iteration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Camera_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace miv_cluster_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use miv_cluster_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const miv_cluster_interfaces::srv::Camera_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  miv_cluster_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use miv_cluster_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const miv_cluster_interfaces::srv::Camera_Request & msg)
{
  return miv_cluster_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<miv_cluster_interfaces::srv::Camera_Request>()
{
  return "miv_cluster_interfaces::srv::Camera_Request";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::Camera_Request>()
{
  return "miv_cluster_interfaces/srv/Camera_Request";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::Camera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::Camera_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<miv_cluster_interfaces::srv::Camera_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace miv_cluster_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Camera_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << ", ";
  }

  // member: z2
  {
    out << "z2: ";
    rosidl_generator_traits::value_to_yaml(msg.z2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Camera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }

  // member: z2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z2: ";
    rosidl_generator_traits::value_to_yaml(msg.z2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Camera_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace miv_cluster_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use miv_cluster_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const miv_cluster_interfaces::srv::Camera_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  miv_cluster_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use miv_cluster_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const miv_cluster_interfaces::srv::Camera_Response & msg)
{
  return miv_cluster_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<miv_cluster_interfaces::srv::Camera_Response>()
{
  return "miv_cluster_interfaces::srv::Camera_Response";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::Camera_Response>()
{
  return "miv_cluster_interfaces/srv/Camera_Response";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::Camera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::Camera_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<miv_cluster_interfaces::srv::Camera_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<miv_cluster_interfaces::srv::Camera>()
{
  return "miv_cluster_interfaces::srv::Camera";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::Camera>()
{
  return "miv_cluster_interfaces/srv/Camera";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::Camera>
  : std::integral_constant<
    bool,
    has_fixed_size<miv_cluster_interfaces::srv::Camera_Request>::value &&
    has_fixed_size<miv_cluster_interfaces::srv::Camera_Response>::value
  >
{
};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::Camera>
  : std::integral_constant<
    bool,
    has_bounded_size<miv_cluster_interfaces::srv::Camera_Request>::value &&
    has_bounded_size<miv_cluster_interfaces::srv::Camera_Response>::value
  >
{
};

template<>
struct is_service<miv_cluster_interfaces::srv::Camera>
  : std::true_type
{
};

template<>
struct is_service_request<miv_cluster_interfaces::srv::Camera_Request>
  : std::true_type
{
};

template<>
struct is_service_response<miv_cluster_interfaces::srv::Camera_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__TRAITS_HPP_
