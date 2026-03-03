// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/time_change_details.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TimeChangeDetails __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TimeChangeDetails __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TimeChangeDetails_
{
  using Type = TimeChangeDetails_<ContainerAllocator>;

  explicit TimeChangeDetails_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = 0;
      this->start_time_exists = false;
      this->min_end_time = 0;
      this->max_end_time = 0;
      this->max_end_time_exists = false;
      this->likely_time = 0;
      this->likely_time_exists = false;
      this->confidence = 0;
      this->confidence_exists = false;
      this->next_time = 0;
      this->next_time_exists = false;
    }
  }

  explicit TimeChangeDetails_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = 0;
      this->start_time_exists = false;
      this->min_end_time = 0;
      this->max_end_time = 0;
      this->max_end_time_exists = false;
      this->likely_time = 0;
      this->likely_time_exists = false;
      this->confidence = 0;
      this->confidence_exists = false;
      this->next_time = 0;
      this->next_time_exists = false;
    }
  }

  // field types and members
  using _start_time_type =
    uint16_t;
  _start_time_type start_time;
  using _start_time_exists_type =
    bool;
  _start_time_exists_type start_time_exists;
  using _min_end_time_type =
    uint16_t;
  _min_end_time_type min_end_time;
  using _max_end_time_type =
    uint16_t;
  _max_end_time_type max_end_time;
  using _max_end_time_exists_type =
    bool;
  _max_end_time_exists_type max_end_time_exists;
  using _likely_time_type =
    uint16_t;
  _likely_time_type likely_time;
  using _likely_time_exists_type =
    bool;
  _likely_time_exists_type likely_time_exists;
  using _confidence_type =
    uint8_t;
  _confidence_type confidence;
  using _confidence_exists_type =
    bool;
  _confidence_exists_type confidence_exists;
  using _next_time_type =
    uint16_t;
  _next_time_type next_time;
  using _next_time_exists_type =
    bool;
  _next_time_exists_type next_time_exists;

  // setters for named parameter idiom
  Type & set__start_time(
    const uint16_t & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__start_time_exists(
    const bool & _arg)
  {
    this->start_time_exists = _arg;
    return *this;
  }
  Type & set__min_end_time(
    const uint16_t & _arg)
  {
    this->min_end_time = _arg;
    return *this;
  }
  Type & set__max_end_time(
    const uint16_t & _arg)
  {
    this->max_end_time = _arg;
    return *this;
  }
  Type & set__max_end_time_exists(
    const bool & _arg)
  {
    this->max_end_time_exists = _arg;
    return *this;
  }
  Type & set__likely_time(
    const uint16_t & _arg)
  {
    this->likely_time = _arg;
    return *this;
  }
  Type & set__likely_time_exists(
    const bool & _arg)
  {
    this->likely_time_exists = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint8_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__confidence_exists(
    const bool & _arg)
  {
    this->confidence_exists = _arg;
    return *this;
  }
  Type & set__next_time(
    const uint16_t & _arg)
  {
    this->next_time = _arg;
    return *this;
  }
  Type & set__next_time_exists(
    const bool & _arg)
  {
    this->next_time_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TimeChangeDetails
    std::shared_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TimeChangeDetails
    std::shared_ptr<j2735_v2x_msgs::msg::TimeChangeDetails_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TimeChangeDetails_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->start_time_exists != other.start_time_exists) {
      return false;
    }
    if (this->min_end_time != other.min_end_time) {
      return false;
    }
    if (this->max_end_time != other.max_end_time) {
      return false;
    }
    if (this->max_end_time_exists != other.max_end_time_exists) {
      return false;
    }
    if (this->likely_time != other.likely_time) {
      return false;
    }
    if (this->likely_time_exists != other.likely_time_exists) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->confidence_exists != other.confidence_exists) {
      return false;
    }
    if (this->next_time != other.next_time) {
      return false;
    }
    if (this->next_time_exists != other.next_time_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const TimeChangeDetails_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TimeChangeDetails_

// alias to use template instance with default allocator
using TimeChangeDetails =
  j2735_v2x_msgs::msg::TimeChangeDetails_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_HPP_
