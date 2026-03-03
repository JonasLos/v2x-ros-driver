// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BrakeBoostApplied.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/brake_boost_applied.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BrakeBoostApplied_brake_boost_applied
{
public:
  Init_BrakeBoostApplied_brake_boost_applied()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::BrakeBoostApplied brake_boost_applied(::j2735_v2x_msgs::msg::BrakeBoostApplied::_brake_boost_applied_type arg)
  {
    msg_.brake_boost_applied = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BrakeBoostApplied msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BrakeBoostApplied>()
{
  return j2735_v2x_msgs::msg::builder::Init_BrakeBoostApplied_brake_boost_applied();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__BUILDER_HPP_
