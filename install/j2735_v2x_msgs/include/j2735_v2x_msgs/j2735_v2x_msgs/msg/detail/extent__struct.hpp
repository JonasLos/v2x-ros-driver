// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Extent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/extent.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EXTENT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EXTENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Extent __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Extent __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Extent_
{
  using Type = Extent_<ContainerAllocator>;

  explicit Extent_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->extent_value = 0;
    }
  }

  explicit Extent_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->extent_value = 0;
    }
  }

  // field types and members
  using _extent_value_type =
    uint8_t;
  _extent_value_type extent_value;

  // setters for named parameter idiom
  Type & set__extent_value(
    const uint8_t & _arg)
  {
    this->extent_value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t USE_INSTANTLY_ONLY =
    0u;
  static constexpr uint8_t USE_FOR_3_METERS =
    1u;
  static constexpr uint8_t USE_FOR_10_METERS =
    2u;
  static constexpr uint8_t USE_FOR_50_METERS =
    3u;
  static constexpr uint8_t USE_FOR_100_METERS =
    4u;
  static constexpr uint8_t USE_FOR_500_METERS =
    5u;
  static constexpr uint8_t USE_FOR_1000_METERS =
    6u;
  static constexpr uint8_t USE_FOR_5000_METERS =
    7u;
  static constexpr uint8_t USE_FOR_10000_METERS =
    8u;
  static constexpr uint8_t USE_FOR_50000_METERS =
    9u;
  static constexpr uint8_t USE_FOR_100000_METERS =
    10u;
  static constexpr uint8_t USE_FOR_500000_METERS =
    11u;
  static constexpr uint8_t USE_FOR_1000000_METERS =
    12u;
  static constexpr uint8_t USE_FOR_5000000_METERS =
    13u;
  static constexpr uint8_t USE_FOR_10000000_METERS =
    14u;
  static constexpr uint8_t FOREVER =
    15u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Extent_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Extent_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Extent_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Extent_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Extent
    std::shared_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Extent
    std::shared_ptr<j2735_v2x_msgs::msg::Extent_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Extent_ & other) const
  {
    if (this->extent_value != other.extent_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Extent_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Extent_

// alias to use template instance with default allocator
using Extent =
  j2735_v2x_msgs::msg::Extent_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_INSTANTLY_ONLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_3_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_10_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_50_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_100_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_500_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_1000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_5000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_10000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_50000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_100000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_500000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_1000000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_5000000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::USE_FOR_10000000_METERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Extent_<ContainerAllocator>::FOREVER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EXTENT__STRUCT_HPP_
