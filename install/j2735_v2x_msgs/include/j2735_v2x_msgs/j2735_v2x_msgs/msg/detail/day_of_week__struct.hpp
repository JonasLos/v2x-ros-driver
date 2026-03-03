// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DayOfWeek.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/day_of_week.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DayOfWeek __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DayOfWeek __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DayOfWeek_
{
  using Type = DayOfWeek_<ContainerAllocator>;

  explicit DayOfWeek_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 7>::iterator, uint8_t>(this->dow.begin(), this->dow.end(), 0);
    }
  }

  explicit DayOfWeek_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : dow(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 7>::iterator, uint8_t>(this->dow.begin(), this->dow.end(), 0);
    }
  }

  // field types and members
  using _dow_type =
    std::array<uint8_t, 7>;
  _dow_type dow;

  // setters for named parameter idiom
  Type & set__dow(
    const std::array<uint8_t, 7> & _arg)
  {
    this->dow = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t SUN =
    6u;
  static constexpr uint8_t MON =
    5u;
  static constexpr uint8_t TUE =
    4u;
  static constexpr uint8_t WED =
    3u;
  static constexpr uint8_t THU =
    2u;
  static constexpr uint8_t FRI =
    1u;
  static constexpr uint8_t SAT =
    0u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DayOfWeek
    std::shared_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DayOfWeek
    std::shared_ptr<j2735_v2x_msgs::msg::DayOfWeek_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DayOfWeek_ & other) const
  {
    if (this->dow != other.dow) {
      return false;
    }
    return true;
  }
  bool operator!=(const DayOfWeek_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DayOfWeek_

// alias to use template instance with default allocator
using DayOfWeek =
  j2735_v2x_msgs::msg::DayOfWeek_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DayOfWeek_<ContainerAllocator>::SUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DayOfWeek_<ContainerAllocator>::MON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DayOfWeek_<ContainerAllocator>::TUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DayOfWeek_<ContainerAllocator>::WED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DayOfWeek_<ContainerAllocator>::THU;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DayOfWeek_<ContainerAllocator>::FRI;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DayOfWeek_<ContainerAllocator>::SAT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__STRUCT_HPP_
