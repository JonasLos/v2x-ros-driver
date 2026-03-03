// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/StabilityControlStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/stability_control_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__STABILITY_CONTROL_STATUS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__STABILITY_CONTROL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/stability_control_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_StabilityControlStatus_stability_control_status
{
public:
  Init_StabilityControlStatus_stability_control_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::StabilityControlStatus stability_control_status(::j2735_v2x_msgs::msg::StabilityControlStatus::_stability_control_status_type arg)
  {
    msg_.stability_control_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::StabilityControlStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::StabilityControlStatus>()
{
  return j2735_v2x_msgs::msg::builder::Init_StabilityControlStatus_stability_control_status();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__STABILITY_CONTROL_STATUS__BUILDER_HPP_
