// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerHistoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_history_point.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/trailer_history_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerHistoryPoint_heading
{
public:
  explicit Init_TrailerHistoryPoint_heading(::j2735_v2x_msgs::msg::TrailerHistoryPoint & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrailerHistoryPoint heading(::j2735_v2x_msgs::msg::TrailerHistoryPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerHistoryPoint msg_;
};

class Init_TrailerHistoryPoint_elevation_offset
{
public:
  explicit Init_TrailerHistoryPoint_elevation_offset(::j2735_v2x_msgs::msg::TrailerHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrailerHistoryPoint_heading elevation_offset(::j2735_v2x_msgs::msg::TrailerHistoryPoint::_elevation_offset_type arg)
  {
    msg_.elevation_offset = std::move(arg);
    return Init_TrailerHistoryPoint_heading(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerHistoryPoint msg_;
};

class Init_TrailerHistoryPoint_position_offset
{
public:
  explicit Init_TrailerHistoryPoint_position_offset(::j2735_v2x_msgs::msg::TrailerHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrailerHistoryPoint_elevation_offset position_offset(::j2735_v2x_msgs::msg::TrailerHistoryPoint::_position_offset_type arg)
  {
    msg_.position_offset = std::move(arg);
    return Init_TrailerHistoryPoint_elevation_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerHistoryPoint msg_;
};

class Init_TrailerHistoryPoint_time_offset
{
public:
  explicit Init_TrailerHistoryPoint_time_offset(::j2735_v2x_msgs::msg::TrailerHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrailerHistoryPoint_position_offset time_offset(::j2735_v2x_msgs::msg::TrailerHistoryPoint::_time_offset_type arg)
  {
    msg_.time_offset = std::move(arg);
    return Init_TrailerHistoryPoint_position_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerHistoryPoint msg_;
};

class Init_TrailerHistoryPoint_pivot_angle
{
public:
  explicit Init_TrailerHistoryPoint_pivot_angle(::j2735_v2x_msgs::msg::TrailerHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrailerHistoryPoint_time_offset pivot_angle(::j2735_v2x_msgs::msg::TrailerHistoryPoint::_pivot_angle_type arg)
  {
    msg_.pivot_angle = std::move(arg);
    return Init_TrailerHistoryPoint_time_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerHistoryPoint msg_;
};

class Init_TrailerHistoryPoint_presence_vector
{
public:
  Init_TrailerHistoryPoint_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrailerHistoryPoint_pivot_angle presence_vector(::j2735_v2x_msgs::msg::TrailerHistoryPoint::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_TrailerHistoryPoint_pivot_angle(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerHistoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrailerHistoryPoint>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrailerHistoryPoint_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_HISTORY_POINT__BUILDER_HPP_
