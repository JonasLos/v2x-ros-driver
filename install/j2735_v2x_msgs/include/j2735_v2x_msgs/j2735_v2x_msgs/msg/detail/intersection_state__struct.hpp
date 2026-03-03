// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_

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
#include "j2735_v2x_msgs/msg/detail/intersection_reference_id__struct.hpp"
// Member 'status'
#include "j2735_v2x_msgs/msg/detail/intersection_status_object__struct.hpp"
// Member 'enabled_lanes'
#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__struct.hpp"
// Member 'states'
#include "j2735_v2x_msgs/msg/detail/movement_list__struct.hpp"
// Member 'maneuever_assist_list'
#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__IntersectionState __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__IntersectionState __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionState_
{
  using Type = IntersectionState_<ContainerAllocator>;

  explicit IntersectionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    status(_init),
    enabled_lanes(_init),
    states(_init),
    maneuever_assist_list(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->moy = 0ul;
      this->moy_exists = false;
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->enabled_lanes_exists = false;
      this->maneuever_assist_list_exists = false;
    }
  }

  explicit IntersectionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    id(_alloc, _init),
    status(_alloc, _init),
    enabled_lanes(_alloc, _init),
    states(_alloc, _init),
    maneuever_assist_list(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->name_exists = false;
      this->revision = 0;
      this->moy = 0ul;
      this->moy_exists = false;
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->enabled_lanes_exists = false;
      this->maneuever_assist_list_exists = false;
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
    j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator>;
  _id_type id;
  using _revision_type =
    uint8_t;
  _revision_type revision;
  using _status_type =
    j2735_v2x_msgs::msg::IntersectionStatusObject_<ContainerAllocator>;
  _status_type status;
  using _moy_type =
    uint32_t;
  _moy_type moy;
  using _moy_exists_type =
    bool;
  _moy_exists_type moy_exists;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _time_stamp_exists_type =
    bool;
  _time_stamp_exists_type time_stamp_exists;
  using _enabled_lanes_type =
    j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator>;
  _enabled_lanes_type enabled_lanes;
  using _enabled_lanes_exists_type =
    bool;
  _enabled_lanes_exists_type enabled_lanes_exists;
  using _states_type =
    j2735_v2x_msgs::msg::MovementList_<ContainerAllocator>;
  _states_type states;
  using _maneuever_assist_list_type =
    j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator>;
  _maneuever_assist_list_type maneuever_assist_list;
  using _maneuever_assist_list_exists_type =
    bool;
  _maneuever_assist_list_exists_type maneuever_assist_list_exists;

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
    const j2735_v2x_msgs::msg::IntersectionReferenceID_<ContainerAllocator> & _arg)
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
  Type & set__status(
    const j2735_v2x_msgs::msg::IntersectionStatusObject_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__moy(
    const uint32_t & _arg)
  {
    this->moy = _arg;
    return *this;
  }
  Type & set__moy_exists(
    const bool & _arg)
  {
    this->moy_exists = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__time_stamp_exists(
    const bool & _arg)
  {
    this->time_stamp_exists = _arg;
    return *this;
  }
  Type & set__enabled_lanes(
    const j2735_v2x_msgs::msg::EnabledLaneList_<ContainerAllocator> & _arg)
  {
    this->enabled_lanes = _arg;
    return *this;
  }
  Type & set__enabled_lanes_exists(
    const bool & _arg)
  {
    this->enabled_lanes_exists = _arg;
    return *this;
  }
  Type & set__states(
    const j2735_v2x_msgs::msg::MovementList_<ContainerAllocator> & _arg)
  {
    this->states = _arg;
    return *this;
  }
  Type & set__maneuever_assist_list(
    const j2735_v2x_msgs::msg::ManeuverAssistList_<ContainerAllocator> & _arg)
  {
    this->maneuever_assist_list = _arg;
    return *this;
  }
  Type & set__maneuever_assist_list_exists(
    const bool & _arg)
  {
    this->maneuever_assist_list_exists = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t MOY_INVALID =
    527040u;
  static constexpr uint32_t TIME_STAMP_UNAVAILABLE =
    65535u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__IntersectionState
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__IntersectionState
    std::shared_ptr<j2735_v2x_msgs::msg::IntersectionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionState_ & other) const
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
    if (this->status != other.status) {
      return false;
    }
    if (this->moy != other.moy) {
      return false;
    }
    if (this->moy_exists != other.moy_exists) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->time_stamp_exists != other.time_stamp_exists) {
      return false;
    }
    if (this->enabled_lanes != other.enabled_lanes) {
      return false;
    }
    if (this->enabled_lanes_exists != other.enabled_lanes_exists) {
      return false;
    }
    if (this->states != other.states) {
      return false;
    }
    if (this->maneuever_assist_list != other.maneuever_assist_list) {
      return false;
    }
    if (this->maneuever_assist_list_exists != other.maneuever_assist_list_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionState_

// alias to use template instance with default allocator
using IntersectionState =
  j2735_v2x_msgs::msg::IntersectionState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t IntersectionState_<ContainerAllocator>::MOY_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t IntersectionState_<ContainerAllocator>::TIME_STAMP_UNAVAILABLE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__STRUCT_HPP_
