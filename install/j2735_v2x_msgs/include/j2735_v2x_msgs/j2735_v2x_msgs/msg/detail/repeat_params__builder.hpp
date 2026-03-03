// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RepeatParams.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/repeat_params.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/repeat_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RepeatParams_span
{
public:
  explicit Init_RepeatParams_span(::j2735_v2x_msgs::msg::RepeatParams & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::RepeatParams span(::j2735_v2x_msgs::msg::RepeatParams::_span_type arg)
  {
    msg_.span = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RepeatParams msg_;
};

class Init_RepeatParams_period
{
public:
  explicit Init_RepeatParams_period(::j2735_v2x_msgs::msg::RepeatParams & msg)
  : msg_(msg)
  {}
  Init_RepeatParams_span period(::j2735_v2x_msgs::msg::RepeatParams::_period_type arg)
  {
    msg_.period = std::move(arg);
    return Init_RepeatParams_span(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RepeatParams msg_;
};

class Init_RepeatParams_offset
{
public:
  Init_RepeatParams_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RepeatParams_period offset(::j2735_v2x_msgs::msg::RepeatParams::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_RepeatParams_period(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RepeatParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RepeatParams>()
{
  return j2735_v2x_msgs::msg::builder::Init_RepeatParams_offset();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__REPEAT_PARAMS__BUILDER_HPP_
