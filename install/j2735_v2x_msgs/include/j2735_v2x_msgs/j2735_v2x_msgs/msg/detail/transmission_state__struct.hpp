// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TransmissionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/transmission_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TransmissionState __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TransmissionState __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TransmissionState_
{
  using Type = TransmissionState_<ContainerAllocator>;

  explicit TransmissionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transmission_state = 0;
    }
  }

  explicit TransmissionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transmission_state = 0;
    }
  }

  // field types and members
  using _transmission_state_type =
    uint8_t;
  _transmission_state_type transmission_state;

  // setters for named parameter idiom
  Type & set__transmission_state(
    const uint8_t & _arg)
  {
    this->transmission_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NEUTRAL =
    0u;
  static constexpr uint8_t PARK =
    1u;
  static constexpr uint8_t FORWARDGEARS =
    2u;
  static constexpr uint8_t REVERSEGEARS =
    3u;
  static constexpr uint8_t RESERVED1 =
    4u;
  static constexpr uint8_t RESERVED2 =
    5u;
  static constexpr uint8_t RESERVED3 =
    6u;
  static constexpr uint8_t UNAVAILABLE =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TransmissionState
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TransmissionState
    std::shared_ptr<j2735_v2x_msgs::msg::TransmissionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TransmissionState_ & other) const
  {
    if (this->transmission_state != other.transmission_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const TransmissionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TransmissionState_

// alias to use template instance with default allocator
using TransmissionState =
  j2735_v2x_msgs::msg::TransmissionState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::NEUTRAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::PARK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::FORWARDGEARS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::REVERSEGEARS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::RESERVED1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::RESERVED2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::RESERVED3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TransmissionState_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__STRUCT_HPP_
