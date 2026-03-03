// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connecting_lane.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'maneuver'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__ConnectingLane __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__ConnectingLane __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConnectingLane_
{
  using Type = ConnectingLane_<ContainerAllocator>;

  explicit ConnectingLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane = 0;
      this->maneuver_exists = false;
    }
  }

  explicit ConnectingLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : maneuver(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane = 0;
      this->maneuver_exists = false;
    }
  }

  // field types and members
  using _lane_type =
    uint16_t;
  _lane_type lane;
  using _maneuver_type =
    j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>;
  _maneuver_type maneuver;
  using _maneuver_exists_type =
    bool;
  _maneuver_exists_type maneuver_exists;

  // setters for named parameter idiom
  Type & set__lane(
    const uint16_t & _arg)
  {
    this->lane = _arg;
    return *this;
  }
  Type & set__maneuver(
    const j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> & _arg)
  {
    this->maneuver = _arg;
    return *this;
  }
  Type & set__maneuver_exists(
    const bool & _arg)
  {
    this->maneuver_exists = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t LANE_UNAVAILABLE =
    0u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__ConnectingLane
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__ConnectingLane
    std::shared_ptr<j2735_v2x_msgs::msg::ConnectingLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConnectingLane_ & other) const
  {
    if (this->lane != other.lane) {
      return false;
    }
    if (this->maneuver != other.maneuver) {
      return false;
    }
    if (this->maneuver_exists != other.maneuver_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConnectingLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConnectingLane_

// alias to use template instance with default allocator
using ConnectingLane =
  j2735_v2x_msgs::msg::ConnectingLane_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t ConnectingLane_<ContainerAllocator>::LANE_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__STRUCT_HPP_
