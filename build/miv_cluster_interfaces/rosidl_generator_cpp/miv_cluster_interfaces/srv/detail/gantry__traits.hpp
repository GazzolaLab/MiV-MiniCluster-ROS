// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from miv_cluster_interfaces:srv/Gantry.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__TRAITS_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "miv_cluster_interfaces/srv/detail/gantry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace miv_cluster_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gantry_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: sensor_flag
  {
    out << "sensor_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_flag, out);
    out << ", ";
  }

  // member: measurement_flag
  {
    out << "measurement_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_flag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gantry_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }

  // member: sensor_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_flag, out);
    out << "\n";
  }

  // member: measurement_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measurement_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.measurement_flag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gantry_Request & msg, bool use_flow_style = false)
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
  const miv_cluster_interfaces::srv::Gantry_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  miv_cluster_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use miv_cluster_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const miv_cluster_interfaces::srv::Gantry_Request & msg)
{
  return miv_cluster_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<miv_cluster_interfaces::srv::Gantry_Request>()
{
  return "miv_cluster_interfaces::srv::Gantry_Request";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::Gantry_Request>()
{
  return "miv_cluster_interfaces/srv/Gantry_Request";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::Gantry_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::Gantry_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<miv_cluster_interfaces::srv::Gantry_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace miv_cluster_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Gantry_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: force_measurement
  {
    out << "force_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.force_measurement, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Gantry_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: force_measurement
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_measurement: ";
    rosidl_generator_traits::value_to_yaml(msg.force_measurement, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Gantry_Response & msg, bool use_flow_style = false)
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
  const miv_cluster_interfaces::srv::Gantry_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  miv_cluster_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use miv_cluster_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const miv_cluster_interfaces::srv::Gantry_Response & msg)
{
  return miv_cluster_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<miv_cluster_interfaces::srv::Gantry_Response>()
{
  return "miv_cluster_interfaces::srv::Gantry_Response";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::Gantry_Response>()
{
  return "miv_cluster_interfaces/srv/Gantry_Response";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::Gantry_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::Gantry_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<miv_cluster_interfaces::srv::Gantry_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<miv_cluster_interfaces::srv::Gantry>()
{
  return "miv_cluster_interfaces::srv::Gantry";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::Gantry>()
{
  return "miv_cluster_interfaces/srv/Gantry";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::Gantry>
  : std::integral_constant<
    bool,
    has_fixed_size<miv_cluster_interfaces::srv::Gantry_Request>::value &&
    has_fixed_size<miv_cluster_interfaces::srv::Gantry_Response>::value
  >
{
};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::Gantry>
  : std::integral_constant<
    bool,
    has_bounded_size<miv_cluster_interfaces::srv::Gantry_Request>::value &&
    has_bounded_size<miv_cluster_interfaces::srv::Gantry_Response>::value
  >
{
};

template<>
struct is_service<miv_cluster_interfaces::srv::Gantry>
  : std::true_type
{
};

template<>
struct is_service_request<miv_cluster_interfaces::srv::Gantry_Request>
  : std::true_type
{
};

template<>
struct is_service_response<miv_cluster_interfaces::srv::Gantry_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__TRAITS_HPP_
