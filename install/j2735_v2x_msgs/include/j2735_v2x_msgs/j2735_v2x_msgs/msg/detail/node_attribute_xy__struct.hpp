// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXY __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXY __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeAttributeXY_
{
  using Type = NodeAttributeXY_<ContainerAllocator>;

  explicit NodeAttributeXY_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_attribute_xy = 0;
    }
  }

  explicit NodeAttributeXY_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_attribute_xy = 0;
    }
  }

  // field types and members
  using _node_attribute_xy_type =
    uint8_t;
  _node_attribute_xy_type node_attribute_xy;

  // setters for named parameter idiom
  Type & set__node_attribute_xy(
    const uint8_t & _arg)
  {
    this->node_attribute_xy = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RESERVED =
    0u;
  static constexpr uint8_t STOPLINE =
    1u;
  static constexpr uint8_t ROUNDEDCAPSTYLEA =
    2u;
  static constexpr uint8_t ROUNDEDCAPSTYLEB =
    3u;
  static constexpr uint8_t MERGEPOINT =
    4u;
  static constexpr uint8_t DIVERGEPOINT =
    5u;
  static constexpr uint8_t DOWNSTREAMSTOPLINE =
    6u;
  static constexpr uint8_t DOWNSTREAMSTARTNODE =
    7u;
  static constexpr uint8_t CLOSEDTOTRAFFIC =
    8u;
  static constexpr uint8_t SAFEISLAND =
    9u;
  static constexpr uint8_t CURBPRESENTATSTEPOFF =
    10u;
  static constexpr uint8_t HYDRANTPRESENT =
    11u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXY
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXY
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeAttributeXY_ & other) const
  {
    if (this->node_attribute_xy != other.node_attribute_xy) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeAttributeXY_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeAttributeXY_

// alias to use template instance with default allocator
using NodeAttributeXY =
  j2735_v2x_msgs::msg::NodeAttributeXY_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::RESERVED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::STOPLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::ROUNDEDCAPSTYLEA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::ROUNDEDCAPSTYLEB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::MERGEPOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::DIVERGEPOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::DOWNSTREAMSTOPLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::DOWNSTREAMSTARTNODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::CLOSEDTOTRAFFIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::SAFEISLAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::CURBPRESENTATSTEPOFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NodeAttributeXY_<ContainerAllocator>::HYDRANTPRESENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_HPP_
