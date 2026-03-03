// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlSchedule.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_schedule.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/traffic_control_schedule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlSchedule_repeat_exists
{
public:
  explicit Init_TrafficControlSchedule_repeat_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrafficControlSchedule repeat_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule::_repeat_exists_type arg)
  {
    msg_.repeat_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_repeat
{
public:
  explicit Init_TrafficControlSchedule_repeat(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  Init_TrafficControlSchedule_repeat_exists repeat(::j2735_v2x_msgs::msg::TrafficControlSchedule::_repeat_type arg)
  {
    msg_.repeat = std::move(arg);
    return Init_TrafficControlSchedule_repeat_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_between_exists
{
public:
  explicit Init_TrafficControlSchedule_between_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  Init_TrafficControlSchedule_repeat between_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule::_between_exists_type arg)
  {
    msg_.between_exists = std::move(arg);
    return Init_TrafficControlSchedule_repeat(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_between
{
public:
  explicit Init_TrafficControlSchedule_between(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  Init_TrafficControlSchedule_between_exists between(::j2735_v2x_msgs::msg::TrafficControlSchedule::_between_type arg)
  {
    msg_.between = std::move(arg);
    return Init_TrafficControlSchedule_between_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_dow_exists
{
public:
  explicit Init_TrafficControlSchedule_dow_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  Init_TrafficControlSchedule_between dow_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule::_dow_exists_type arg)
  {
    msg_.dow_exists = std::move(arg);
    return Init_TrafficControlSchedule_between(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_dow
{
public:
  explicit Init_TrafficControlSchedule_dow(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  Init_TrafficControlSchedule_dow_exists dow(::j2735_v2x_msgs::msg::TrafficControlSchedule::_dow_type arg)
  {
    msg_.dow = std::move(arg);
    return Init_TrafficControlSchedule_dow_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_end_exists
{
public:
  explicit Init_TrafficControlSchedule_end_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  Init_TrafficControlSchedule_dow end_exists(::j2735_v2x_msgs::msg::TrafficControlSchedule::_end_exists_type arg)
  {
    msg_.end_exists = std::move(arg);
    return Init_TrafficControlSchedule_dow(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_end
{
public:
  explicit Init_TrafficControlSchedule_end(::j2735_v2x_msgs::msg::TrafficControlSchedule & msg)
  : msg_(msg)
  {}
  Init_TrafficControlSchedule_end_exists end(::j2735_v2x_msgs::msg::TrafficControlSchedule::_end_type arg)
  {
    msg_.end = std::move(arg);
    return Init_TrafficControlSchedule_end_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

class Init_TrafficControlSchedule_start
{
public:
  Init_TrafficControlSchedule_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlSchedule_end start(::j2735_v2x_msgs::msg::TrafficControlSchedule::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_TrafficControlSchedule_end(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlSchedule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrafficControlSchedule>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrafficControlSchedule_start();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_SCHEDULE__BUILDER_HPP_
