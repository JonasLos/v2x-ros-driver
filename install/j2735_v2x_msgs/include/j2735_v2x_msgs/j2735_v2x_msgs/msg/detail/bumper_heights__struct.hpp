// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bumper_heights.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'front'
// Member 'rear'
#include "j2735_v2x_msgs/msg/detail/bumper_height__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BumperHeights __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BumperHeights __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BumperHeights_
{
  using Type = BumperHeights_<ContainerAllocator>;

  explicit BumperHeights_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : front(_init),
    rear(_init)
  {
    (void)_init;
  }

  explicit BumperHeights_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : front(_alloc, _init),
    rear(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _front_type =
    j2735_v2x_msgs::msg::BumperHeight_<ContainerAllocator>;
  _front_type front;
  using _rear_type =
    j2735_v2x_msgs::msg::BumperHeight_<ContainerAllocator>;
  _rear_type rear;

  // setters for named parameter idiom
  Type & set__front(
    const j2735_v2x_msgs::msg::BumperHeight_<ContainerAllocator> & _arg)
  {
    this->front = _arg;
    return *this;
  }
  Type & set__rear(
    const j2735_v2x_msgs::msg::BumperHeight_<ContainerAllocator> & _arg)
  {
    this->rear = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BumperHeights
    std::shared_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BumperHeights
    std::shared_ptr<j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BumperHeights_ & other) const
  {
    if (this->front != other.front) {
      return false;
    }
    if (this->rear != other.rear) {
      return false;
    }
    return true;
  }
  bool operator!=(const BumperHeights_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BumperHeights_

// alias to use template instance with default allocator
using BumperHeights =
  j2735_v2x_msgs::msg::BumperHeights_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BUMPER_HEIGHTS__STRUCT_HPP_
