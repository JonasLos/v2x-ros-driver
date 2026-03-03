// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/priority.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Priority __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Priority __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Priority_
{
  using Type = Priority_<ContainerAllocator>;

  explicit Priority_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 1>::iterator, uint8_t>(this->priority.begin(), this->priority.end(), 0);
    }
  }

  explicit Priority_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : priority(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 1>::iterator, uint8_t>(this->priority.begin(), this->priority.end(), 0);
    }
  }

  // field types and members
  using _priority_type =
    std::array<uint8_t, 1>;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__priority(
    const std::array<uint8_t, 1> & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Priority_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Priority_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Priority_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Priority_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Priority
    std::shared_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Priority
    std::shared_ptr<j2735_v2x_msgs::msg::Priority_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Priority_ & other) const
  {
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const Priority_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Priority_

// alias to use template instance with default allocator
using Priority =
  j2735_v2x_msgs::msg::Priority_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__STRUCT_HPP_
