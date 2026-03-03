// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PositionConfidenceSet.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/position_confidence_set.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pos'
#include "j2735_v2x_msgs/msg/detail/position_confidence__struct.hpp"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PositionConfidenceSet __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PositionConfidenceSet __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PositionConfidenceSet_
{
  using Type = PositionConfidenceSet_<ContainerAllocator>;

  explicit PositionConfidenceSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init),
    elevation(_init)
  {
    (void)_init;
  }

  explicit PositionConfidenceSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init),
    elevation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pos_type =
    j2735_v2x_msgs::msg::PositionConfidence_<ContainerAllocator>;
  _pos_type pos;
  using _elevation_type =
    j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator>;
  _elevation_type elevation;

  // setters for named parameter idiom
  Type & set__pos(
    const j2735_v2x_msgs::msg::PositionConfidence_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__elevation(
    const j2735_v2x_msgs::msg::ElevationConfidence_<ContainerAllocator> & _arg)
  {
    this->elevation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PositionConfidenceSet
    std::shared_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PositionConfidenceSet
    std::shared_ptr<j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PositionConfidenceSet_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    return true;
  }
  bool operator!=(const PositionConfidenceSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PositionConfidenceSet_

// alias to use template instance with default allocator
using PositionConfidenceSet =
  j2735_v2x_msgs::msg::PositionConfidenceSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_SET__STRUCT_HPP_
