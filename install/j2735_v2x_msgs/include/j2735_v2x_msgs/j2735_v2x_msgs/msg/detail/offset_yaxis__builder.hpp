// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/OffsetYaxis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_yaxis.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/offset_yaxis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OffsetYaxis_large
{
public:
  explicit Init_OffsetYaxis_large(::j2735_v2x_msgs::msg::OffsetYaxis & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::OffsetYaxis large(::j2735_v2x_msgs::msg::OffsetYaxis::_large_type arg)
  {
    msg_.large = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetYaxis msg_;
};

class Init_OffsetYaxis_small
{
public:
  explicit Init_OffsetYaxis_small(::j2735_v2x_msgs::msg::OffsetYaxis & msg)
  : msg_(msg)
  {}
  Init_OffsetYaxis_large small(::j2735_v2x_msgs::msg::OffsetYaxis::_small_type arg)
  {
    msg_.small = std::move(arg);
    return Init_OffsetYaxis_large(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetYaxis msg_;
};

class Init_OffsetYaxis_choice
{
public:
  Init_OffsetYaxis_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetYaxis_small choice(::j2735_v2x_msgs::msg::OffsetYaxis::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_OffsetYaxis_small(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetYaxis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::OffsetYaxis>()
{
  return j2735_v2x_msgs::msg::builder::Init_OffsetYaxis_choice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_YAXIS__BUILDER_HPP_
