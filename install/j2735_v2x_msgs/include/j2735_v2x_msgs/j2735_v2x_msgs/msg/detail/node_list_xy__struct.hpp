// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NodeListXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_list_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nodes'
#include "j2735_v2x_msgs/msg/detail/node_set_xy__struct.hpp"
// Member 'computed'
#include "j2735_v2x_msgs/msg/detail/computed_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NodeListXY __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NodeListXY __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeListXY_
{
  using Type = NodeListXY_<ContainerAllocator>;

  explicit NodeListXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodes(_init),
    computed(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  explicit NodeListXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : nodes(_alloc, _init),
    computed(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _nodes_type =
    j2735_v2x_msgs::msg::NodeSetXY_<ContainerAllocator>;
  _nodes_type nodes;
  using _computed_type =
    j2735_v2x_msgs::msg::ComputedLane_<ContainerAllocator>;
  _computed_type computed;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__nodes(
    const j2735_v2x_msgs::msg::NodeSetXY_<ContainerAllocator> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }
  Type & set__computed(
    const j2735_v2x_msgs::msg::ComputedLane_<ContainerAllocator> & _arg)
  {
    this->computed = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NODE_SET_XY =
    0u;
  static constexpr uint8_t COMPUTED_LANE =
    1u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeListXY
    std::shared_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeListXY
    std::shared_ptr<j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeListXY_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    if (this->computed != other.computed) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeListXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeListXY_

// alias to use template instance with default allocator
using NodeListXY =
  j2735_v2x_msgs::msg::NodeListXY_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeListXY_<ContainerAllocator>::NODE_SET_XY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeListXY_<ContainerAllocator>::COMPUTED_LANE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__STRUCT_HPP_
