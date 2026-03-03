// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/allowed_maneuvers.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AllowedManeuvers __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AllowedManeuvers __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AllowedManeuvers_
{
  using Type = AllowedManeuvers_<ContainerAllocator>;

  explicit AllowedManeuvers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->allowed_maneuvers = 0;
    }
  }

  explicit AllowedManeuvers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->allowed_maneuvers = 0;
    }
  }

  // field types and members
  using _allowed_maneuvers_type =
    uint16_t;
  _allowed_maneuvers_type allowed_maneuvers;

  // setters for named parameter idiom
  Type & set__allowed_maneuvers(
    const uint16_t & _arg)
  {
    this->allowed_maneuvers = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t STRAIGHT =
    1u;
  static constexpr uint16_t LEFT_TURN =
    2u;
  static constexpr uint16_t RIGHT_TURN =
    4u;
  static constexpr uint16_t U_TURN =
    8u;
  static constexpr uint16_t LEFT_TURN_ON_RED =
    16u;
  static constexpr uint16_t RIGHT_TURN_ON_RED =
    32u;
  static constexpr uint16_t LANE_CHANGE =
    64u;
  static constexpr uint16_t NO_STOPPING_ALLOWED =
    128u;
  static constexpr uint16_t ALWAYS_YIELD =
    256u;
  static constexpr uint16_t GO_WITH_HALT =
    512u;
  static constexpr uint16_t CAUTION =
    1024u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AllowedManeuvers
    std::shared_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AllowedManeuvers
    std::shared_ptr<j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AllowedManeuvers_ & other) const
  {
    if (this->allowed_maneuvers != other.allowed_maneuvers) {
      return false;
    }
    return true;
  }
  bool operator!=(const AllowedManeuvers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AllowedManeuvers_

// alias to use template instance with default allocator
using AllowedManeuvers =
  j2735_v2x_msgs::msg::AllowedManeuvers_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::STRAIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::LEFT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::RIGHT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::U_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::LEFT_TURN_ON_RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::RIGHT_TURN_ON_RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::LANE_CHANGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::NO_STOPPING_ALLOWED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::ALWAYS_YIELD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::GO_WITH_HALT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t AllowedManeuvers_<ContainerAllocator>::CAUTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__STRUCT_HPP_
