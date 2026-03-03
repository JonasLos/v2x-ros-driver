// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DSecond.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_second.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/d_second__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DSecond_millisecond
{
public:
  Init_DSecond_millisecond()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::DSecond millisecond(::j2735_v2x_msgs::msg::DSecond::_millisecond_type arg)
  {
    msg_.millisecond = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DSecond msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DSecond>()
{
  return j2735_v2x_msgs::msg::builder::Init_DSecond_millisecond();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_SECOND__BUILDER_HPP_
