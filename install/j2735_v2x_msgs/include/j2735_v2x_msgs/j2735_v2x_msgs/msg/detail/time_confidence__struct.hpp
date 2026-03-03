// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TimeConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/time_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TimeConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TimeConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeConfidence_
{
  using Type = TimeConfidence_<ContainerAllocator>;

  explicit TimeConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0;
    }
  }

  explicit TimeConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0;
    }
  }

  // field types and members
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t TIME_100_000 =
    1u;
  static constexpr uint8_t TIME_050_000 =
    2u;
  static constexpr uint8_t TIME_020_000 =
    3u;
  static constexpr uint8_t TIME_010_000 =
    4u;
  static constexpr uint8_t TIME_002_000 =
    5u;
  static constexpr uint8_t TIME_001_000 =
    6u;
  static constexpr uint8_t TIME_000_500 =
    7u;
  static constexpr uint8_t TIME_000_200 =
    8u;
  static constexpr uint8_t TIME_000_100 =
    9u;
  static constexpr uint8_t TIME_000_050 =
    10u;
  static constexpr uint8_t TIME_000_020 =
    11u;
  static constexpr uint8_t TIME_000_010 =
    12u;
  static constexpr uint8_t TIME_000_005 =
    13u;
  static constexpr uint8_t TIME_000_002 =
    14u;
  static constexpr uint8_t TIME_000_001 =
    15u;
  static constexpr uint8_t TIME_000_000_5 =
    16u;
  static constexpr uint8_t TIME_000_000_2 =
    17u;
  static constexpr uint8_t TIME_000_000_1 =
    18u;
  static constexpr uint8_t TIME_000_000_05 =
    19u;
  static constexpr uint8_t TIME_000_000_02 =
    20u;
  static constexpr uint8_t TIME_000_000_01 =
    21u;
  static constexpr uint8_t TIME_000_000_005 =
    22u;
  static constexpr uint8_t TIME_000_000_002 =
    23u;
  static constexpr uint8_t TIME_000_000_001 =
    24u;
  static constexpr uint8_t TIME_000_000_000_5 =
    25u;
  static constexpr uint8_t TIME_000_000_000_2 =
    26u;
  static constexpr uint8_t TIME_000_000_000_1 =
    27u;
  static constexpr uint8_t TIME_000_000_000_05 =
    28u;
  static constexpr uint8_t TIME_000_000_000_02 =
    29u;
  static constexpr uint8_t TIME_000_000_000_01 =
    30u;
  static constexpr uint8_t TIME_000_000_000_005 =
    31u;
  static constexpr uint8_t TIME_000_000_000_002 =
    32u;
  static constexpr uint8_t TIME_000_000_000_001 =
    33u;
  static constexpr uint8_t TIME_000_000_000_000_5 =
    34u;
  static constexpr uint8_t TIME_000_000_000_000_2 =
    35u;
  static constexpr uint8_t TIME_000_000_000_000_1 =
    36u;
  static constexpr uint8_t TIME_000_000_000_000_05 =
    37u;
  static constexpr uint8_t TIME_000_000_000_000_02 =
    38u;
  static constexpr uint8_t TIME_000_000_000_000_01 =
    39u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TimeConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TimeConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeConfidence_ & other) const
  {
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeConfidence_

// alias to use template instance with default allocator
using TimeConfidence =
  j2735_v2x_msgs::msg::TimeConfidence_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_100_000;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_050_000;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_020_000;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_010_000;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_002_000;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_001_000;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_500;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_200;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_100;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_050;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_020;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_010;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_005;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_002;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_001;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_05;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_02;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_01;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_005;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_002;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_001;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_05;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_02;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_01;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_005;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_002;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_001;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_000_5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_000_2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_000_1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_000_05;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_000_02;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TimeConfidence_<ContainerAllocator>::TIME_000_000_000_000_01;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_CONFIDENCE__STRUCT_HPP_
