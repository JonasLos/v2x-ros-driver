// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LightbarInUse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lightbar_in_use.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LIGHTBAR_IN_USE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LIGHTBAR_IN_USE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LightbarInUse __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LightbarInUse __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightbarInUse_
{
  using Type = LightbarInUse_<ContainerAllocator>;

  explicit LightbarInUse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lightbar_in_use = 0;
    }
  }

  explicit LightbarInUse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lightbar_in_use = 0;
    }
  }

  // field types and members
  using _lightbar_in_use_type =
    uint8_t;
  _lightbar_in_use_type lightbar_in_use;

  // setters for named parameter idiom
  Type & set__lightbar_in_use(
    const uint8_t & _arg)
  {
    this->lightbar_in_use = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t NOT_IN_USE =
    1u;
  static constexpr uint8_t IN_USE =
    2u;
  static constexpr uint8_t YELLOW_CAUTION_LIGHTS =
    3u;
  static constexpr uint8_t SCHOOL_BUS_LIGHTS =
    4u;
  static constexpr uint8_t ARROW_SIGNS_ACTIVE =
    5u;
  static constexpr uint8_t SLOW_MOVING_VEHICLE =
    6u;
  static constexpr uint8_t FREQ_STOPS =
    7u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LightbarInUse
    std::shared_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LightbarInUse
    std::shared_ptr<j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightbarInUse_ & other) const
  {
    if (this->lightbar_in_use != other.lightbar_in_use) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightbarInUse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightbarInUse_

// alias to use template instance with default allocator
using LightbarInUse =
  j2735_v2x_msgs::msg::LightbarInUse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::NOT_IN_USE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::IN_USE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::YELLOW_CAUTION_LIGHTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::SCHOOL_BUS_LIGHTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::ARROW_SIGNS_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::SLOW_MOVING_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LightbarInUse_<ContainerAllocator>::FREQ_STOPS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LIGHTBAR_IN_USE__STRUCT_HPP_
