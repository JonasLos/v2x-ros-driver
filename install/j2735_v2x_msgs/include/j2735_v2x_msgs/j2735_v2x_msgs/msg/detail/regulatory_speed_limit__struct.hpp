// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RegulatorySpeedLimit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/regulatory_speed_limit.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type'
#include "j2735_v2x_msgs/msg/detail/speed_limit_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RegulatorySpeedLimit __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RegulatorySpeedLimit __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RegulatorySpeedLimit_
{
  using Type = RegulatorySpeedLimit_<ContainerAllocator>;

  explicit RegulatorySpeedLimit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  explicit RegulatorySpeedLimit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
    }
  }

  // field types and members
  using _type_type =
    j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator>;
  _type_type type;
  using _speed_type =
    double;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__type(
    const j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RegulatorySpeedLimit
    std::shared_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RegulatorySpeedLimit
    std::shared_ptr<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RegulatorySpeedLimit_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const RegulatorySpeedLimit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RegulatorySpeedLimit_

// alias to use template instance with default allocator
using RegulatorySpeedLimit =
  j2735_v2x_msgs::msg::RegulatorySpeedLimit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__STRUCT_HPP_
