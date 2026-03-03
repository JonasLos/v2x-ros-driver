// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/Id128b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/id128b.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ID128B__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ID128B__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__Id128b __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__Id128b __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Id128b_
{
  using Type = Id128b_<ContainerAllocator>;

  explicit Id128b_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 16>::iterator, uint8_t>(this->id.begin(), this->id.end(), 0);
    }
  }

  explicit Id128b_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint8_t, 16>::iterator, uint8_t>(this->id.begin(), this->id.end(), 0);
    }
  }

  // field types and members
  using _id_type =
    std::array<uint8_t, 16>;
  _id_type id;

  // setters for named parameter idiom
  Type & set__id(
    const std::array<uint8_t, 16> & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::Id128b_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::Id128b_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__Id128b
    std::shared_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__Id128b
    std::shared_ptr<j2735_v2x_msgs::msg::Id128b_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Id128b_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Id128b_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Id128b_

// alias to use template instance with default allocator
using Id128b =
  j2735_v2x_msgs::msg::Id128b_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ID128B__STRUCT_HPP_
