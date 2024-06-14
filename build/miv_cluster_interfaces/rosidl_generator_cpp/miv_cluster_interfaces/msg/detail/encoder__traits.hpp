// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__TRAITS_HPP_
#define MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "miv_cluster_interfaces/msg/detail/encoder__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace miv_cluster_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Encoder & msg,
  std::ostream & out)
{
  out << "{";
  // member: x_target
  {
    out << "x_target: ";
    rosidl_generator_traits::value_to_yaml(msg.x_target, out);
    out << ", ";
  }

  // member: y_target
  {
    out << "y_target: ";
    rosidl_generator_traits::value_to_yaml(msg.y_target, out);
    out << ", ";
  }

  // member: z_target
  {
    out << "z_target: ";
    rosidl_generator_traits::value_to_yaml(msg.z_target, out);
    out << ", ";
  }

  // member: encoder_switch
  {
    out << "encoder_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_switch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Encoder & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_target: ";
    rosidl_generator_traits::value_to_yaml(msg.x_target, out);
    out << "\n";
  }

  // member: y_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_target: ";
    rosidl_generator_traits::value_to_yaml(msg.y_target, out);
    out << "\n";
  }

  // member: z_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z_target: ";
    rosidl_generator_traits::value_to_yaml(msg.z_target, out);
    out << "\n";
  }

  // member: encoder_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoder_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.encoder_switch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Encoder & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace miv_cluster_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use miv_cluster_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const miv_cluster_interfaces::msg::Encoder & msg,
  std::ostream & out, size_t indentation = 0)
{
  miv_cluster_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use miv_cluster_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const miv_cluster_interfaces::msg::Encoder & msg)
{
  return miv_cluster_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<miv_cluster_interfaces::msg::Encoder>()
{
  return "miv_cluster_interfaces::msg::Encoder";
}

template<>
inline const char * name<miv_cluster_interfaces::msg::Encoder>()
{
  return "miv_cluster_interfaces/msg/Encoder";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::msg::Encoder>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<miv_cluster_interfaces::msg::Encoder>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<miv_cluster_interfaces::msg::Encoder>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__TRAITS_HPP_
