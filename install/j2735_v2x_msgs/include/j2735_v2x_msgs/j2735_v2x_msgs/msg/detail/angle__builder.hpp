// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/angle.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Angle_angle
{
public:
  Init_Angle_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::Angle angle(::j2735_v2x_msgs::msg::Angle::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Angle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Angle>()
{
  return j2735_v2x_msgs::msg::builder::Init_Angle_angle();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ANGLE__BUILDER_HPP_
