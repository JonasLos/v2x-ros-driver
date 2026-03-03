// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DHour.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_hour.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DHour __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DHour __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DHour_
{
  using Type = DHour_<ContainerAllocator>;

  explicit DHour_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hour = 0;
    }
  }

  explicit DHour_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hour = 0;
    }
  }

  // field types and members
  using _hour_type =
    uint8_t;
  _hour_type hour;

  // setters for named parameter idiom
  Type & set__hour(
    const uint8_t & _arg)
  {
    this->hour = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HOUR_OF_DAY_MIN =
    0u;
  static constexpr uint8_t HOUR_OF_DAY_MAX =
    31u;
  static constexpr uint8_t TRANSITE_SCHEDULE_ADHERENCE_START =
    24u;
  static constexpr uint8_t TRANSITE_SCHEDULE_ADHERENCE_END =
    30u;
  static constexpr uint8_t UNAVAILABLE =
    31u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DHour_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DHour_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DHour_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DHour_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DHour
    std::shared_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DHour
    std::shared_ptr<j2735_v2x_msgs::msg::DHour_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DHour_ & other) const
  {
    if (this->hour != other.hour) {
      return false;
    }
    return true;
  }
  bool operator!=(const DHour_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DHour_

// alias to use template instance with default allocator
using DHour =
  j2735_v2x_msgs::msg::DHour_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DHour_<ContainerAllocator>::HOUR_OF_DAY_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DHour_<ContainerAllocator>::HOUR_OF_DAY_MAX;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DHour_<ContainerAllocator>::TRANSITE_SCHEDULE_ADHERENCE_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DHour_<ContainerAllocator>::TRANSITE_SCHEDULE_ADHERENCE_END;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DHour_<ContainerAllocator>::UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__STRUCT_HPP_
