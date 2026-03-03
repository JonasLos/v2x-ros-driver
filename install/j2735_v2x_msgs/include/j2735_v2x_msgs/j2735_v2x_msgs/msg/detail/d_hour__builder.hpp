// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DHour.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_hour.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/d_hour__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DHour_hour
{
public:
  Init_DHour_hour()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::DHour hour(::j2735_v2x_msgs::msg::DHour::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DHour msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DHour>()
{
  return j2735_v2x_msgs::msg::builder::Init_DHour_hour();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_HOUR__BUILDER_HPP_
