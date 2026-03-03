// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/robot_enabled.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_driver_msgs__msg__RobotEnabled __attribute__((deprecated))
#else
# define DEPRECATED__carma_driver_msgs__msg__RobotEnabled __declspec(deprecated)
#endif

namespace carma_driver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotEnabled_
{
  using Type = RobotEnabled_<ContainerAllocator>;

  explicit RobotEnabled_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_active = false;
      this->robot_enabled = false;
      this->torque = 0.0;
      this->torque_validity = false;
      this->brake_decel = 0.0;
      this->brake_decel_validity = false;
      this->throttle_effort = 0.0;
      this->throttle_effort_validity = false;
      this->braking_effort = 0.0;
      this->braking_effort_validity = false;
    }
  }

  explicit RobotEnabled_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_active = false;
      this->robot_enabled = false;
      this->torque = 0.0;
      this->torque_validity = false;
      this->brake_decel = 0.0;
      this->brake_decel_validity = false;
      this->throttle_effort = 0.0;
      this->throttle_effort_validity = false;
      this->braking_effort = 0.0;
      this->braking_effort_validity = false;
    }
  }

  // field types and members
  using _robot_active_type =
    bool;
  _robot_active_type robot_active;
  using _robot_enabled_type =
    bool;
  _robot_enabled_type robot_enabled;
  using _torque_type =
    double;
  _torque_type torque;
  using _torque_validity_type =
    bool;
  _torque_validity_type torque_validity;
  using _brake_decel_type =
    double;
  _brake_decel_type brake_decel;
  using _brake_decel_validity_type =
    bool;
  _brake_decel_validity_type brake_decel_validity;
  using _throttle_effort_type =
    double;
  _throttle_effort_type throttle_effort;
  using _throttle_effort_validity_type =
    bool;
  _throttle_effort_validity_type throttle_effort_validity;
  using _braking_effort_type =
    double;
  _braking_effort_type braking_effort;
  using _braking_effort_validity_type =
    bool;
  _braking_effort_validity_type braking_effort_validity;

  // setters for named parameter idiom
  Type & set__robot_active(
    const bool & _arg)
  {
    this->robot_active = _arg;
    return *this;
  }
  Type & set__robot_enabled(
    const bool & _arg)
  {
    this->robot_enabled = _arg;
    return *this;
  }
  Type & set__torque(
    const double & _arg)
  {
    this->torque = _arg;
    return *this;
  }
  Type & set__torque_validity(
    const bool & _arg)
  {
    this->torque_validity = _arg;
    return *this;
  }
  Type & set__brake_decel(
    const double & _arg)
  {
    this->brake_decel = _arg;
    return *this;
  }
  Type & set__brake_decel_validity(
    const bool & _arg)
  {
    this->brake_decel_validity = _arg;
    return *this;
  }
  Type & set__throttle_effort(
    const double & _arg)
  {
    this->throttle_effort = _arg;
    return *this;
  }
  Type & set__throttle_effort_validity(
    const bool & _arg)
  {
    this->throttle_effort_validity = _arg;
    return *this;
  }
  Type & set__braking_effort(
    const double & _arg)
  {
    this->braking_effort = _arg;
    return *this;
  }
  Type & set__braking_effort_validity(
    const bool & _arg)
  {
    this->braking_effort_validity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_driver_msgs__msg__RobotEnabled
    std::shared_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_driver_msgs__msg__RobotEnabled
    std::shared_ptr<carma_driver_msgs::msg::RobotEnabled_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotEnabled_ & other) const
  {
    if (this->robot_active != other.robot_active) {
      return false;
    }
    if (this->robot_enabled != other.robot_enabled) {
      return false;
    }
    if (this->torque != other.torque) {
      return false;
    }
    if (this->torque_validity != other.torque_validity) {
      return false;
    }
    if (this->brake_decel != other.brake_decel) {
      return false;
    }
    if (this->brake_decel_validity != other.brake_decel_validity) {
      return false;
    }
    if (this->throttle_effort != other.throttle_effort) {
      return false;
    }
    if (this->throttle_effort_validity != other.throttle_effort_validity) {
      return false;
    }
    if (this->braking_effort != other.braking_effort) {
      return false;
    }
    if (this->braking_effort_validity != other.braking_effort_validity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotEnabled_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotEnabled_

// alias to use template instance with default allocator
using RobotEnabled =
  carma_driver_msgs::msg::RobotEnabled_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_HPP_
