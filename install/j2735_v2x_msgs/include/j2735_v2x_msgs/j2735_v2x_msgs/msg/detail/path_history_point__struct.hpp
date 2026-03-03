// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history_point.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lat_offset'
// Member 'lon_offset'
#include "j2735_v2x_msgs/msg/detail/offset_llb18__struct.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b12__struct.hpp"
// Member 'time_offset'
#include "j2735_v2x_msgs/msg/detail/time_offset__struct.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/speed__struct.hpp"
// Member 'pos_accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/coarse_heading__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__PathHistoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__PathHistoryPoint __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathHistoryPoint_
{
  using Type = PathHistoryPoint_<ContainerAllocator>;

  explicit PathHistoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lat_offset(_init),
    lon_offset(_init),
    elevation_offset(_init),
    time_offset(_init),
    speed(_init),
    pos_accuracy(_init),
    heading(_init)
  {
    (void)_init;
  }

  explicit PathHistoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lat_offset(_alloc, _init),
    lon_offset(_alloc, _init),
    elevation_offset(_alloc, _init),
    time_offset(_alloc, _init),
    speed(_alloc, _init),
    pos_accuracy(_alloc, _init),
    heading(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _lat_offset_type =
    j2735_v2x_msgs::msg::OffsetLLB18_<ContainerAllocator>;
  _lat_offset_type lat_offset;
  using _lon_offset_type =
    j2735_v2x_msgs::msg::OffsetLLB18_<ContainerAllocator>;
  _lon_offset_type lon_offset;
  using _elevation_offset_type =
    j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator>;
  _elevation_offset_type elevation_offset;
  using _time_offset_type =
    j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>;
  _time_offset_type time_offset;
  using _speed_type =
    j2735_v2x_msgs::msg::Speed_<ContainerAllocator>;
  _speed_type speed;
  using _pos_accuracy_type =
    j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>;
  _pos_accuracy_type pos_accuracy;
  using _heading_type =
    j2735_v2x_msgs::msg::CoarseHeading_<ContainerAllocator>;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__lat_offset(
    const j2735_v2x_msgs::msg::OffsetLLB18_<ContainerAllocator> & _arg)
  {
    this->lat_offset = _arg;
    return *this;
  }
  Type & set__lon_offset(
    const j2735_v2x_msgs::msg::OffsetLLB18_<ContainerAllocator> & _arg)
  {
    this->lon_offset = _arg;
    return *this;
  }
  Type & set__elevation_offset(
    const j2735_v2x_msgs::msg::VertOffsetB12_<ContainerAllocator> & _arg)
  {
    this->elevation_offset = _arg;
    return *this;
  }
  Type & set__time_offset(
    const j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> & _arg)
  {
    this->time_offset = _arg;
    return *this;
  }
  Type & set__speed(
    const j2735_v2x_msgs::msg::Speed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__pos_accuracy(
    const j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->pos_accuracy = _arg;
    return *this;
  }
  Type & set__heading(
    const j2735_v2x_msgs::msg::CoarseHeading_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__PathHistoryPoint
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__PathHistoryPoint
    std::shared_ptr<j2735_v2x_msgs::msg::PathHistoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathHistoryPoint_ & other) const
  {
    if (this->lat_offset != other.lat_offset) {
      return false;
    }
    if (this->lon_offset != other.lon_offset) {
      return false;
    }
    if (this->elevation_offset != other.elevation_offset) {
      return false;
    }
    if (this->time_offset != other.time_offset) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->pos_accuracy != other.pos_accuracy) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathHistoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathHistoryPoint_

// alias to use template instance with default allocator
using PathHistoryPoint =
  j2735_v2x_msgs::msg::PathHistoryPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__STRUCT_HPP_
