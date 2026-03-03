// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SpeedLimitType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/speed_limit_type.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitType __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitType __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedLimitType_
{
  using Type = SpeedLimitType_<ContainerAllocator>;

  explicit SpeedLimitType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_limit_type = 0;
    }
  }

  explicit SpeedLimitType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed_limit_type = 0;
    }
  }

  // field types and members
  using _speed_limit_type_type =
    uint8_t;
  _speed_limit_type_type speed_limit_type;

  // setters for named parameter idiom
  Type & set__speed_limit_type(
    const uint8_t & _arg)
  {
    this->speed_limit_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t MAXSPEEDINSCHOOLZONE =
    1u;
  static constexpr uint8_t MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT =
    2u;
  static constexpr uint8_t MAXSPEEDINCONSTRUCTIONZONE =
    3u;
  static constexpr uint8_t VEHICLEMINSPEED =
    4u;
  static constexpr uint8_t VEHICLEMAXSPEED =
    5u;
  static constexpr uint8_t VEHICLENIGHTMAXSPEED =
    6u;
  static constexpr uint8_t TRUCKMINSPEED =
    7u;
  static constexpr uint8_t TRUCKMAXSPEED =
    8u;
  static constexpr uint8_t TRUCKNIGHTMAXSPEED =
    9u;
  static constexpr uint8_t VEHICLESWITHTRAILERSMINSPEED =
    10u;
  static constexpr uint8_t VEHICLESWITHTRAILERSMAXSPEED =
    11u;
  static constexpr uint8_t VEHICLESWITHTRAILERSNIGHTMAXSPEED =
    12u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitType
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpeedLimitType
    std::shared_ptr<j2735_v2x_msgs::msg::SpeedLimitType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedLimitType_ & other) const
  {
    if (this->speed_limit_type != other.speed_limit_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedLimitType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedLimitType_

// alias to use template instance with default allocator
using SpeedLimitType =
  j2735_v2x_msgs::msg::SpeedLimitType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::MAXSPEEDINSCHOOLZONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::MAXSPEEDINSCHOOLZONEWHENCHILDRENAREPRESENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::MAXSPEEDINCONSTRUCTIONZONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::VEHICLEMINSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::VEHICLEMAXSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::VEHICLENIGHTMAXSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::TRUCKMINSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::TRUCKMAXSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::TRUCKNIGHTMAXSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::VEHICLESWITHTRAILERSMINSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::VEHICLESWITHTRAILERSMAXSPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t SpeedLimitType_<ContainerAllocator>::VEHICLESWITHTRAILERSNIGHTMAXSPEED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPEED_LIMIT_TYPE__STRUCT_HPP_
