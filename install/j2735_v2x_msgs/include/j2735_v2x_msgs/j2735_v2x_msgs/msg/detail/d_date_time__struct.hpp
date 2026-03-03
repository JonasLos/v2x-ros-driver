// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_date_time.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'year'
#include "j2735_v2x_msgs/msg/detail/d_year__struct.hpp"
// Member 'month'
#include "j2735_v2x_msgs/msg/detail/d_month__struct.hpp"
// Member 'day'
#include "j2735_v2x_msgs/msg/detail/d_day__struct.hpp"
// Member 'hour'
#include "j2735_v2x_msgs/msg/detail/d_hour__struct.hpp"
// Member 'minute'
#include "j2735_v2x_msgs/msg/detail/d_minute__struct.hpp"
// Member 'second'
#include "j2735_v2x_msgs/msg/detail/d_second__struct.hpp"
// Member 'offset'
#include "j2735_v2x_msgs/msg/detail/d_offset__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__DDateTime __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__DDateTime __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DDateTime_
{
  using Type = DDateTime_<ContainerAllocator>;

  explicit DDateTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : year(_init),
    month(_init),
    day(_init),
    hour(_init),
    minute(_init),
    second(_init),
    offset(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit DDateTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : year(_alloc, _init),
    month(_alloc, _init),
    day(_alloc, _init),
    hour(_alloc, _init),
    minute(_alloc, _init),
    second(_alloc, _init),
    offset(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint8_t;
  _presence_vector_type presence_vector;
  using _year_type =
    j2735_v2x_msgs::msg::DYear_<ContainerAllocator>;
  _year_type year;
  using _month_type =
    j2735_v2x_msgs::msg::DMonth_<ContainerAllocator>;
  _month_type month;
  using _day_type =
    j2735_v2x_msgs::msg::DDay_<ContainerAllocator>;
  _day_type day;
  using _hour_type =
    j2735_v2x_msgs::msg::DHour_<ContainerAllocator>;
  _hour_type hour;
  using _minute_type =
    j2735_v2x_msgs::msg::DMinute_<ContainerAllocator>;
  _minute_type minute;
  using _second_type =
    j2735_v2x_msgs::msg::DSecond_<ContainerAllocator>;
  _second_type second;
  using _offset_type =
    j2735_v2x_msgs::msg::DOffset_<ContainerAllocator>;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint8_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__year(
    const j2735_v2x_msgs::msg::DYear_<ContainerAllocator> & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__month(
    const j2735_v2x_msgs::msg::DMonth_<ContainerAllocator> & _arg)
  {
    this->month = _arg;
    return *this;
  }
  Type & set__day(
    const j2735_v2x_msgs::msg::DDay_<ContainerAllocator> & _arg)
  {
    this->day = _arg;
    return *this;
  }
  Type & set__hour(
    const j2735_v2x_msgs::msg::DHour_<ContainerAllocator> & _arg)
  {
    this->hour = _arg;
    return *this;
  }
  Type & set__minute(
    const j2735_v2x_msgs::msg::DMinute_<ContainerAllocator> & _arg)
  {
    this->minute = _arg;
    return *this;
  }
  Type & set__second(
    const j2735_v2x_msgs::msg::DSecond_<ContainerAllocator> & _arg)
  {
    this->second = _arg;
    return *this;
  }
  Type & set__offset(
    const j2735_v2x_msgs::msg::DOffset_<ContainerAllocator> & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNSET =
    0u;
  static constexpr uint8_t YEAR =
    1u;
  static constexpr uint8_t MONTH =
    2u;
  static constexpr uint8_t DAY =
    4u;
  static constexpr uint8_t HOUR =
    8u;
  static constexpr uint8_t MINUTE =
    16u;
  static constexpr uint8_t SECOND =
    32u;
  static constexpr uint8_t OFFSET =
    64u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__DDateTime
    std::shared_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__DDateTime
    std::shared_ptr<j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DDateTime_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->year != other.year) {
      return false;
    }
    if (this->month != other.month) {
      return false;
    }
    if (this->day != other.day) {
      return false;
    }
    if (this->hour != other.hour) {
      return false;
    }
    if (this->minute != other.minute) {
      return false;
    }
    if (this->second != other.second) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const DDateTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DDateTime_

// alias to use template instance with default allocator
using DDateTime =
  j2735_v2x_msgs::msg::DDateTime_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::UNSET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::YEAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::MONTH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::DAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::HOUR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::MINUTE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::SECOND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DDateTime_<ContainerAllocator>::OFFSET;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__STRUCT_HPP_
