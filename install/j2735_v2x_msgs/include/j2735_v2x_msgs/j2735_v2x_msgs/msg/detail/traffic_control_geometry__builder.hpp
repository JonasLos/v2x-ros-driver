// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_geometry.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/traffic_control_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlGeometry_nodes
{
public:
  explicit Init_TrafficControlGeometry_nodes(::j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrafficControlGeometry nodes(::j2735_v2x_msgs::msg::TrafficControlGeometry::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

class Init_TrafficControlGeometry_heading
{
public:
  explicit Init_TrafficControlGeometry_heading(::j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
  : msg_(msg)
  {}
  Init_TrafficControlGeometry_nodes heading(::j2735_v2x_msgs::msg::TrafficControlGeometry::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_TrafficControlGeometry_nodes(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

class Init_TrafficControlGeometry_refelv
{
public:
  explicit Init_TrafficControlGeometry_refelv(::j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
  : msg_(msg)
  {}
  Init_TrafficControlGeometry_heading refelv(::j2735_v2x_msgs::msg::TrafficControlGeometry::_refelv_type arg)
  {
    msg_.refelv = std::move(arg);
    return Init_TrafficControlGeometry_heading(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

class Init_TrafficControlGeometry_reflat
{
public:
  explicit Init_TrafficControlGeometry_reflat(::j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
  : msg_(msg)
  {}
  Init_TrafficControlGeometry_refelv reflat(::j2735_v2x_msgs::msg::TrafficControlGeometry::_reflat_type arg)
  {
    msg_.reflat = std::move(arg);
    return Init_TrafficControlGeometry_refelv(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

class Init_TrafficControlGeometry_reflon
{
public:
  explicit Init_TrafficControlGeometry_reflon(::j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
  : msg_(msg)
  {}
  Init_TrafficControlGeometry_reflat reflon(::j2735_v2x_msgs::msg::TrafficControlGeometry::_reflon_type arg)
  {
    msg_.reflon = std::move(arg);
    return Init_TrafficControlGeometry_reflat(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

class Init_TrafficControlGeometry_reftime
{
public:
  explicit Init_TrafficControlGeometry_reftime(::j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
  : msg_(msg)
  {}
  Init_TrafficControlGeometry_reflon reftime(::j2735_v2x_msgs::msg::TrafficControlGeometry::_reftime_type arg)
  {
    msg_.reftime = std::move(arg);
    return Init_TrafficControlGeometry_reflon(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

class Init_TrafficControlGeometry_datum
{
public:
  explicit Init_TrafficControlGeometry_datum(::j2735_v2x_msgs::msg::TrafficControlGeometry & msg)
  : msg_(msg)
  {}
  Init_TrafficControlGeometry_reftime datum(::j2735_v2x_msgs::msg::TrafficControlGeometry::_datum_type arg)
  {
    msg_.datum = std::move(arg);
    return Init_TrafficControlGeometry_reftime(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

class Init_TrafficControlGeometry_proj
{
public:
  Init_TrafficControlGeometry_proj()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlGeometry_datum proj(::j2735_v2x_msgs::msg::TrafficControlGeometry::_proj_type arg)
  {
    msg_.proj = std::move(arg);
    return Init_TrafficControlGeometry_datum(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrafficControlGeometry>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrafficControlGeometry_proj();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_GEOMETRY__BUILDER_HPP_
