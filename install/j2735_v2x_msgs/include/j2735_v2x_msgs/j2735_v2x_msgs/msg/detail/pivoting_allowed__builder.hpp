// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PivotingAllowed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/pivoting_allowed.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/pivoting_allowed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PivotingAllowed_pivoting_allowed
{
public:
  Init_PivotingAllowed_pivoting_allowed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::PivotingAllowed pivoting_allowed(::j2735_v2x_msgs::msg::PivotingAllowed::_pivoting_allowed_type arg)
  {
    msg_.pivoting_allowed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PivotingAllowed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PivotingAllowed>()
{
  return j2735_v2x_msgs::msg::builder::Init_PivotingAllowed_pivoting_allowed();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PIVOTING_ALLOWED__BUILDER_HPP_
