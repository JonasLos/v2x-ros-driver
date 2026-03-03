// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/WiperStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_status.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/wiper_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_WiperStatus_wiper_status
{
public:
  Init_WiperStatus_wiper_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::WiperStatus wiper_status(::j2735_v2x_msgs::msg::WiperStatus::_wiper_status_type arg)
  {
    msg_.wiper_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WiperStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::WiperStatus>()
{
  return j2735_v2x_msgs::msg::builder::Init_WiperStatus_wiper_status();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__BUILDER_HPP_
