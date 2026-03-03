// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/WiperStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__WiperStatus __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__WiperStatus __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WiperStatus_
{
  using Type = WiperStatus_<ContainerAllocator>;

  explicit WiperStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wiper_status = 0;
    }
  }

  explicit WiperStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->wiper_status = 0;
    }
  }

  // field types and members
  using _wiper_status_type =
    uint8_t;
  _wiper_status_type wiper_status;

  // setters for named parameter idiom
  Type & set__wiper_status(
    const uint8_t & _arg)
  {
    this->wiper_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t OFF =
    1u;
  static constexpr uint8_t INTERMITTENT =
    2u;
  static constexpr uint8_t LOW =
    3u;
  static constexpr uint8_t HIGH =
    4u;
  static constexpr uint8_t WASHER_IN_USE =
    5u;
  static constexpr uint8_t AUTOMATIC_PRESENT =
    6u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__WiperStatus
    std::shared_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__WiperStatus
    std::shared_ptr<j2735_v2x_msgs::msg::WiperStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WiperStatus_ & other) const
  {
    if (this->wiper_status != other.wiper_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const WiperStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WiperStatus_

// alias to use template instance with default allocator
using WiperStatus =
  j2735_v2x_msgs::msg::WiperStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperStatus_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperStatus_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperStatus_<ContainerAllocator>::INTERMITTENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperStatus_<ContainerAllocator>::LOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperStatus_<ContainerAllocator>::HIGH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperStatus_<ContainerAllocator>::WASHER_IN_USE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t WiperStatus_<ContainerAllocator>::AUTOMATIC_PRESENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__STRUCT_HPP_
