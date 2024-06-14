// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__BUILDER_HPP_
#define MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "miv_cluster_interfaces/msg/detail/encoder__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace miv_cluster_interfaces
{

namespace msg
{

namespace builder
{

class Init_Encoder_encoder_switch
{
public:
  explicit Init_Encoder_encoder_switch(::miv_cluster_interfaces::msg::Encoder & msg)
  : msg_(msg)
  {}
  ::miv_cluster_interfaces::msg::Encoder encoder_switch(::miv_cluster_interfaces::msg::Encoder::_encoder_switch_type arg)
  {
    msg_.encoder_switch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::miv_cluster_interfaces::msg::Encoder msg_;
};

class Init_Encoder_z_target
{
public:
  explicit Init_Encoder_z_target(::miv_cluster_interfaces::msg::Encoder & msg)
  : msg_(msg)
  {}
  Init_Encoder_encoder_switch z_target(::miv_cluster_interfaces::msg::Encoder::_z_target_type arg)
  {
    msg_.z_target = std::move(arg);
    return Init_Encoder_encoder_switch(msg_);
  }

private:
  ::miv_cluster_interfaces::msg::Encoder msg_;
};

class Init_Encoder_y_target
{
public:
  explicit Init_Encoder_y_target(::miv_cluster_interfaces::msg::Encoder & msg)
  : msg_(msg)
  {}
  Init_Encoder_z_target y_target(::miv_cluster_interfaces::msg::Encoder::_y_target_type arg)
  {
    msg_.y_target = std::move(arg);
    return Init_Encoder_z_target(msg_);
  }

private:
  ::miv_cluster_interfaces::msg::Encoder msg_;
};

class Init_Encoder_x_target
{
public:
  Init_Encoder_x_target()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Encoder_y_target x_target(::miv_cluster_interfaces::msg::Encoder::_x_target_type arg)
  {
    msg_.x_target = std::move(arg);
    return Init_Encoder_y_target(msg_);
  }

private:
  ::miv_cluster_interfaces::msg::Encoder msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::miv_cluster_interfaces::msg::Encoder>()
{
  return miv_cluster_interfaces::msg::builder::Init_Encoder_x_target();
}

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__BUILDER_HPP_
