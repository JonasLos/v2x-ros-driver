// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedandHeadingandThrottleConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speedand_headingand_throttle_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_confidence__struct.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/speed_confidence__struct.hpp"
// Member 'throttle'
#include "j2735_v2x_msgs/msg/detail/throttle_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedandHeadingandThrottleConfidence_
{
  using Type = SpeedandHeadingandThrottleConfidence_<ContainerAllocator>;

  explicit SpeedandHeadingandThrottleConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : heading(_init),
    speed(_init),
    throttle(_init)
  {
    (void)_init;
  }

  explicit SpeedandHeadingandThrottleConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : heading(_alloc, _init),
    speed(_alloc, _init),
    throttle(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _heading_type =
    j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator>;
  _heading_type heading;
  using _speed_type =
    j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>;
  _speed_type speed;
  using _throttle_type =
    j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator>;
  _throttle_type throttle;

  // setters for named parameter idiom
  Type & set__heading(
    const j2735_v2x_msgs::msg::HeadingConfidence_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__throttle(
    const j2735_v2x_msgs::msg::ThrottleConfidence_<ContainerAllocator> & _arg)
  {
    this->throttle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedandHeadingandThrottleConfidence_ & other) const
  {
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedandHeadingandThrottleConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedandHeadingandThrottleConfidence_

// alias to use template instance with default allocator
using SpeedandHeadingandThrottleConfidence =
  j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEEDAND_HEADINGAND_THROTTLE_CONFIDENCE__STRUCT_HPP_
