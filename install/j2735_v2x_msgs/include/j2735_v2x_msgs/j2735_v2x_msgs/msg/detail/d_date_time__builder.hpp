// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/DDateTime.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/d_date_time.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_DDateTime_offset
{
public:
  explicit Init_DDateTime_offset(::j2735_v2x_msgs::msg::DDateTime & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::DDateTime offset(::j2735_v2x_msgs::msg::DDateTime::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

class Init_DDateTime_second
{
public:
  explicit Init_DDateTime_second(::j2735_v2x_msgs::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_offset second(::j2735_v2x_msgs::msg::DDateTime::_second_type arg)
  {
    msg_.second = std::move(arg);
    return Init_DDateTime_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

class Init_DDateTime_minute
{
public:
  explicit Init_DDateTime_minute(::j2735_v2x_msgs::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_second minute(::j2735_v2x_msgs::msg::DDateTime::_minute_type arg)
  {
    msg_.minute = std::move(arg);
    return Init_DDateTime_second(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

class Init_DDateTime_hour
{
public:
  explicit Init_DDateTime_hour(::j2735_v2x_msgs::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_minute hour(::j2735_v2x_msgs::msg::DDateTime::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_DDateTime_minute(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

class Init_DDateTime_day
{
public:
  explicit Init_DDateTime_day(::j2735_v2x_msgs::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_hour day(::j2735_v2x_msgs::msg::DDateTime::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_DDateTime_hour(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

class Init_DDateTime_month
{
public:
  explicit Init_DDateTime_month(::j2735_v2x_msgs::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_day month(::j2735_v2x_msgs::msg::DDateTime::_month_type arg)
  {
    msg_.month = std::move(arg);
    return Init_DDateTime_day(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

class Init_DDateTime_year
{
public:
  explicit Init_DDateTime_year(::j2735_v2x_msgs::msg::DDateTime & msg)
  : msg_(msg)
  {}
  Init_DDateTime_month year(::j2735_v2x_msgs::msg::DDateTime::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_DDateTime_month(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

class Init_DDateTime_presence_vector
{
public:
  Init_DDateTime_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DDateTime_year presence_vector(::j2735_v2x_msgs::msg::DDateTime::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_DDateTime_year(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::DDateTime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::DDateTime>()
{
  return j2735_v2x_msgs::msg::builder::Init_DDateTime_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__D_DATE_TIME__BUILDER_HPP_
