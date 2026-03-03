// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBike.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_bike.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBike __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBike __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneAttributesBike_
{
  using Type = LaneAttributesBike_<ContainerAllocator>;

  explicit LaneAttributesBike_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_attributes_bike = 0;
    }
  }

  explicit LaneAttributesBike_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_attributes_bike = 0;
    }
  }

  // field types and members
  using _lane_attributes_bike_type =
    uint16_t;
  _lane_attributes_bike_type lane_attributes_bike;

  // setters for named parameter idiom
  Type & set__lane_attributes_bike(
    const uint16_t & _arg)
  {
    this->lane_attributes_bike = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBike
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneAttributesBike
    std::shared_ptr<j2735_v2x_msgs::msg::LaneAttributesBike_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneAttributesBike_ & other) const
  {
    if (this->lane_attributes_bike != other.lane_attributes_bike) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneAttributesBike_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneAttributesBike_

// alias to use template instance with default allocator
using LaneAttributesBike =
  j2735_v2x_msgs::msg::LaneAttributesBike_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__STRUCT_HPP_
