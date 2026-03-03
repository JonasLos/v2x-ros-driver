// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PositionalAccuracy.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/positional_accuracy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionalAccuracy_orientation
{
public:
  explicit Init_PositionalAccuracy_orientation(::j2735_v2x_msgs::msg::PositionalAccuracy & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::PositionalAccuracy orientation(::j2735_v2x_msgs::msg::PositionalAccuracy::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PositionalAccuracy msg_;
};

class Init_PositionalAccuracy_semi_minor
{
public:
  explicit Init_PositionalAccuracy_semi_minor(::j2735_v2x_msgs::msg::PositionalAccuracy & msg)
  : msg_(msg)
  {}
  Init_PositionalAccuracy_orientation semi_minor(::j2735_v2x_msgs::msg::PositionalAccuracy::_semi_minor_type arg)
  {
    msg_.semi_minor = std::move(arg);
    return Init_PositionalAccuracy_orientation(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PositionalAccuracy msg_;
};

class Init_PositionalAccuracy_semi_major
{
public:
  Init_PositionalAccuracy_semi_major()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionalAccuracy_semi_minor semi_major(::j2735_v2x_msgs::msg::PositionalAccuracy::_semi_major_type arg)
  {
    msg_.semi_major = std::move(arg);
    return Init_PositionalAccuracy_semi_minor(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PositionalAccuracy msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PositionalAccuracy>()
{
  return j2735_v2x_msgs::msg::builder::Init_PositionalAccuracy_semi_major();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__POSITIONAL_ACCURACY__BUILDER_HPP_
