// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__BUILDER_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "miv_cluster_interfaces/srv/detail/camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace miv_cluster_interfaces
{

namespace srv
{

namespace builder
{

class Init_Camera_Request_iteration
{
public:
  explicit Init_Camera_Request_iteration(::miv_cluster_interfaces::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  ::miv_cluster_interfaces::srv::Camera_Request iteration(::miv_cluster_interfaces::srv::Camera_Request::_iteration_type arg)
  {
    msg_.iteration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Request msg_;
};

class Init_Camera_Request_qrscan_flag
{
public:
  explicit Init_Camera_Request_qrscan_flag(::miv_cluster_interfaces::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  Init_Camera_Request_iteration qrscan_flag(::miv_cluster_interfaces::srv::Camera_Request::_qrscan_flag_type arg)
  {
    msg_.qrscan_flag = std::move(arg);
    return Init_Camera_Request_iteration(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Request msg_;
};

class Init_Camera_Request_calibration_flag
{
public:
  explicit Init_Camera_Request_calibration_flag(::miv_cluster_interfaces::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  Init_Camera_Request_qrscan_flag calibration_flag(::miv_cluster_interfaces::srv::Camera_Request::_calibration_flag_type arg)
  {
    msg_.calibration_flag = std::move(arg);
    return Init_Camera_Request_qrscan_flag(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Request msg_;
};

class Init_Camera_Request_z1
{
public:
  explicit Init_Camera_Request_z1(::miv_cluster_interfaces::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  Init_Camera_Request_calibration_flag z1(::miv_cluster_interfaces::srv::Camera_Request::_z1_type arg)
  {
    msg_.z1 = std::move(arg);
    return Init_Camera_Request_calibration_flag(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Request msg_;
};

class Init_Camera_Request_y1
{
public:
  explicit Init_Camera_Request_y1(::miv_cluster_interfaces::srv::Camera_Request & msg)
  : msg_(msg)
  {}
  Init_Camera_Request_z1 y1(::miv_cluster_interfaces::srv::Camera_Request::_y1_type arg)
  {
    msg_.y1 = std::move(arg);
    return Init_Camera_Request_z1(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Request msg_;
};

class Init_Camera_Request_x1
{
public:
  Init_Camera_Request_x1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Camera_Request_y1 x1(::miv_cluster_interfaces::srv::Camera_Request::_x1_type arg)
  {
    msg_.x1 = std::move(arg);
    return Init_Camera_Request_y1(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::miv_cluster_interfaces::srv::Camera_Request>()
{
  return miv_cluster_interfaces::srv::builder::Init_Camera_Request_x1();
}

}  // namespace miv_cluster_interfaces


namespace miv_cluster_interfaces
{

namespace srv
{

namespace builder
{

class Init_Camera_Response_z2
{
public:
  explicit Init_Camera_Response_z2(::miv_cluster_interfaces::srv::Camera_Response & msg)
  : msg_(msg)
  {}
  ::miv_cluster_interfaces::srv::Camera_Response z2(::miv_cluster_interfaces::srv::Camera_Response::_z2_type arg)
  {
    msg_.z2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Response msg_;
};

class Init_Camera_Response_y2
{
public:
  explicit Init_Camera_Response_y2(::miv_cluster_interfaces::srv::Camera_Response & msg)
  : msg_(msg)
  {}
  Init_Camera_Response_z2 y2(::miv_cluster_interfaces::srv::Camera_Response::_y2_type arg)
  {
    msg_.y2 = std::move(arg);
    return Init_Camera_Response_z2(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Response msg_;
};

class Init_Camera_Response_x2
{
public:
  Init_Camera_Response_x2()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Camera_Response_y2 x2(::miv_cluster_interfaces::srv::Camera_Response::_x2_type arg)
  {
    msg_.x2 = std::move(arg);
    return Init_Camera_Response_y2(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Camera_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::miv_cluster_interfaces::srv::Camera_Response>()
{
  return miv_cluster_interfaces::srv::builder::Init_Camera_Response_x2();
}

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__BUILDER_HPP_
