// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_HPP_
#define MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__miv_cluster_interfaces__msg__Encoder __attribute__((deprecated))
#else
# define DEPRECATED__miv_cluster_interfaces__msg__Encoder __declspec(deprecated)
#endif

namespace miv_cluster_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Encoder_
{
  using Type = Encoder_<ContainerAllocator>;

  explicit Encoder_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_target = 0.0f;
      this->y_target = 0.0f;
      this->z_target = 0.0f;
      this->encoder_switch = "";
    }
  }

  explicit Encoder_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : encoder_switch(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_target = 0.0f;
      this->y_target = 0.0f;
      this->z_target = 0.0f;
      this->encoder_switch = "";
    }
  }

  // field types and members
  using _x_target_type =
    float;
  _x_target_type x_target;
  using _y_target_type =
    float;
  _y_target_type y_target;
  using _z_target_type =
    float;
  _z_target_type z_target;
  using _encoder_switch_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _encoder_switch_type encoder_switch;

  // setters for named parameter idiom
  Type & set__x_target(
    const float & _arg)
  {
    this->x_target = _arg;
    return *this;
  }
  Type & set__y_target(
    const float & _arg)
  {
    this->y_target = _arg;
    return *this;
  }
  Type & set__z_target(
    const float & _arg)
  {
    this->z_target = _arg;
    return *this;
  }
  Type & set__encoder_switch(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->encoder_switch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    miv_cluster_interfaces::msg::Encoder_<ContainerAllocator> *;
  using ConstRawPtr =
    const miv_cluster_interfaces::msg::Encoder_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::msg::Encoder_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::msg::Encoder_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__miv_cluster_interfaces__msg__Encoder
    std::shared_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__miv_cluster_interfaces__msg__Encoder
    std::shared_ptr<miv_cluster_interfaces::msg::Encoder_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Encoder_ & other) const
  {
    if (this->x_target != other.x_target) {
      return false;
    }
    if (this->y_target != other.y_target) {
      return false;
    }
    if (this->z_target != other.z_target) {
      return false;
    }
    if (this->encoder_switch != other.encoder_switch) {
      return false;
    }
    return true;
  }
  bool operator!=(const Encoder_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Encoder_

// alias to use template instance with default allocator
using Encoder =
  miv_cluster_interfaces::msg::Encoder_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__MSG__DETAIL__ENCODER__STRUCT_HPP_
