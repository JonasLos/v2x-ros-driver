// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBarrier.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_barrier.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBarrier __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBarrier __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneAttributesBarrier_
{
  using Type = LaneAttributesBarrier_<ContainerAllocator>;

  explicit LaneAttributesBarrier_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_attributes_barrier = 0;
    }
  }

  explicit LaneAttributesBarrier_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_attributes_barrier = 0;
    }
  }

  // field types and members
  using _lane_attributes_barrier_type =
    uint16_t;
  _lane_attributes_barrier_type lane_attributes_barrier;

  // setters for named parameter idiom
  Type & set__lane_attributes_barrier(
    const uint16_t & _arg)
  {
    this->lane_attributes_barrier = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBarrier
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBarrier
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBarrier_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneAttributesBarrier_ & other) const
  {
    if (this->lane_attributes_barrier != other.lane_attributes_barrier) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneAttributesBarrier_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneAttributesBarrier_

// alias to use template instance with default allocator
using LaneAttributesBarrier =
  j2735_v2x_msgs::msg::LaneAttributesBarrier_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BARRIER__STRUCT_HPP_
