// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributes.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'directional_use'
#include "j2735_v2x_msgs/msg/detail/lane_direction__struct.hpp"
// Member 'shared_with'
#include "j2735_v2x_msgs/msg/detail/lane_sharing__struct.hpp"
// Member 'lane_type'
#include "j2735_v2x_msgs/msg/detail/lane_type_attributes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributes __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributes __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneAttributes_
{
  using Type = LaneAttributes_<ContainerAllocator>;

  explicit LaneAttributes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : directional_use(_init),
    shared_with(_init),
    lane_type(_init)
  {
    (void)_init;
  }

  explicit LaneAttributes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : directional_use(_alloc, _init),
    shared_with(_alloc, _init),
    lane_type(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _directional_use_type =
    j2735_v2x_msgs::msg::LaneDirection_<ContainerAllocator>;
  _directional_use_type directional_use;
  using _shared_with_type =
    j2735_v2x_msgs::msg::LaneSharing_<ContainerAllocator>;
  _shared_with_type shared_with;
  using _lane_type_type =
    j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator>;
  _lane_type_type lane_type;

  // setters for named parameter idiom
  Type & set__directional_use(
    const j2735_v2x_msgs::msg::LaneDirection_<ContainerAllocator> & _arg)
  {
    this->directional_use = _arg;
    return *this;
  }
  Type & set__shared_with(
    const j2735_v2x_msgs::msg::LaneSharing_<ContainerAllocator> & _arg)
  {
    this->shared_with = _arg;
    return *this;
  }
  Type & set__lane_type(
    const j2735_v2x_msgs::msg::LaneTypeAttributes_<ContainerAllocator> & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributes
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributes
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneAttributes_ & other) const
  {
    if (this->directional_use != other.directional_use) {
      return false;
    }
    if (this->shared_with != other.shared_with) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneAttributes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneAttributes_

// alias to use template instance with default allocator
using LaneAttributes =
  j2735_v2x_msgs::msg::LaneAttributes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES__STRUCT_HPP_
