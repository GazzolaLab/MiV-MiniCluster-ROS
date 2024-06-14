// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from miv_cluster_interfaces:srv/MeaJob.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__STRUCT_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Request __attribute__((deprecated))
#else
# define DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Request __declspec(deprecated)
#endif

namespace miv_cluster_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MeaJob_Request_
{
  using Type = MeaJob_Request_<ContainerAllocator>;

  explicit MeaJob_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MeaJob_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _mea_list_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _mea_list_type mea_list;
  using _recordtime_list_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _recordtime_list_type recordtime_list;

  // setters for named parameter idiom
  Type & set__mea_list(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->mea_list = _arg;
    return *this;
  }
  Type & set__recordtime_list(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->recordtime_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Request
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Request
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeaJob_Request_ & other) const
  {
    if (this->mea_list != other.mea_list) {
      return false;
    }
    if (this->recordtime_list != other.recordtime_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeaJob_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeaJob_Request_

// alias to use template instance with default allocator
using MeaJob_Request =
  miv_cluster_interfaces::srv::MeaJob_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace miv_cluster_interfaces


#ifndef _WIN32
# define DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Response __attribute__((deprecated))
#else
# define DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Response __declspec(deprecated)
#endif

namespace miv_cluster_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct MeaJob_Response_
{
  using Type = MeaJob_Response_<ContainerAllocator>;

  explicit MeaJob_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  explicit MeaJob_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Response
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__miv_cluster_interfaces__srv__MeaJob_Response
    std::shared_ptr<miv_cluster_interfaces::srv::MeaJob_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MeaJob_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const MeaJob_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MeaJob_Response_

// alias to use template instance with default allocator
using MeaJob_Response =
  miv_cluster_interfaces::srv::MeaJob_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace miv_cluster_interfaces

namespace miv_cluster_interfaces
{

namespace srv
{

struct MeaJob
{
  using Request = miv_cluster_interfaces::srv::MeaJob_Request;
  using Response = miv_cluster_interfaces::srv::MeaJob_Response;
};

}  // namespace srv

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__MEA_JOB__STRUCT_HPP_
