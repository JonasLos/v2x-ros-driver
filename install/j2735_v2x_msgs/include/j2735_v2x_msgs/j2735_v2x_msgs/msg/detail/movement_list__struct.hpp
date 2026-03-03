// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/MovementList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'movement_list'
#include "j2735_v2x_msgs/msg/detail/movement_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__MovementList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__MovementList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MovementList_
{
  using Type = MovementList_<ContainerAllocator>;

  explicit MovementList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit MovementList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _movement_list_type =
    std::vector<j2735_v2x_msgs::msg::MovementState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::MovementState_<ContainerAllocator>>>;
  _movement_list_type movement_list;

  // setters for named parameter idiom
  Type & set__movement_list(
    const std::vector<j2735_v2x_msgs::msg::MovementState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::MovementState_<ContainerAllocator>>> & _arg)
  {
    this->movement_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::MovementList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::MovementList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MovementList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MovementList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__MovementList
    std::shared_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__MovementList
    std::shared_ptr<j2735_v2x_msgs::msg::MovementList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MovementList_ & other) const
  {
    if (this->movement_list != other.movement_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const MovementList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MovementList_

// alias to use template instance with default allocator
using MovementList =
  j2735_v2x_msgs::msg::MovementList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__STRUCT_HPP_
