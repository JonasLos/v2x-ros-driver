// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/OffsetXaxis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_xaxis.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_XAXIS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_XAXIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/offset_xaxis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OffsetXaxis_large
{
public:
  explicit Init_OffsetXaxis_large(::j2735_v2x_msgs::msg::OffsetXaxis & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::OffsetXaxis large(::j2735_v2x_msgs::msg::OffsetXaxis::_large_type arg)
  {
    msg_.large = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetXaxis msg_;
};

class Init_OffsetXaxis_small
{
public:
  explicit Init_OffsetXaxis_small(::j2735_v2x_msgs::msg::OffsetXaxis & msg)
  : msg_(msg)
  {}
  Init_OffsetXaxis_large small(::j2735_v2x_msgs::msg::OffsetXaxis::_small_type arg)
  {
    msg_.small = std::move(arg);
    return Init_OffsetXaxis_large(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetXaxis msg_;
};

class Init_OffsetXaxis_choice
{
public:
  Init_OffsetXaxis_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetXaxis_small choice(::j2735_v2x_msgs::msg::OffsetXaxis::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_OffsetXaxis_small(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetXaxis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::OffsetXaxis>()
{
  return j2735_v2x_msgs::msg::builder::Init_OffsetXaxis_choice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_XAXIS__BUILDER_HPP_
