// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from miv_cluster_interfaces:srv/Camera.idl
// generated code does not contain a copyright notice

#ifndef MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__STRUCT_HPP_
#define MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__miv_cluster_interfaces__srv__Camera_Request __attribute__((deprecated))
#else
# define DEPRECATED__miv_cluster_interfaces__srv__Camera_Request __declspec(deprecated)
#endif

namespace miv_cluster_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Camera_Request_
{
  using Type = Camera_Request_<ContainerAllocator>;

  explicit Camera_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->z1 = 0.0f;
      this->calibration_flag = false;
      this->qrscan_flag = false;
      this->iteration = 0l;
    }
  }

  explicit Camera_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->z1 = 0.0f;
      this->calibration_flag = false;
      this->qrscan_flag = false;
      this->iteration = 0l;
    }
  }

  // field types and members
  using _x1_type =
    float;
  _x1_type x1;
  using _y1_type =
    float;
  _y1_type y1;
  using _z1_type =
    float;
  _z1_type z1;
  using _calibration_flag_type =
    bool;
  _calibration_flag_type calibration_flag;
  using _qrscan_flag_type =
    bool;
  _qrscan_flag_type qrscan_flag;
  using _iteration_type =
    int32_t;
  _iteration_type iteration;

  // setters for named parameter idiom
  Type & set__x1(
    const float & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const float & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__z1(
    const float & _arg)
  {
    this->z1 = _arg;
    return *this;
  }
  Type & set__calibration_flag(
    const bool & _arg)
  {
    this->calibration_flag = _arg;
    return *this;
  }
  Type & set__qrscan_flag(
    const bool & _arg)
  {
    this->qrscan_flag = _arg;
    return *this;
  }
  Type & set__iteration(
    const int32_t & _arg)
  {
    this->iteration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__miv_cluster_interfaces__srv__Camera_Request
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__miv_cluster_interfaces__srv__Camera_Request
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Request_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->z1 != other.z1) {
      return false;
    }
    if (this->calibration_flag != other.calibration_flag) {
      return false;
    }
    if (this->qrscan_flag != other.qrscan_flag) {
      return false;
    }
    if (this->iteration != other.iteration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_Request_

// alias to use template instance with default allocator
using Camera_Request =
  miv_cluster_interfaces::srv::Camera_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace miv_cluster_interfaces


#ifndef _WIN32
# define DEPRECATED__miv_cluster_interfaces__srv__Camera_Response __attribute__((deprecated))
#else
# define DEPRECATED__miv_cluster_interfaces__srv__Camera_Response __declspec(deprecated)
#endif

namespace miv_cluster_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Camera_Response_
{
  using Type = Camera_Response_<ContainerAllocator>;

  explicit Camera_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->z2 = 0.0f;
    }
  }

  explicit Camera_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->z2 = 0.0f;
    }
  }

  // field types and members
  using _x2_type =
    float;
  _x2_type x2;
  using _y2_type =
    float;
  _y2_type y2;
  using _z2_type =
    float;
  _z2_type z2;

  // setters for named parameter idiom
  Type & set__x2(
    const float & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const float & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__z2(
    const float & _arg)
  {
    this->z2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__miv_cluster_interfaces__srv__Camera_Response
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__miv_cluster_interfaces__srv__Camera_Response
    std::shared_ptr<miv_cluster_interfaces::srv::Camera_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Camera_Response_ & other) const
  {
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->z2 != other.z2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Camera_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Camera_Response_

// alias to use template instance with default allocator
using Camera_Response =
  miv_cluster_interfaces::srv::Camera_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace miv_cluster_interfaces

namespace miv_cluster_interfaces
{

namespace srv
{

struct Camera
{
  using Request = miv_cluster_interfaces::srv::Camera_Request;
  using Response = miv_cluster_interfaces::srv::Camera_Response;
};

}  // namespace srv

}  // namespace miv_cluster_interfaces

#endif  // MIV_CLUSTER_INTERFACES__SRV__DETAIL__CAMERA__STRUCT_HPP_
