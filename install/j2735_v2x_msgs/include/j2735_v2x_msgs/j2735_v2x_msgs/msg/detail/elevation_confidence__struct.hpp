// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ElevationConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/elevation_confidence.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ElevationConfidence __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ElevationConfidence __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ElevationConfidence_
{
  using Type = ElevationConfidence_<ContainerAllocator>;

  explicit ElevationConfidence_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->confidence = 0;
    }
  }

  explicit ElevationConfidence_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t ELEV_500_00 =
    1u;
  static constexpr uint8_t ELEV_200_00 =
    2u;
  static constexpr uint8_t ELEV_100_00 =
    3u;
  static constexpr uint8_t ELEV_050_00 =
    4u;
  static constexpr uint8_t ELEV_020_00 =
    5u;
  static constexpr uint8_t ELEV_010_00 =
    6u;
  static constexpr uint8_t ELEV_005_00 =
    7u;
  static constexpr uint8_t ELEV_002_00 =
    8u;
  static constexpr uint8_t ELEV_001_00 =
    9u;
  static constexpr uint8_t ELEV_000_50 =
    10u;
  static constexpr uint8_t ELEV_000_20 =
    11u;
  static constexpr uint8_t ELEV_000_10 =
    12u;
  static constexpr uint8_t ELEV_000_05 =
    13u;
  static constexpr uint8_t ELEV_000_02 =
    14u;
  static constexpr uint8_t ELEV_000_01 =
    15u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ElevationConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ElevationConfidence
    std::shared_ptr<j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ElevationConfidence_ & other) const
  {
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ElevationConfidence_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ElevationConfidence_

// alias to use template instance with default allocator
using ElevationConfidence =
  j2735_v2x_msgs::msg::ElevationConfidence_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_500_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_200_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_100_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_050_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_020_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_010_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_005_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_002_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_001_00;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_000_50;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_000_20;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_000_10;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_000_05;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_000_02;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ElevationConfidence_<ContainerAllocator>::ELEV_000_01;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ELEVATION_CONFIDENCE__STRUCT_HPP_
