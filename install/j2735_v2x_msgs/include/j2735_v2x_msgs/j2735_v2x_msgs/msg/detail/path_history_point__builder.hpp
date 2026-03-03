// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/PathHistoryPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/path_history_point.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/path_history_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_PathHistoryPoint_heading
{
public:
  explicit Init_PathHistoryPoint_heading(::j2735_v2x_msgs::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::PathHistoryPoint heading(::j2735_v2x_msgs::msg::PathHistoryPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_pos_accuracy
{
public:
  explicit Init_PathHistoryPoint_pos_accuracy(::j2735_v2x_msgs::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_heading pos_accuracy(::j2735_v2x_msgs::msg::PathHistoryPoint::_pos_accuracy_type arg)
  {
    msg_.pos_accuracy = std::move(arg);
    return Init_PathHistoryPoint_heading(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_speed
{
public:
  explicit Init_PathHistoryPoint_speed(::j2735_v2x_msgs::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_pos_accuracy speed(::j2735_v2x_msgs::msg::PathHistoryPoint::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_PathHistoryPoint_pos_accuracy(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_time_offset
{
public:
  explicit Init_PathHistoryPoint_time_offset(::j2735_v2x_msgs::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_speed time_offset(::j2735_v2x_msgs::msg::PathHistoryPoint::_time_offset_type arg)
  {
    msg_.time_offset = std::move(arg);
    return Init_PathHistoryPoint_speed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_elevation_offset
{
public:
  explicit Init_PathHistoryPoint_elevation_offset(::j2735_v2x_msgs::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_time_offset elevation_offset(::j2735_v2x_msgs::msg::PathHistoryPoint::_elevation_offset_type arg)
  {
    msg_.elevation_offset = std::move(arg);
    return Init_PathHistoryPoint_time_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_lon_offset
{
public:
  explicit Init_PathHistoryPoint_lon_offset(::j2735_v2x_msgs::msg::PathHistoryPoint & msg)
  : msg_(msg)
  {}
  Init_PathHistoryPoint_elevation_offset lon_offset(::j2735_v2x_msgs::msg::PathHistoryPoint::_lon_offset_type arg)
  {
    msg_.lon_offset = std::move(arg);
    return Init_PathHistoryPoint_elevation_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPoint msg_;
};

class Init_PathHistoryPoint_lat_offset
{
public:
  Init_PathHistoryPoint_lat_offset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathHistoryPoint_lon_offset lat_offset(::j2735_v2x_msgs::msg::PathHistoryPoint::_lat_offset_type arg)
  {
    msg_.lat_offset = std::move(arg);
    return Init_PathHistoryPoint_lon_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::PathHistoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::PathHistoryPoint>()
{
  return j2735_v2x_msgs::msg::builder::Init_PathHistoryPoint_lat_offset();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_HISTORY_POINT__BUILDER_HPP_
