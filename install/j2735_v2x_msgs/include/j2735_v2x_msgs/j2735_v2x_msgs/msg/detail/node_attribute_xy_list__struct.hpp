// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXYList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_xy_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'node_attribute_xy_list'
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXYList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXYList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeAttributeXYList_
{
  using Type = NodeAttributeXYList_<ContainerAllocator>;

  explicit NodeAttributeXYList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NodeAttributeXYList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _node_attribute_xy_list_type =
    std::vector<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>>;
  _node_attribute_xy_list_type node_attribute_xy_list;

  // setters for named parameter idiom
  Type & set__node_attribute_xy_list(
    const std::vector<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::NodeAttributeXY_<ContainerAllocator>>> & _arg)
  {
    this->node_attribute_xy_list = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXYList
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NodeAttributeXYList
    std::shared_ptr<j2735_v2x_msgs::msg::NodeAttributeXYList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeAttributeXYList_ & other) const
  {
    if (this->node_attribute_xy_list != other.node_attribute_xy_list) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeAttributeXYList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeAttributeXYList_

// alias to use template instance with default allocator
using NodeAttributeXYList =
  j2735_v2x_msgs::msg::NodeAttributeXYList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY_LIST__STRUCT_HPP_
