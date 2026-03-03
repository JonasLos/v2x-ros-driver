// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/movement_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementState_maneuver_assist_list_exists
{
public:
  explicit Init_MovementState_maneuver_assist_list_exists(::j2735_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::MovementState maneuver_assist_list_exists(::j2735_v2x_msgs::msg::MovementState::_maneuver_assist_list_exists_type arg)
  {
    msg_.maneuver_assist_list_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_maneuver_assist_list
{
public:
  explicit Init_MovementState_maneuver_assist_list(::j2735_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_maneuver_assist_list_exists maneuver_assist_list(::j2735_v2x_msgs::msg::MovementState::_maneuver_assist_list_type arg)
  {
    msg_.maneuver_assist_list = std::move(arg);
    return Init_MovementState_maneuver_assist_list_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_state_time_speed
{
public:
  explicit Init_MovementState_state_time_speed(::j2735_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_maneuver_assist_list state_time_speed(::j2735_v2x_msgs::msg::MovementState::_state_time_speed_type arg)
  {
    msg_.state_time_speed = std::move(arg);
    return Init_MovementState_maneuver_assist_list(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_signal_group
{
public:
  explicit Init_MovementState_signal_group(::j2735_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_state_time_speed signal_group(::j2735_v2x_msgs::msg::MovementState::_signal_group_type arg)
  {
    msg_.signal_group = std::move(arg);
    return Init_MovementState_state_time_speed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_movement_name_exists
{
public:
  explicit Init_MovementState_movement_name_exists(::j2735_v2x_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  Init_MovementState_signal_group movement_name_exists(::j2735_v2x_msgs::msg::MovementState::_movement_name_exists_type arg)
  {
    msg_.movement_name_exists = std::move(arg);
    return Init_MovementState_signal_group(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementState msg_;
};

class Init_MovementState_movement_name
{
public:
  Init_MovementState_movement_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementState_movement_name_exists movement_name(::j2735_v2x_msgs::msg::MovementState::_movement_name_type arg)
  {
    msg_.movement_name = std::move(arg);
    return Init_MovementState_movement_name_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MovementState>()
{
  return j2735_v2x_msgs::msg::builder::Init_MovementState_movement_name();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_
