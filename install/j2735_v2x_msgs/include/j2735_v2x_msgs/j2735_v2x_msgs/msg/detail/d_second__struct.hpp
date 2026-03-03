// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DSecond.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_second.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DSecond __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DSecond __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DSecond_
{
  using Type = DSecond_<ContainerAllocator>;

  explicit DSecond_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->millisecond = 0;
    }
  }

  explicit DSecond_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->millisecond = 0;
    }
  }

  // field types and members
  using _millisecond_type =
    uint16_t;
  _millisecond_type millisecond;

  // setters for named parameter idiom
  Type & set__millisecond(
    const uint16_t & _arg)
  {
    this->millisecond = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN =
    0u;
  static constexpr uint16_t MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX =
    59999u;
  static constexpr uint16_t MILLISEC_WITHIN_MINUTE_LEAP_MIN =
    60000u;
  static constexpr uint16_t MILLISEC_WITHIN_MINUTE_LEAP_MAX =
    60999u;
  static constexpr uint16_t RESERVED_MIN =
    61000u;
  static constexpr uint16_t RESERVED_MAX =
    65534u;
  static constexpr uint16_t UNAVAILABLE =
    65535u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DSecond
    std::shared_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DSecond
    std::shared_ptr<j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DSecond_ & other) const
  {
    if (this->millisecond != other.millisecond) {
      return false;
    }
    return true;
  }
  bool operator!=(const DSecond_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DSecond_

// alias to use template instance with default allocator
using DSecond =
  j2735_v2x_msgs::msg::DSecond_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DSecond_<ContainerAllocator>::MILLISEC_WITHIN_MINUTE_NON_LEAP_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DSecond_<ContainerAllocator>::MILLISEC_WITHIN_MINUTE_NON_LEAP_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DSecond_<ContainerAllocator>::MILLISEC_WITHIN_MINUTE_LEAP_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DSecond_<ContainerAllocator>::MILLISEC_WITHIN_MINUTE_LEAP_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DSecond_<ContainerAllocator>::RESERVED_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DSecond_<ContainerAllocator>::RESERVED_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t DSecond_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__STRUCT_HPP_
