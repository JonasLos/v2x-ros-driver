// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AllowedManeuvers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/allowed_maneuvers.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/allowed_maneuvers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AllowedManeuvers_allowed_maneuvers
{
public:
  Init_AllowedManeuvers_allowed_maneuvers()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::AllowedManeuvers allowed_maneuvers(::j2735_v2x_msgs::msg::AllowedManeuvers::_allowed_maneuvers_type arg)
  {
    msg_.allowed_maneuvers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AllowedManeuvers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AllowedManeuvers>()
{
  return j2735_v2x_msgs::msg::builder::Init_AllowedManeuvers_allowed_maneuvers();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ALLOWED_MANEUVERS__BUILDER_HPP_
