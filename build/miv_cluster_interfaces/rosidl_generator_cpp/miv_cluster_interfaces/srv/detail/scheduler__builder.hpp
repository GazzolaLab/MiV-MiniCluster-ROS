// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from miv_cluster_interfaces:srv/Scheduler.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__SCHEDULER__BUILDER_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__SCHEDULER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "miv_cluster_interfaces/srv/detail/scheduler__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace miv_cluster_interfaces
{

namespace srv
{

namespace builder
{

class Init_Scheduler_Request_recordtime_list
{
public:
  explicit Init_Scheduler_Request_recordtime_list(::miv_cluster_interfaces::srv::Scheduler_Request & msg)
  : msg_(msg)
  {}
  ::miv_cluster_interfaces::srv::Scheduler_Request recordtime_list(::miv_cluster_interfaces::srv::Scheduler_Request::_recordtime_list_type arg)
  {
    msg_.recordtime_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Scheduler_Request msg_;
};

class Init_Scheduler_Request_mea_list
{
public:
  Init_Scheduler_Request_mea_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Scheduler_Request_recordtime_list mea_list(::miv_cluster_interfaces::srv::Scheduler_Request::_mea_list_type arg)
  {
    msg_.mea_list = std::move(arg);
    return Init_Scheduler_Request_recordtime_list(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Scheduler_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::miv_cluster_interfaces::srv::Scheduler_Request>()
{
  return miv_cluster_interfaces::srv::builder::Init_Scheduler_Request_mea_list();
}

}  // namespace miv_cluster_interfaces


namespace miv_cluster_interfaces
{

namespace srv
{

namespace builder
{

class Init_Scheduler_Response_status
{
public:
  Init_Scheduler_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::miv_cluster_interfaces::srv::Scheduler_Response status(::miv_cluster_interfaces::srv::Scheduler_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::miv_cluster_interfaces::srv::Scheduler_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::miv_cluster_interfaces::srv::Scheduler_Response>()
{
  return miv_cluster_interfaces::srv::builder::Init_Scheduler_Response_status();
}

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__SCHEDULER__BUILDER_HPP_
