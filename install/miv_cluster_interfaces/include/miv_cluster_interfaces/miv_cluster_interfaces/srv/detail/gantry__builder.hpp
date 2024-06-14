// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from miv_cluster_interfaces:srv/Gantry.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__BUILDER_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "miv_cluster_interfaces/srv/detail/gantry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace miv_cluster_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gantry_Request_measurement_flag
{
public:
  explicit Init_Gantry_Request_measurement_flag(::miv_cluster_interfaces::srv::Gantry_Request & msg)
  : msg_(msg)
  {}
  ::miv_cluster_interfaces::srv::Gantry_Request measurement_flag(::miv_cluster_interfaces::srv::Gantry_Request::_measurement_flag_type arg)
  {
    msg_.measurement_flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Gantry_Request msg_;
};

class Init_Gantry_Request_sensor_flag
{
public:
  explicit Init_Gantry_Request_sensor_flag(::miv_cluster_interfaces::srv::Gantry_Request & msg)
  : msg_(msg)
  {}
  Init_Gantry_Request_measurement_flag sensor_flag(::miv_cluster_interfaces::srv::Gantry_Request::_sensor_flag_type arg)
  {
    msg_.sensor_flag = std::move(arg);
    return Init_Gantry_Request_measurement_flag(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Gantry_Request msg_;
};

class Init_Gantry_Request_z
{
public:
  explicit Init_Gantry_Request_z(::miv_cluster_interfaces::srv::Gantry_Request & msg)
  : msg_(msg)
  {}
  Init_Gantry_Request_sensor_flag z(::miv_cluster_interfaces::srv::Gantry_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Gantry_Request_sensor_flag(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Gantry_Request msg_;
};

class Init_Gantry_Request_y
{
public:
  explicit Init_Gantry_Request_y(::miv_cluster_interfaces::srv::Gantry_Request & msg)
  : msg_(msg)
  {}
  Init_Gantry_Request_z y(::miv_cluster_interfaces::srv::Gantry_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Gantry_Request_z(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Gantry_Request msg_;
};

class Init_Gantry_Request_x
{
public:
  Init_Gantry_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gantry_Request_y x(::miv_cluster_interfaces::srv::Gantry_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Gantry_Request_y(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Gantry_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::miv_cluster_interfaces::srv::Gantry_Request>()
{
  return miv_cluster_interfaces::srv::builder::Init_Gantry_Request_x();
}

}  // namespace miv_cluster_interfaces


namespace miv_cluster_interfaces
{

namespace srv
{

namespace builder
{

class Init_Gantry_Response_force_measurement
{
public:
  explicit Init_Gantry_Response_force_measurement(::miv_cluster_interfaces::srv::Gantry_Response & msg)
  : msg_(msg)
  {}
  ::miv_cluster_interfaces::srv::Gantry_Response force_measurement(::miv_cluster_interfaces::srv::Gantry_Response::_force_measurement_type arg)
  {
    msg_.force_measurement = std::move(arg);
    return std::move(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Gantry_Response msg_;
};

class Init_Gantry_Response_status
{
public:
  Init_Gantry_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Gantry_Response_force_measurement status(::miv_cluster_interfaces::srv::Gantry_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Gantry_Response_force_measurement(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Gantry_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::miv_cluster_interfaces::srv::Gantry_Response>()
{
  return miv_cluster_interfaces::srv::builder::Init_Gantry_Response_status();
}

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__BUILDER_HPP_
