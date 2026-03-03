// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AccelerationSet4Way.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/acceleration_set4_way.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AccelerationSet4Way_yaw_rate
{
public:
  explicit Init_AccelerationSet4Way_yaw_rate(::j2735_v2x_msgs::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::AccelerationSet4Way yaw_rate(::j2735_v2x_msgs::msg::AccelerationSet4Way::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_vert
{
public:
  explicit Init_AccelerationSet4Way_vert(::j2735_v2x_msgs::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  Init_AccelerationSet4Way_yaw_rate vert(::j2735_v2x_msgs::msg::AccelerationSet4Way::_vert_type arg)
  {
    msg_.vert = std::move(arg);
    return Init_AccelerationSet4Way_yaw_rate(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_lateral
{
public:
  explicit Init_AccelerationSet4Way_lateral(::j2735_v2x_msgs::msg::AccelerationSet4Way & msg)
  : msg_(msg)
  {}
  Init_AccelerationSet4Way_vert lateral(::j2735_v2x_msgs::msg::AccelerationSet4Way::_lateral_type arg)
  {
    msg_.lateral = std::move(arg);
    return Init_AccelerationSet4Way_vert(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AccelerationSet4Way msg_;
};

class Init_AccelerationSet4Way_longitudinal
{
public:
  Init_AccelerationSet4Way_longitudinal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelerationSet4Way_lateral longitudinal(::j2735_v2x_msgs::msg::AccelerationSet4Way::_longitudinal_type arg)
  {
    msg_.longitudinal = std::move(arg);
    return Init_AccelerationSet4Way_lateral(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AccelerationSet4Way msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AccelerationSet4Way>()
{
  return j2735_v2x_msgs::msg::builder::Init_AccelerationSet4Way_longitudinal();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ACCELERATION_SET4_WAY__BUILDER_HPP_
