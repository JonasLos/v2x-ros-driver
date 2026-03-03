// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DMonth.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_month.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_MONTH__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_MONTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/d_month__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DMonth_month
{
public:
  Init_DMonth_month()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::DMonth month(::j2735_v2x_msgs::msg::DMonth::_month_type arg)
  {
    msg_.month = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DMonth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DMonth>()
{
  return j2735_v2x_msgs::msg::builder::Init_DMonth_month();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_MONTH__BUILDER_HPP_
