// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TransmissionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/transmission_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/transmission_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TransmissionState_transmission_state
{
public:
  Init_TransmissionState_transmission_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::TransmissionState transmission_state(::j2735_v2x_msgs::msg::TransmissionState::_transmission_state_type arg)
  {
    msg_.transmission_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TransmissionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TransmissionState>()
{
  return j2735_v2x_msgs::msg::builder::Init_TransmissionState_transmission_state();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRANSMISSION_STATE__BUILDER_HPP_
