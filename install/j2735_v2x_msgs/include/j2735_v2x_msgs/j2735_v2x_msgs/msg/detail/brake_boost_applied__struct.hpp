// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BrakeBoostApplied.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/brake_boost_applied.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BrakeBoostApplied __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BrakeBoostApplied __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeBoostApplied_
{
  using Type = BrakeBoostApplied_<ContainerAllocator>;

  explicit BrakeBoostApplied_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_boost_applied = 0;
    }
  }

  explicit BrakeBoostApplied_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->brake_boost_applied = 0;
    }
  }

  // field types and members
  using _brake_boost_applied_type =
    uint8_t;
  _brake_boost_applied_type brake_boost_applied;

  // setters for named parameter idiom
  Type & set__brake_boost_applied(
    const uint8_t & _arg)
  {
    this->brake_boost_applied = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t OFF =
    1u;
  static constexpr uint8_t ON =
    2u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BrakeBoostApplied
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BrakeBoostApplied
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeBoostApplied_ & other) const
  {
    if (this->brake_boost_applied != other.brake_boost_applied) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeBoostApplied_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeBoostApplied_

// alias to use template instance with default allocator
using BrakeBoostApplied =
  j2735_v2x_msgs::msg::BrakeBoostApplied_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeBoostApplied_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeBoostApplied_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BrakeBoostApplied_<ContainerAllocator>::ON;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__STRUCT_HPP_
