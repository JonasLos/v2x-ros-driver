// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/AntiLockBrakeStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/anti_lock_brake_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANTI_LOCK_BRAKE_STATUS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ANTI_LOCK_BRAKE_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__AntiLockBrakeStatus __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__AntiLockBrakeStatus __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AntiLockBrakeStatus_
{
  using Type = AntiLockBrakeStatus_<ContainerAllocator>;

  explicit AntiLockBrakeStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anti_lock_brake_status = 0;
    }
  }

  explicit AntiLockBrakeStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->anti_lock_brake_status = 0;
    }
  }

  // field types and members
  using _anti_lock_brake_status_type =
    uint8_t;
  _anti_lock_brake_status_type anti_lock_brake_status;

  // setters for named parameter idiom
  Type & set__anti_lock_brake_status(
    const uint8_t & _arg)
  {
    this->anti_lock_brake_status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNAVAILABLE =
    0u;
  static constexpr uint8_t OFF =
    1u;
  static constexpr uint8_t ON =
    2u;
  static constexpr uint8_t ENGAGED =
    3u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__AntiLockBrakeStatus
    std::shared_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__AntiLockBrakeStatus
    std::shared_ptr<j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AntiLockBrakeStatus_ & other) const
  {
    if (this->anti_lock_brake_status != other.anti_lock_brake_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const AntiLockBrakeStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AntiLockBrakeStatus_

// alias to use template instance with default allocator
using AntiLockBrakeStatus =
  j2735_v2x_msgs::msg::AntiLockBrakeStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AntiLockBrakeStatus_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AntiLockBrakeStatus_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AntiLockBrakeStatus_<ContainerAllocator>::ON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AntiLockBrakeStatus_<ContainerAllocator>::ENGAGED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANTI_LOCK_BRAKE_STATUS__STRUCT_HPP_
