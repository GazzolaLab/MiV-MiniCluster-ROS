// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from miv_cluster_interfaces:srv/Gantry.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__STRUCT_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__miv_cluster_interfaces__srv__Gantry_Request __attribute__((deprecated))
#else
# define DEPRECATED__miv_cluster_interfaces__srv__Gantry_Request __declspec(deprecated)
#endif

namespace miv_cluster_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gantry_Request_
{
  using Type = Gantry_Request_<ContainerAllocator>;

  explicit Gantry_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->sensor_flag = false;
      this->measurement_flag = false;
    }
  }

  explicit Gantry_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      this->sensor_flag = false;
      this->measurement_flag = false;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _sensor_flag_type =
    bool;
  _sensor_flag_type sensor_flag;
  using _measurement_flag_type =
    bool;
  _measurement_flag_type measurement_flag;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__sensor_flag(
    const bool & _arg)
  {
    this->sensor_flag = _arg;
    return *this;
  }
  Type & set__measurement_flag(
    const bool & _arg)
  {
    this->measurement_flag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__miv_cluster_interfaces__srv__Gantry_Request
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__miv_cluster_interfaces__srv__Gantry_Request
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gantry_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->sensor_flag != other.sensor_flag) {
      return false;
    }
    if (this->measurement_flag != other.measurement_flag) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gantry_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gantry_Request_

// alias to use template instance with default allocator
using Gantry_Request =
  miv_cluster_interfaces::srv::Gantry_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace miv_cluster_interfaces


#ifndef _WIN32
# define DEPRECATED__miv_cluster_interfaces__srv__Gantry_Response __attribute__((deprecated))
#else
# define DEPRECATED__miv_cluster_interfaces__srv__Gantry_Response __declspec(deprecated)
#endif

namespace miv_cluster_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Gantry_Response_
{
  using Type = Gantry_Response_<ContainerAllocator>;

  explicit Gantry_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->force_measurement = 0.0f;
    }
  }

  explicit Gantry_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = "";
      this->force_measurement = 0.0f;
    }
  }

  // field types and members
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_type status;
  using _force_measurement_type =
    float;
  _force_measurement_type force_measurement;

  // setters for named parameter idiom
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__force_measurement(
    const float & _arg)
  {
    this->force_measurement = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__miv_cluster_interfaces__srv__Gantry_Response
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__miv_cluster_interfaces__srv__Gantry_Response
    std::shared_ptr<miv_cluster_interfaces::srv::Gantry_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Gantry_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->force_measurement != other.force_measurement) {
      return false;
    }
    return true;
  }
  bool operator!=(const Gantry_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Gantry_Response_

// alias to use template instance with default allocator
using Gantry_Response =
  miv_cluster_interfaces::srv::Gantry_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace miv_cluster_interfaces

namespace miv_cluster_interfaces
{

namespace srv
{

struct Gantry
{
  using Request = miv_cluster_interfaces::srv::Gantry_Request;
  using Response = miv_cluster_interfaces::srv::Gantry_Response;
};

}  // namespace srv

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__GANTRY__STRUCT_HPP_
