// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/generic_lane.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lane_attributes'
#include "j2735_v2x_msgs/msg/detail/lane_attributes__struct.hpp"
// Member 'maneuvers'
#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__struct.hpp"
// Member 'node_list'
#include "j2735_v2x_msgs/msg/detail/node_list_xy__struct.hpp"
// Member 'connects_to'
#include "j2735_v2x_msgs/msg/detail/connects_to_list__struct.hpp"
// Member 'overlay_lane_list'
#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__GenericLane __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__GenericLane __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GenericLane_
{
  using Type = GenericLane_<ContainerAllocator>;

  explicit GenericLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_attributes(_init),
    maneuvers(_init),
    node_list(_init),
    connects_to(_init),
    overlay_lane_list(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0;
      this->name = "";
      this->name_exists = false;
      this->ingress_approach = 0;
      this->ingress_approach_exists = false;
      this->egress_approach = 0;
      this->egress_approach_exists = false;
      this->maneuvers_exists = false;
      this->connects_to_exists = false;
      this->overlay_lane_list_exists = false;
    }
  }

  explicit GenericLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    lane_attributes(_alloc, _init),
    maneuvers(_alloc, _init),
    node_list(_alloc, _init),
    connects_to(_alloc, _init),
    overlay_lane_list(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_id = 0;
      this->name = "";
      this->name_exists = false;
      this->ingress_approach = 0;
      this->ingress_approach_exists = false;
      this->egress_approach = 0;
      this->egress_approach_exists = false;
      this->maneuvers_exists = false;
      this->connects_to_exists = false;
      this->overlay_lane_list_exists = false;
    }
  }

  // field types and members
  using _lane_id_type =
    uint8_t;
  _lane_id_type lane_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _name_exists_type =
    bool;
  _name_exists_type name_exists;
  using _ingress_approach_type =
    uint8_t;
  _ingress_approach_type ingress_approach;
  using _ingress_approach_exists_type =
    bool;
  _ingress_approach_exists_type ingress_approach_exists;
  using _egress_approach_type =
    uint8_t;
  _egress_approach_type egress_approach;
  using _egress_approach_exists_type =
    bool;
  _egress_approach_exists_type egress_approach_exists;
  using _lane_attributes_type =
    j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator>;
  _lane_attributes_type lane_attributes;
  using _maneuvers_type =
    j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator>;
  _maneuvers_type maneuvers;
  using _maneuvers_exists_type =
    bool;
  _maneuvers_exists_type maneuvers_exists;
  using _node_list_type =
    j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator>;
  _node_list_type node_list;
  using _connects_to_type =
    j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator>;
  _connects_to_type connects_to;
  using _connects_to_exists_type =
    bool;
  _connects_to_exists_type connects_to_exists;
  using _overlay_lane_list_type =
    j2735_v2x_msgs::msg::OverlayLaneList_<ContainerAllocator>;
  _overlay_lane_list_type overlay_lane_list;
  using _overlay_lane_list_exists_type =
    bool;
  _overlay_lane_list_exists_type overlay_lane_list_exists;

  // setters for named parameter idiom
  Type & set__lane_id(
    const uint8_t & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
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
  Type & set__ingress_approach(
    const uint8_t & _arg)
  {
    this->ingress_approach = _arg;
    return *this;
  }
  Type & set__ingress_approach_exists(
    const bool & _arg)
  {
    this->ingress_approach_exists = _arg;
    return *this;
  }
  Type & set__egress_approach(
    const uint8_t & _arg)
  {
    this->egress_approach = _arg;
    return *this;
  }
  Type & set__egress_approach_exists(
    const bool & _arg)
  {
    this->egress_approach_exists = _arg;
    return *this;
  }
  Type & set__lane_attributes(
    const j2735_v2x_msgs::msg::LaneAttributes_<ContainerAllocator> & _arg)
  {
    this->lane_attributes = _arg;
    return *this;
  }
  Type & set__maneuvers(
    const j2735_v2x_msgs::msg::AllowedManeuvers_<ContainerAllocator> & _arg)
  {
    this->maneuvers = _arg;
    return *this;
  }
  Type & set__maneuvers_exists(
    const bool & _arg)
  {
    this->maneuvers_exists = _arg;
    return *this;
  }
  Type & set__node_list(
    const j2735_v2x_msgs::msg::NodeListXY_<ContainerAllocator> & _arg)
  {
    this->node_list = _arg;
    return *this;
  }
  Type & set__connects_to(
    const j2735_v2x_msgs::msg::ConnectsToList_<ContainerAllocator> & _arg)
  {
    this->connects_to = _arg;
    return *this;
  }
  Type & set__connects_to_exists(
    const bool & _arg)
  {
    this->connects_to_exists = _arg;
    return *this;
  }
  Type & set__overlay_lane_list(
    const j2735_v2x_msgs::msg::OverlayLaneList_<ContainerAllocator> & _arg)
  {
    this->overlay_lane_list = _arg;
    return *this;
  }
  Type & set__overlay_lane_list_exists(
    const bool & _arg)
  {
    this->overlay_lane_list_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__GenericLane
    std::shared_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__GenericLane
    std::shared_ptr<j2735_v2x_msgs::msg::GenericLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GenericLane_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->name_exists != other.name_exists) {
      return false;
    }
    if (this->ingress_approach != other.ingress_approach) {
      return false;
    }
    if (this->ingress_approach_exists != other.ingress_approach_exists) {
      return false;
    }
    if (this->egress_approach != other.egress_approach) {
      return false;
    }
    if (this->egress_approach_exists != other.egress_approach_exists) {
      return false;
    }
    if (this->lane_attributes != other.lane_attributes) {
      return false;
    }
    if (this->maneuvers != other.maneuvers) {
      return false;
    }
    if (this->maneuvers_exists != other.maneuvers_exists) {
      return false;
    }
    if (this->node_list != other.node_list) {
      return false;
    }
    if (this->connects_to != other.connects_to) {
      return false;
    }
    if (this->connects_to_exists != other.connects_to_exists) {
      return false;
    }
    if (this->overlay_lane_list != other.overlay_lane_list) {
      return false;
    }
    if (this->overlay_lane_list_exists != other.overlay_lane_list_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const GenericLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GenericLane_

// alias to use template instance with default allocator
using GenericLane =
  j2735_v2x_msgs::msg::GenericLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_HPP_
