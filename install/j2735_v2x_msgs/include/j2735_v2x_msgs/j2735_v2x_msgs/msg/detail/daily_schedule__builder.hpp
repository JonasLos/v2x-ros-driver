// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DailySchedule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/daily_schedule.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/daily_schedule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DailySchedule_duration
{
public:
  explicit Init_DailySchedule_duration(::j2735_v2x_msgs::msg::DailySchedule & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::DailySchedule duration(::j2735_v2x_msgs::msg::DailySchedule::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DailySchedule msg_;
};

class Init_DailySchedule_begin
{
public:
  Init_DailySchedule_begin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DailySchedule_duration begin(::j2735_v2x_msgs::msg::DailySchedule::_begin_type arg)
  {
    msg_.begin = std::move(arg);
    return Init_DailySchedule_duration(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DailySchedule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DailySchedule>()
{
  return j2735_v2x_msgs::msg::builder::Init_DailySchedule_begin();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__DAILY_SCHEDULE__BUILDER_HPP_
