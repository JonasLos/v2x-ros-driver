// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/WiperRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/wiper_rate.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/wiper_rate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_WiperRate_wiper_rate
{
public:
  Init_WiperRate_wiper_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::WiperRate wiper_rate(::j2735_v2x_msgs::msg::WiperRate::_wiper_rate_type arg)
  {
    msg_.wiper_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::WiperRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::WiperRate>()
{
  return j2735_v2x_msgs::msg::builder::Init_WiperRate_wiper_rate();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_RATE__BUILDER_HPP_
