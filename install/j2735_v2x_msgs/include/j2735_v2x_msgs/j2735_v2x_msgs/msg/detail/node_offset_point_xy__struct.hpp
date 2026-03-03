// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_offset_point_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'node_xy1'
#include "j2735_v2x_msgs/msg/detail/node_xy20b__struct.hpp"
// Member 'node_xy2'
#include "j2735_v2x_msgs/msg/detail/node_xy22b__struct.hpp"
// Member 'node_xy3'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__struct.hpp"
// Member 'node_xy4'
#include "j2735_v2x_msgs/msg/detail/node_xy26b__struct.hpp"
// Member 'node_xy5'
#include "j2735_v2x_msgs/msg/detail/node_xy28b__struct.hpp"
// Member 'node_xy6'
#include "j2735_v2x_msgs/msg/detail/node_xy32b__struct.hpp"
// Member 'node_latlon'
#include "j2735_v2x_msgs/msg/detail/node_l_lm_d64b__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NodeOffsetPointXY __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NodeOffsetPointXY __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeOffsetPointXY_
{
  using Type = NodeOffsetPointXY_<ContainerAllocator>;

  explicit NodeOffsetPointXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_xy1(_init),
    node_xy2(_init),
    node_xy3(_init),
    node_xy4(_init),
    node_xy5(_init),
    node_xy6(_init),
    node_latlon(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
    }
  }

  explicit NodeOffsetPointXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_xy1(_alloc, _init),
    node_xy2(_alloc, _init),
    node_xy3(_alloc, _init),
    node_xy4(_alloc, _init),
    node_xy5(_alloc, _init),
    node_xy6(_alloc, _init),
    node_latlon(_alloc, _init)
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
  using _node_xy1_type =
    j2735_v2x_msgs::msg::NodeXY20b_<ContainerAllocator>;
  _node_xy1_type node_xy1;
  using _node_xy2_type =
    j2735_v2x_msgs::msg::NodeXY22b_<ContainerAllocator>;
  _node_xy2_type node_xy2;
  using _node_xy3_type =
    j2735_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>;
  _node_xy3_type node_xy3;
  using _node_xy4_type =
    j2735_v2x_msgs::msg::NodeXY26b_<ContainerAllocator>;
  _node_xy4_type node_xy4;
  using _node_xy5_type =
    j2735_v2x_msgs::msg::NodeXY28b_<ContainerAllocator>;
  _node_xy5_type node_xy5;
  using _node_xy6_type =
    j2735_v2x_msgs::msg::NodeXY32b_<ContainerAllocator>;
  _node_xy6_type node_xy6;
  using _node_latlon_type =
    j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator>;
  _node_latlon_type node_latlon;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__node_xy1(
    const j2735_v2x_msgs::msg::NodeXY20b_<ContainerAllocator> & _arg)
  {
    this->node_xy1 = _arg;
    return *this;
  }
  Type & set__node_xy2(
    const j2735_v2x_msgs::msg::NodeXY22b_<ContainerAllocator> & _arg)
  {
    this->node_xy2 = _arg;
    return *this;
  }
  Type & set__node_xy3(
    const j2735_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> & _arg)
  {
    this->node_xy3 = _arg;
    return *this;
  }
  Type & set__node_xy4(
    const j2735_v2x_msgs::msg::NodeXY26b_<ContainerAllocator> & _arg)
  {
    this->node_xy4 = _arg;
    return *this;
  }
  Type & set__node_xy5(
    const j2735_v2x_msgs::msg::NodeXY28b_<ContainerAllocator> & _arg)
  {
    this->node_xy5 = _arg;
    return *this;
  }
  Type & set__node_xy6(
    const j2735_v2x_msgs::msg::NodeXY32b_<ContainerAllocator> & _arg)
  {
    this->node_xy6 = _arg;
    return *this;
  }
  Type & set__node_latlon(
    const j2735_v2x_msgs::msg::NodeLLmD64b_<ContainerAllocator> & _arg)
  {
    this->node_latlon = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NODE_XY1 =
    0u;
  static constexpr uint8_t NODE_XY2 =
    1u;
  static constexpr uint8_t NODE_XY3 =
    2u;
  static constexpr uint8_t NODE_XY4 =
    3u;
  static constexpr uint8_t NODE_XY5 =
    4u;
  static constexpr uint8_t NODE_XY6 =
    5u;
  static constexpr uint8_t NODE_LATLON =
    6u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeOffsetPointXY
    std::shared_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeOffsetPointXY
    std::shared_ptr<j2735_v2x_msgs::msg::NodeOffsetPointXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeOffsetPointXY_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->node_xy1 != other.node_xy1) {
      return false;
    }
    if (this->node_xy2 != other.node_xy2) {
      return false;
    }
    if (this->node_xy3 != other.node_xy3) {
      return false;
    }
    if (this->node_xy4 != other.node_xy4) {
      return false;
    }
    if (this->node_xy5 != other.node_xy5) {
      return false;
    }
    if (this->node_xy6 != other.node_xy6) {
      return false;
    }
    if (this->node_latlon != other.node_latlon) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeOffsetPointXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeOffsetPointXY_

// alias to use template instance with default allocator
using NodeOffsetPointXY =
  j2735_v2x_msgs::msg::NodeOffsetPointXY_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY1;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY2;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY3;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY4;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY5;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_XY6;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeOffsetPointXY_<ContainerAllocator>::NODE_LATLON;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__STRUCT_HPP_
