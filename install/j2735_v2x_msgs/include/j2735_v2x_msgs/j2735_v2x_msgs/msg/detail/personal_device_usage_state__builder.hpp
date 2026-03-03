// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PersonalDeviceUsageState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/personal_device_usage_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/personal_device_usage_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PersonalDeviceUsageState_states
{
public:
  Init_PersonalDeviceUsageState_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PersonalDeviceUsageState states(::j2735_v2x_msgs::msg::PersonalDeviceUsageState::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PersonalDeviceUsageState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PersonalDeviceUsageState>()
{
  return j2735_v2x_msgs::msg::builder::Init_PersonalDeviceUsageState_states();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PERSONAL_DEVICE_USAGE_STATE__BUILDER_HPP_
