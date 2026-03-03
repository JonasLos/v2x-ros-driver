// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SegmentAttributeXYList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/segment_attribute_xy_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'segment_attribute_xy'
#include "j2735_v2x_msgs/msg/detail/segment_attribute_xy__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXYList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXYList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SegmentAttributeXYList_
{
  using Type = SegmentAttributeXYList_<ContainerAllocator>;

  explicit SegmentAttributeXYList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SegmentAttributeXYList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _segment_attribute_xy_type =
    std::vector<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>>;
  _segment_attribute_xy_type segment_attribute_xy;

  // setters for named parameter idiom
  Type & set__segment_attribute_xy(
    const std::vector<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::SegmentAttributeXY_<ContainerAllocator>>> & _arg)
  {
    this->segment_attribute_xy = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXYList
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SegmentAttributeXYList
    std::shared_ptr<j2735_v2x_msgs::msg::SegmentAttributeXYList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SegmentAttributeXYList_ & other) const
  {
    if (this->segment_attribute_xy != other.segment_attribute_xy) {
      return false;
    }
    return true;
  }
  bool operator!=(const SegmentAttributeXYList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SegmentAttributeXYList_

// alias to use template instance with default allocator
using SegmentAttributeXYList =
  j2735_v2x_msgs::msg::SegmentAttributeXYList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SEGMENT_ATTRIBUTE_XY_LIST__STRUCT_HPP_
