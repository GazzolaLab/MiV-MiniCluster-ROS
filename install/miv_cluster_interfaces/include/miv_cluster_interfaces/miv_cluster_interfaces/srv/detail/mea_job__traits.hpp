// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from miv_cluster_interfaces:srv/MeaJob.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__TRAITS_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "miv_cluster_interfaces/srv/detail/mea_job__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace miv_cluster_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MeaJob_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mea_list
  {
    if (msg.mea_list.size() == 0) {
      out << "mea_list: []";
    } else {
      out << "mea_list: [";
      size_t pending_items = msg.mea_list.size();
      for (auto item : msg.mea_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: recordtime_list
  {
    if (msg.recordtime_list.size() == 0) {
      out << "recordtime_list: []";
    } else {
      out << "recordtime_list: [";
      size_t pending_items = msg.recordtime_list.size();
      for (auto item : msg.recordtime_list) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MeaJob_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mea_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mea_list.size() == 0) {
      out << "mea_list: []\n";
    } else {
      out << "mea_list:\n";
      for (auto item : msg.mea_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: recordtime_list
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.recordtime_list.size() == 0) {
      out << "recordtime_list: []\n";
    } else {
      out << "recordtime_list:\n";
      for (auto item : msg.recordtime_list) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MeaJob_Request & msg, bool use_flow_style = false)
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
  const miv_cluster_interfaces::srv::MeaJob_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  miv_cluster_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use miv_cluster_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const miv_cluster_interfaces::srv::MeaJob_Request & msg)
{
  return miv_cluster_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<miv_cluster_interfaces::srv::MeaJob_Request>()
{
  return "miv_cluster_interfaces::srv::MeaJob_Request";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::MeaJob_Request>()
{
  return "miv_cluster_interfaces/srv/MeaJob_Request";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::MeaJob_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::MeaJob_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<miv_cluster_interfaces::srv::MeaJob_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace miv_cluster_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const MeaJob_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MeaJob_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MeaJob_Response & msg, bool use_flow_style = false)
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
  const miv_cluster_interfaces::srv::MeaJob_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  miv_cluster_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use miv_cluster_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const miv_cluster_interfaces::srv::MeaJob_Response & msg)
{
  return miv_cluster_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<miv_cluster_interfaces::srv::MeaJob_Response>()
{
  return "miv_cluster_interfaces::srv::MeaJob_Response";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::MeaJob_Response>()
{
  return "miv_cluster_interfaces/srv/MeaJob_Response";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::MeaJob_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::MeaJob_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<miv_cluster_interfaces::srv::MeaJob_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<miv_cluster_interfaces::srv::MeaJob>()
{
  return "miv_cluster_interfaces::srv::MeaJob";
}

template<>
inline const char * name<miv_cluster_interfaces::srv::MeaJob>()
{
  return "miv_cluster_interfaces/srv/MeaJob";
}

template<>
struct has_fixed_size<miv_cluster_interfaces::srv::MeaJob>
  : std::integral_constant<
    bool,
    has_fixed_size<miv_cluster_interfaces::srv::MeaJob_Request>::value &&
    has_fixed_size<miv_cluster_interfaces::srv::MeaJob_Response>::value
  >
{
};

template<>
struct has_bounded_size<miv_cluster_interfaces::srv::MeaJob>
  : std::integral_constant<
    bool,
    has_bounded_size<miv_cluster_interfaces::srv::MeaJob_Request>::value &&
    has_bounded_size<miv_cluster_interfaces::srv::MeaJob_Response>::value
  >
{
};

template<>
struct is_service<miv_cluster_interfaces::srv::MeaJob>
  : std::true_type
{
};

template<>
struct is_service_request<miv_cluster_interfaces::srv::MeaJob_Request>
  : std::true_type
{
};

template<>
struct is_service_response<miv_cluster_interfaces::srv::MeaJob_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__TRAITS_HPP_
