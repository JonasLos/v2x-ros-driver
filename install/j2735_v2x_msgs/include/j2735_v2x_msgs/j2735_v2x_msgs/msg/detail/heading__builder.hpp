// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Heading.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/heading.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/heading__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Heading_heading
{
public:
  Init_Heading_heading()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::Heading heading(::j2735_v2x_msgs::msg::Heading::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Heading msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Heading>()
{
  return j2735_v2x_msgs::msg::builder::Init_Heading_heading();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HEADING__BUILDER_HPP_
