// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/OffsetPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/offset_point.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/offset_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OffsetPoint_deltay
{
public:
  explicit Init_OffsetPoint_deltay(::j2735_v2x_msgs::msg::OffsetPoint & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::OffsetPoint deltay(::j2735_v2x_msgs::msg::OffsetPoint::_deltay_type arg)
  {
    msg_.deltay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetPoint msg_;
};

class Init_OffsetPoint_deltax
{
public:
  Init_OffsetPoint_deltax()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OffsetPoint_deltay deltax(::j2735_v2x_msgs::msg::OffsetPoint::_deltax_type arg)
  {
    msg_.deltax = std::move(arg);
    return Init_OffsetPoint_deltay(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OffsetPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::OffsetPoint>()
{
  return j2735_v2x_msgs::msg::builder::Init_OffsetPoint_deltax();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_POINT__BUILDER_HPP_
