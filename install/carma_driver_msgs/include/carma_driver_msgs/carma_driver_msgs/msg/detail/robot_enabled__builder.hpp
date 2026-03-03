// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/robot_enabled.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/msg/detail/robot_enabled__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotEnabled_braking_effort_validity
{
public:
  explicit Init_RobotEnabled_braking_effort_validity(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::msg::RobotEnabled braking_effort_validity(::carma_driver_msgs::msg::RobotEnabled::_braking_effort_validity_type arg)
  {
    msg_.braking_effort_validity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_braking_effort
{
public:
  explicit Init_RobotEnabled_braking_effort(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_braking_effort_validity braking_effort(::carma_driver_msgs::msg::RobotEnabled::_braking_effort_type arg)
  {
    msg_.braking_effort = std::move(arg);
    return Init_RobotEnabled_braking_effort_validity(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_throttle_effort_validity
{
public:
  explicit Init_RobotEnabled_throttle_effort_validity(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_braking_effort throttle_effort_validity(::carma_driver_msgs::msg::RobotEnabled::_throttle_effort_validity_type arg)
  {
    msg_.throttle_effort_validity = std::move(arg);
    return Init_RobotEnabled_braking_effort(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_throttle_effort
{
public:
  explicit Init_RobotEnabled_throttle_effort(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_throttle_effort_validity throttle_effort(::carma_driver_msgs::msg::RobotEnabled::_throttle_effort_type arg)
  {
    msg_.throttle_effort = std::move(arg);
    return Init_RobotEnabled_throttle_effort_validity(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_brake_decel_validity
{
public:
  explicit Init_RobotEnabled_brake_decel_validity(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_throttle_effort brake_decel_validity(::carma_driver_msgs::msg::RobotEnabled::_brake_decel_validity_type arg)
  {
    msg_.brake_decel_validity = std::move(arg);
    return Init_RobotEnabled_throttle_effort(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_brake_decel
{
public:
  explicit Init_RobotEnabled_brake_decel(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_brake_decel_validity brake_decel(::carma_driver_msgs::msg::RobotEnabled::_brake_decel_type arg)
  {
    msg_.brake_decel = std::move(arg);
    return Init_RobotEnabled_brake_decel_validity(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_torque_validity
{
public:
  explicit Init_RobotEnabled_torque_validity(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_brake_decel torque_validity(::carma_driver_msgs::msg::RobotEnabled::_torque_validity_type arg)
  {
    msg_.torque_validity = std::move(arg);
    return Init_RobotEnabled_brake_decel(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_torque
{
public:
  explicit Init_RobotEnabled_torque(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_torque_validity torque(::carma_driver_msgs::msg::RobotEnabled::_torque_type arg)
  {
    msg_.torque = std::move(arg);
    return Init_RobotEnabled_torque_validity(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_robot_enabled
{
public:
  explicit Init_RobotEnabled_robot_enabled(::carma_driver_msgs::msg::RobotEnabled & msg)
  : msg_(msg)
  {}
  Init_RobotEnabled_torque robot_enabled(::carma_driver_msgs::msg::RobotEnabled::_robot_enabled_type arg)
  {
    msg_.robot_enabled = std::move(arg);
    return Init_RobotEnabled_torque(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

class Init_RobotEnabled_robot_active
{
public:
  Init_RobotEnabled_robot_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotEnabled_robot_enabled robot_active(::carma_driver_msgs::msg::RobotEnabled::_robot_active_type arg)
  {
    msg_.robot_active = std::move(arg);
    return Init_RobotEnabled_robot_enabled(msg_);
  }

private:
  ::carma_driver_msgs::msg::RobotEnabled msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::msg::RobotEnabled>()
{
  return carma_driver_msgs::msg::builder::Init_RobotEnabled_robot_active();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__BUILDER_HPP_
