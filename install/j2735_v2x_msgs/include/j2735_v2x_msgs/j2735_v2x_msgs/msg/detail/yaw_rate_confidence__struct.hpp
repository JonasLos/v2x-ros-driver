// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/YawRateConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/yaw_rate_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__YawRateConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__YawRateConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YawRateConfidence_
{
  using Type = YawRateConfidence_<ContainerAllocator>;

  explicit YawRateConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_rate_confidence = 0;
    }
  }

  explicit YawRateConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw_rate_confidence = 0;
    }
  }

  // field types and members
  using _yaw_rate_confidence_type =
    uint8_t;
  _yaw_rate_confidence_type yaw_rate_confidence;

  // setters for named parameter idiom
  Type & set__yaw_rate_confidence(
    const uint8_t & _arg)
  {
    this->yaw_rate_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DEG_SEC_100_00 =
    1u;
  static constexpr uint8_t DEG_SEC_010_00 =
    2u;
  static constexpr uint8_t DEG_SEC_005_00 =
    3u;
  static constexpr uint8_t DEG_SEC_001_00 =
    4u;
  static constexpr uint8_t DEG_SEC_000_10 =
    5u;
  static constexpr uint8_t DEG_SEC_000_05 =
    6u;
  static constexpr uint8_t DEG_SEC_000_01 =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__YawRateConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__YawRateConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::YawRateConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YawRateConfidence_ & other) const
  {
    if (this->yaw_rate_confidence != other.yaw_rate_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const YawRateConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YawRateConfidence_

// alias to use template instance with default allocator
using YawRateConfidence =
  j2735_v2x_msgs::msg::YawRateConfidence_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawRateConfidence_<ContainerAllocator>::DEG_SEC_100_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawRateConfidence_<ContainerAllocator>::DEG_SEC_010_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawRateConfidence_<ContainerAllocator>::DEG_SEC_005_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawRateConfidence_<ContainerAllocator>::DEG_SEC_001_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawRateConfidence_<ContainerAllocator>::DEG_SEC_000_10;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawRateConfidence_<ContainerAllocator>::DEG_SEC_000_05;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawRateConfidence_<ContainerAllocator>::DEG_SEC_000_01;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE_CONFIDENCE__STRUCT_HPP_
