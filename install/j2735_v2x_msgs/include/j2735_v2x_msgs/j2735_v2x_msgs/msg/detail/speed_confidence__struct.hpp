// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedConfidence_
{
  using Type = SpeedConfidence_<ContainerAllocator>;

  explicit SpeedConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_confidence = 0;
    }
  }

  explicit SpeedConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_confidence = 0;
    }
  }

  // field types and members
  using _speed_confidence_type =
    uint8_t;
  _speed_confidence_type speed_confidence;

  // setters for named parameter idiom
  Type & set__speed_confidence(
    const uint8_t & _arg)
  {
    this->speed_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t PREC100MS =
    1u;
  static constexpr uint8_t PREC10MS =
    2u;
  static constexpr uint8_t PREC5MS =
    3u;
  static constexpr uint8_t PREC1MS =
    4u;
  static constexpr uint8_t PREC0_1MS =
    5u;
  static constexpr uint8_t PREC0_05MS =
    6u;
  static constexpr uint8_t PREC0_01MS =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedConfidence_ & other) const
  {
    if (this->speed_confidence != other.speed_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedConfidence_

// alias to use template instance with default allocator
using SpeedConfidence =
  j2735_v2x_msgs::msg::SpeedConfidence_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::PREC100MS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::PREC10MS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::PREC5MS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::PREC1MS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::PREC0_1MS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::PREC0_05MS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedConfidence_<ContainerAllocator>::PREC0_01MS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_CONFIDENCE__STRUCT_HPP_
