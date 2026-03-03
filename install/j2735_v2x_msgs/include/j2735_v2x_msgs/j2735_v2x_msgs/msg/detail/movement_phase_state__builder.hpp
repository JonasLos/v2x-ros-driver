// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MovementPhaseState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_phase_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/movement_phase_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementPhaseState_movement_phase_state
{
public:
  Init_MovementPhaseState_movement_phase_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::MovementPhaseState movement_phase_state(::j2735_v2x_msgs::msg::MovementPhaseState::_movement_phase_state_type arg)
  {
    msg_.movement_phase_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementPhaseState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MovementPhaseState>()
{
  return j2735_v2x_msgs::msg::builder::Init_MovementPhaseState_movement_phase_state();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_PHASE_STATE__BUILDER_HPP_
