// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/yaw_rate.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/yaw_rate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_YawRate_yaw_rate
{
public:
  Init_YawRate_yaw_rate()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::YawRate yaw_rate(::j2735_v2x_msgs::msg::YawRate::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::YawRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::YawRate>()
{
  return j2735_v2x_msgs::msg::builder::Init_YawRate_yaw_rate();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__YAW_RATE__BUILDER_HPP_
