// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedLimitList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_limit_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedLimitList_
{
  using Type = SpeedLimitList_<ContainerAllocator>;

  explicit SpeedLimitList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SpeedLimitList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _speed_limits_type =
    std::vector<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>>;
  _speed_limits_type speed_limits;

  // setters for named parameter idiom
  Type & set__speed_limits(
    const std::vector<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::RegulatorySpeedLimit_<ContainerAllocator>>> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitList
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitList
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedLimitList_ & other) const
  {
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedLimitList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedLimitList_

// alias to use template instance with default allocator
using SpeedLimitList =
  j2735_v2x_msgs::msg::SpeedLimitList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_LIST__STRUCT_HPP_
