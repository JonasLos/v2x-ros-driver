// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/brake_system_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/brake_system_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeSystemStatus_aux_brakes
{
public:
  explicit Init_BrakeSystemStatus_aux_brakes(::j2735_v2x_msgs::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::BrakeSystemStatus aux_brakes(::j2735_v2x_msgs::msg::BrakeSystemStatus::_aux_brakes_type arg)
  {
    msg_.aux_brakes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_brake_boost
{
public:
  explicit Init_BrakeSystemStatus_brake_boost(::j2735_v2x_msgs::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_aux_brakes brake_boost(::j2735_v2x_msgs::msg::BrakeSystemStatus::_brake_boost_type arg)
  {
    msg_.brake_boost = std::move(arg);
    return Init_BrakeSystemStatus_aux_brakes(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_scs
{
public:
  explicit Init_BrakeSystemStatus_scs(::j2735_v2x_msgs::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_brake_boost scs(::j2735_v2x_msgs::msg::BrakeSystemStatus::_scs_type arg)
  {
    msg_.scs = std::move(arg);
    return Init_BrakeSystemStatus_brake_boost(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_abs
{
public:
  explicit Init_BrakeSystemStatus_abs(::j2735_v2x_msgs::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_scs abs(::j2735_v2x_msgs::msg::BrakeSystemStatus::_abs_type arg)
  {
    msg_.abs = std::move(arg);
    return Init_BrakeSystemStatus_scs(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_traction
{
public:
  explicit Init_BrakeSystemStatus_traction(::j2735_v2x_msgs::msg::BrakeSystemStatus & msg)
  : msg_(msg)
  {}
  Init_BrakeSystemStatus_abs traction(::j2735_v2x_msgs::msg::BrakeSystemStatus::_traction_type arg)
  {
    msg_.traction = std::move(arg);
    return Init_BrakeSystemStatus_abs(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BrakeSystemStatus msg_;
};

class Init_BrakeSystemStatus_wheel_brakes
{
public:
  Init_BrakeSystemStatus_wheel_brakes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BrakeSystemStatus_traction wheel_brakes(::j2735_v2x_msgs::msg::BrakeSystemStatus::_wheel_brakes_type arg)
  {
    msg_.wheel_brakes = std::move(arg);
    return Init_BrakeSystemStatus_traction(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BrakeSystemStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BrakeSystemStatus>()
{
  return j2735_v2x_msgs::msg::builder::Init_BrakeSystemStatus_wheel_brakes();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_SYSTEM_STATUS__BUILDER_HPP_
