// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Priority.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/priority.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/priority__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Priority_priority
{
public:
  Init_Priority_priority()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::Priority priority(::j2735_v2x_msgs::msg::Priority::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Priority msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Priority>()
{
  return j2735_v2x_msgs::msg::builder::Init_Priority_priority();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PRIORITY__BUILDER_HPP_
