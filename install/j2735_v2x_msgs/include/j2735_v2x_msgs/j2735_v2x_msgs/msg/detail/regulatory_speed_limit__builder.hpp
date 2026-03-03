// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RegulatorySpeedLimit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/regulatory_speed_limit.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/regulatory_speed_limit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RegulatorySpeedLimit_speed
{
public:
  explicit Init_RegulatorySpeedLimit_speed(::j2735_v2x_msgs::msg::RegulatorySpeedLimit & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::RegulatorySpeedLimit speed(::j2735_v2x_msgs::msg::RegulatorySpeedLimit::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RegulatorySpeedLimit msg_;
};

class Init_RegulatorySpeedLimit_type
{
public:
  Init_RegulatorySpeedLimit_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegulatorySpeedLimit_speed type(::j2735_v2x_msgs::msg::RegulatorySpeedLimit::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RegulatorySpeedLimit_speed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RegulatorySpeedLimit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RegulatorySpeedLimit>()
{
  return j2735_v2x_msgs::msg::builder::Init_RegulatorySpeedLimit_type();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__REGULATORY_SPEED_LIMIT__BUILDER_HPP_
