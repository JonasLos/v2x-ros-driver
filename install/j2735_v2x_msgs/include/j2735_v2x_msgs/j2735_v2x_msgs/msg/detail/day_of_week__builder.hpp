// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DayOfWeek.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/day_of_week.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/day_of_week__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DayOfWeek_dow
{
public:
  Init_DayOfWeek_dow()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::DayOfWeek dow(::j2735_v2x_msgs::msg::DayOfWeek::_dow_type arg)
  {
    msg_.dow = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DayOfWeek msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DayOfWeek>()
{
  return j2735_v2x_msgs::msg::builder::Init_DayOfWeek_dow();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DAY_OF_WEEK__BUILDER_HPP_
