// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RoadSegment.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_segment.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__struct.hpp"
// Member 'ref_point'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.hpp"
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.hpp"
// Member 'road_lane_set'
#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RoadSegment __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RoadSegment __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadSegment_
{
  using Type = RoadSegment_<ContainerAllocator>;

  explicit RoadSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    ref_point(_init),
    speed_limits(_init),
    road_lane_set(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->lane_width = 0;
      this->lane_width_exists = false;
      this->speed_limits_exists = false;
    }
  }

  explicit RoadSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    ref_point(_alloc, _init),
    speed_limits(_alloc, _init),
    road_lane_set(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->lane_width = 0;
      this->lane_width_exists = false;
      this->speed_limits_exists = false;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _name_exists_type =
    bool;
  _name_exists_type name_exists;
  using _id_type =
    j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>;
  _id_type id;
  using _revision_type =
    uint8_t;
  _revision_type revision;
  using _ref_point_type =
    j2735_v2x_msgs::msg::Position3D_<ContainerAllocator>;
  _ref_point_type ref_point;
  using _lane_width_type =
    uint16_t;
  _lane_width_type lane_width;
  using _lane_width_exists_type =
    bool;
  _lane_width_exists_type lane_width_exists;
  using _speed_limits_type =
    j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>;
  _speed_limits_type speed_limits;
  using _speed_limits_exists_type =
    bool;
  _speed_limits_exists_type speed_limits_exists;
  using _road_lane_set_type =
    j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator>;
  _road_lane_set_type road_lane_set;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__name_exists(
    const bool & _arg)
  {
    this->name_exists = _arg;
    return *this;
  }
  Type & set__id(
    const j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__revision(
    const uint8_t & _arg)
  {
    this->revision = _arg;
    return *this;
  }
  Type & set__ref_point(
    const j2735_v2x_msgs::msg::Position3D_<ContainerAllocator> & _arg)
  {
    this->ref_point = _arg;
    return *this;
  }
  Type & set__lane_width(
    const uint16_t & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__lane_width_exists(
    const bool & _arg)
  {
    this->lane_width_exists = _arg;
    return *this;
  }
  Type & set__speed_limits(
    const j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }
  Type & set__speed_limits_exists(
    const bool & _arg)
  {
    this->speed_limits_exists = _arg;
    return *this;
  }
  Type & set__road_lane_set(
    const j2735_v2x_msgs::msg::RoadLaneSetList_<ContainerAllocator> & _arg)
  {
    this->road_lane_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RoadSegment
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RoadSegment
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadSegment_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->name_exists != other.name_exists) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->revision != other.revision) {
      return false;
    }
    if (this->ref_point != other.ref_point) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->lane_width_exists != other.lane_width_exists) {
      return false;
    }
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    if (this->speed_limits_exists != other.speed_limits_exists) {
      return false;
    }
    if (this->road_lane_set != other.road_lane_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadSegment_

// alias to use template instance with default allocator
using RoadSegment =
  j2735_v2x_msgs::msg::RoadSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT__STRUCT_HPP_
