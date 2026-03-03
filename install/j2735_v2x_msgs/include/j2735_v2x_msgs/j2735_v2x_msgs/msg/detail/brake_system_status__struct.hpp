// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/brake_system_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'wheel_brakes'
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__struct.hpp"
// Member 'traction'
#include "j2735_v2x_msgs/msg/detail/traction_control_status__struct.hpp"
// Member 'abs'
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__struct.hpp"
// Member 'scs'
#include "j2735_v2x_msgs/msg/detail/stability_control_status__struct.hpp"
// Member 'brake_boost'
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__struct.hpp"
// Member 'aux_brakes'
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BrakeSystemStatus __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BrakeSystemStatus __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BrakeSystemStatus_
{
  using Type = BrakeSystemStatus_<ContainerAllocator>;

  explicit BrakeSystemStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wheel_brakes(_init),
    traction(_init),
    abs(_init),
    scs(_init),
    brake_boost(_init),
    aux_brakes(_init)
  {
    (void)_init;
  }

  explicit BrakeSystemStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wheel_brakes(_alloc, _init),
    traction(_alloc, _init),
    abs(_alloc, _init),
    scs(_alloc, _init),
    brake_boost(_alloc, _init),
    aux_brakes(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _wheel_brakes_type =
    j2735_v2x_msgs::msg::BrakeAppliedStatus_<ContainerAllocator>;
  _wheel_brakes_type wheel_brakes;
  using _traction_type =
    j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator>;
  _traction_type traction;
  using _abs_type =
    j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator>;
  _abs_type abs;
  using _scs_type =
    j2735_v2x_msgs::msg::StabilityControlStatus_<ContainerAllocator>;
  _scs_type scs;
  using _brake_boost_type =
    j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator>;
  _brake_boost_type brake_boost;
  using _aux_brakes_type =
    j2735_v2x_msgs::msg::AuxiliaryBrakeStatus_<ContainerAllocator>;
  _aux_brakes_type aux_brakes;

  // setters for named parameter idiom
  Type & set__wheel_brakes(
    const j2735_v2x_msgs::msg::BrakeAppliedStatus_<ContainerAllocator> & _arg)
  {
    this->wheel_brakes = _arg;
    return *this;
  }
  Type & set__traction(
    const j2735_v2x_msgs::msg::TractionControlStatus_<ContainerAllocator> & _arg)
  {
    this->traction = _arg;
    return *this;
  }
  Type & set__abs(
    const j2735_v2x_msgs::msg::AntiLockBrakeStatus_<ContainerAllocator> & _arg)
  {
    this->abs = _arg;
    return *this;
  }
  Type & set__scs(
    const j2735_v2x_msgs::msg::StabilityControlStatus_<ContainerAllocator> & _arg)
  {
    this->scs = _arg;
    return *this;
  }
  Type & set__brake_boost(
    const j2735_v2x_msgs::msg::BrakeBoostApplied_<ContainerAllocator> & _arg)
  {
    this->brake_boost = _arg;
    return *this;
  }
  Type & set__aux_brakes(
    const j2735_v2x_msgs::msg::AuxiliaryBrakeStatus_<ContainerAllocator> & _arg)
  {
    this->aux_brakes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BrakeSystemStatus
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BrakeSystemStatus
    std::shared_ptr<j2735_v2x_msgs::msg::BrakeSystemStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BrakeSystemStatus_ & other) const
  {
    if (this->wheel_brakes != other.wheel_brakes) {
      return false;
    }
    if (this->traction != other.traction) {
      return false;
    }
    if (this->abs != other.abs) {
      return false;
    }
    if (this->scs != other.scs) {
      return false;
    }
    if (this->brake_boost != other.brake_boost) {
      return false;
    }
    if (this->aux_brakes != other.aux_brakes) {
      return false;
    }
    return true;
  }
  bool operator!=(const BrakeSystemStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BrakeSystemStatus_

// alias to use template instance with default allocator
using BrakeSystemStatus =
  j2735_v2x_msgs::msg::BrakeSystemStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__STRUCT_HPP_
