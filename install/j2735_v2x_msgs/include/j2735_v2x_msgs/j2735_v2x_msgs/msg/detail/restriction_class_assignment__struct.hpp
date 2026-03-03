// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RestrictionClassAssignment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/restriction_class_assignment.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionClassAssignment __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RestrictionClassAssignment __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestrictionClassAssignment_
{
  using Type = RestrictionClassAssignment_<ContainerAllocator>;

  explicit RestrictionClassAssignment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  explicit RestrictionClassAssignment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionClassAssignment
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RestrictionClassAssignment
    std::shared_ptr<j2735_v2x_msgs::msg::RestrictionClassAssignment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestrictionClassAssignment_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestrictionClassAssignment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestrictionClassAssignment_

// alias to use template instance with default allocator
using RestrictionClassAssignment =
  j2735_v2x_msgs::msg::RestrictionClassAssignment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_CLASS_ASSIGNMENT__STRUCT_HPP_
