// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RepeatParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/repeat_params.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RepeatParams __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RepeatParams __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RepeatParams_
{
  using Type = RepeatParams_<ContainerAllocator>;

  explicit RepeatParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
      this->period = 0;
      this->span = 0;
    }
  }

  explicit RepeatParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0;
      this->period = 0;
      this->span = 0;
    }
  }

  // field types and members
  using _offset_type =
    uint16_t;
  _offset_type offset;
  using _period_type =
    uint16_t;
  _period_type period;
  using _span_type =
    uint16_t;
  _span_type span;

  // setters for named parameter idiom
  Type & set__offset(
    const uint16_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__period(
    const uint16_t & _arg)
  {
    this->period = _arg;
    return *this;
  }
  Type & set__span(
    const uint16_t & _arg)
  {
    this->span = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RepeatParams
    std::shared_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RepeatParams
    std::shared_ptr<j2735_v2x_msgs::msg::RepeatParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RepeatParams_ & other) const
  {
    if (this->offset != other.offset) {
      return false;
    }
    if (this->period != other.period) {
      return false;
    }
    if (this->span != other.span) {
      return false;
    }
    return true;
  }
  bool operator!=(const RepeatParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RepeatParams_

// alias to use template instance with default allocator
using RepeatParams =
  j2735_v2x_msgs::msg::RepeatParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__STRUCT_HPP_
