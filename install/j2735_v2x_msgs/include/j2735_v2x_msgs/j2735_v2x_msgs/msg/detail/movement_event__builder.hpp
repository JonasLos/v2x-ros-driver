// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MovementEvent.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_event.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/movement_event__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementEvent_speeds_exists
{
public:
  explicit Init_MovementEvent_speeds_exists(::j2735_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::MovementEvent speeds_exists(::j2735_v2x_msgs::msg::MovementEvent::_speeds_exists_type arg)
  {
    msg_.speeds_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_speeds
{
public:
  explicit Init_MovementEvent_speeds(::j2735_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  Init_MovementEvent_speeds_exists speeds(::j2735_v2x_msgs::msg::MovementEvent::_speeds_type arg)
  {
    msg_.speeds = std::move(arg);
    return Init_MovementEvent_speeds_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_timing_exists
{
public:
  explicit Init_MovementEvent_timing_exists(::j2735_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  Init_MovementEvent_speeds timing_exists(::j2735_v2x_msgs::msg::MovementEvent::_timing_exists_type arg)
  {
    msg_.timing_exists = std::move(arg);
    return Init_MovementEvent_speeds(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_timing
{
public:
  explicit Init_MovementEvent_timing(::j2735_v2x_msgs::msg::MovementEvent & msg)
  : msg_(msg)
  {}
  Init_MovementEvent_timing_exists timing(::j2735_v2x_msgs::msg::MovementEvent::_timing_type arg)
  {
    msg_.timing = std::move(arg);
    return Init_MovementEvent_timing_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementEvent msg_;
};

class Init_MovementEvent_event_state
{
public:
  Init_MovementEvent_event_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementEvent_timing event_state(::j2735_v2x_msgs::msg::MovementEvent::_event_state_type arg)
  {
    msg_.event_state = std::move(arg);
    return Init_MovementEvent_timing(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementEvent msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MovementEvent>()
{
  return j2735_v2x_msgs::msg::builder::Init_MovementEvent_event_state();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT__BUILDER_HPP_
