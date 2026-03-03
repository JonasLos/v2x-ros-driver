// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PivotingAllowed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/pivoting_allowed.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PivotingAllowed __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PivotingAllowed __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PivotingAllowed_
{
  using Type = PivotingAllowed_<ContainerAllocator>;

  explicit PivotingAllowed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pivoting_allowed = false;
    }
  }

  explicit PivotingAllowed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pivoting_allowed = false;
    }
  }

  // field types and members
  using _pivoting_allowed_type =
    bool;
  _pivoting_allowed_type pivoting_allowed;

  // setters for named parameter idiom
  Type & set__pivoting_allowed(
    const bool & _arg)
  {
    this->pivoting_allowed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PivotingAllowed
    std::shared_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PivotingAllowed
    std::shared_ptr<j2735_v2x_msgs::msg::PivotingAllowed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PivotingAllowed_ & other) const
  {
    if (this->pivoting_allowed != other.pivoting_allowed) {
      return false;
    }
    return true;
  }
  bool operator!=(const PivotingAllowed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PivotingAllowed_

// alias to use template instance with default allocator
using PivotingAllowed =
  j2735_v2x_msgs::msg::PivotingAllowed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__STRUCT_HPP_
