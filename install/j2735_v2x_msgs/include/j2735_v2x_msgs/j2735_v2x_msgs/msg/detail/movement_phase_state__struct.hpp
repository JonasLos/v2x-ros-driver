// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/MovementPhaseState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_phase_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__MovementPhaseState __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__MovementPhaseState __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementPhaseState_
{
  using Type = MovementPhaseState_<ContainerAllocator>;

  explicit MovementPhaseState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement_phase_state = 0;
    }
  }

  explicit MovementPhaseState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->movement_phase_state = 0;
    }
  }

  // field types and members
  using _movement_phase_state_type =
    uint8_t;
  _movement_phase_state_type movement_phase_state;

  // setters for named parameter idiom
  Type & set__movement_phase_state(
    const uint8_t & _arg)
  {
    this->movement_phase_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t DARK =
    1u;
  static constexpr uint8_t STOP_THEN_PROCEED =
    2u;
  static constexpr uint8_t STOP_AND_REMAIN =
    3u;
  static constexpr uint8_t PRE_MOVEMENT =
    4u;
  static constexpr uint8_t PERMISSIVE_MOVEMENT_ALLOWED =
    5u;
  static constexpr uint8_t PROTECTED_MOVEMENT_ALLOWED =
    6u;
  static constexpr uint8_t PERMISSIVE_CLEARANCE =
    7u;
  static constexpr uint8_t PROTECTED_CLEARANCE =
    8u;
  static constexpr uint8_t CAUTION_CONFLICTING_TRAFFIC =
    9u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__MovementPhaseState
    std::shared_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__MovementPhaseState
    std::shared_ptr<j2735_v2x_msgs::msg::MovementPhaseState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementPhaseState_ & other) const
  {
    if (this->movement_phase_state != other.movement_phase_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementPhaseState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementPhaseState_

// alias to use template instance with default allocator
using MovementPhaseState =
  j2735_v2x_msgs::msg::MovementPhaseState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::DARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::STOP_THEN_PROCEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::STOP_AND_REMAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::PRE_MOVEMENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::PERMISSIVE_MOVEMENT_ALLOWED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::PROTECTED_MOVEMENT_ALLOWED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::PERMISSIVE_CLEARANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::PROTECTED_CLEARANCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MovementPhaseState_<ContainerAllocator>::CAUTION_CONFLICTING_TRAFFIC;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__STRUCT_HPP_
