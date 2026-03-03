// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TransmissionAndSpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/transmission_and_speed.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'transmission'
#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/velocity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TransmissionAndSpeed __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TransmissionAndSpeed __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransmissionAndSpeed_
{
  using Type = TransmissionAndSpeed_<ContainerAllocator>;

  explicit TransmissionAndSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transmission(_init),
    speed(_init)
  {
    (void)_init;
  }

  explicit TransmissionAndSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : transmission(_alloc, _init),
    speed(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _transmission_type =
    j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>;
  _transmission_type transmission;
  using _speed_type =
    j2735_v2x_msgs::msg::Velocity_<ContainerAllocator>;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__transmission(
    const j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> & _arg)
  {
    this->transmission = _arg;
    return *this;
  }
  Type & set__speed(
    const j2735_v2x_msgs::msg::Velocity_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TransmissionAndSpeed
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TransmissionAndSpeed
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransmissionAndSpeed_ & other) const
  {
    if (this->transmission != other.transmission) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransmissionAndSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransmissionAndSpeed_

// alias to use template instance with default allocator
using TransmissionAndSpeed =
  j2735_v2x_msgs::msg::TransmissionAndSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_AND_SPEED__STRUCT_HPP_
