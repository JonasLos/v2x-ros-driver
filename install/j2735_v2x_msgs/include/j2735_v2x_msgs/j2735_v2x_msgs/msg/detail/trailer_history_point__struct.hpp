// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_history_point.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pivot_angle'
#include "j2735_v2x_msgs/msg/detail/angle__struct.hpp"
// Member 'time_offset'
#include "j2735_v2x_msgs/msg/detail/time_offset__struct.hpp"
// Member 'position_offset'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__struct.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__struct.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/coarse_heading__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerHistoryPoint __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerHistoryPoint __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrailerHistoryPoint_
{
  using Type = TrailerHistoryPoint_<ContainerAllocator>;

  explicit TrailerHistoryPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pivot_angle(_init),
    time_offset(_init),
    position_offset(_init),
    elevation_offset(_init),
    heading(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit TrailerHistoryPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pivot_angle(_alloc, _init),
    time_offset(_alloc, _init),
    position_offset(_alloc, _init),
    elevation_offset(_alloc, _init),
    heading(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _pivot_angle_type =
    j2735_v2x_msgs::msg::Angle_<ContainerAllocator>;
  _pivot_angle_type pivot_angle;
  using _time_offset_type =
    j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator>;
  _time_offset_type time_offset;
  using _position_offset_type =
    j2735_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>;
  _position_offset_type position_offset;
  using _elevation_offset_type =
    j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>;
  _elevation_offset_type elevation_offset;
  using _heading_type =
    j2735_v2x_msgs::msg::CoarseHeading_<ContainerAllocator>;
  _heading_type heading;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__pivot_angle(
    const j2735_v2x_msgs::msg::Angle_<ContainerAllocator> & _arg)
  {
    this->pivot_angle = _arg;
    return *this;
  }
  Type & set__time_offset(
    const j2735_v2x_msgs::msg::TimeOffset_<ContainerAllocator> & _arg)
  {
    this->time_offset = _arg;
    return *this;
  }
  Type & set__position_offset(
    const j2735_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> & _arg)
  {
    this->position_offset = _arg;
    return *this;
  }
  Type & set__elevation_offset(
    const j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> & _arg)
  {
    this->elevation_offset = _arg;
    return *this;
  }
  Type & set__heading(
    const j2735_v2x_msgs::msg::CoarseHeading_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_ELEVATION_OFFSET =
    1u;
  static constexpr uint16_t HAS_HEADING =
    2u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerHistoryPoint
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerHistoryPoint
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerHistoryPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrailerHistoryPoint_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->pivot_angle != other.pivot_angle) {
      return false;
    }
    if (this->time_offset != other.time_offset) {
      return false;
    }
    if (this->position_offset != other.position_offset) {
      return false;
    }
    if (this->elevation_offset != other.elevation_offset) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrailerHistoryPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrailerHistoryPoint_

// alias to use template instance with default allocator
using TrailerHistoryPoint =
  j2735_v2x_msgs::msg::TrailerHistoryPoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TrailerHistoryPoint_<ContainerAllocator>::HAS_ELEVATION_OFFSET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t TrailerHistoryPoint_<ContainerAllocator>::HAS_HEADING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__STRUCT_HPP_
