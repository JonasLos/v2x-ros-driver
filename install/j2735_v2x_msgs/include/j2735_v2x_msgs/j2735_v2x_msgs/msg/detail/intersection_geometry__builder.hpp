// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_geometry.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/intersection_geometry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionGeometry_preempt_priority_data_exists
{
public:
  explicit Init_IntersectionGeometry_preempt_priority_data_exists(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::IntersectionGeometry preempt_priority_data_exists(::j2735_v2x_msgs::msg::IntersectionGeometry::_preempt_priority_data_exists_type arg)
  {
    msg_.preempt_priority_data_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_preempt_priority_data
{
public:
  explicit Init_IntersectionGeometry_preempt_priority_data(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_preempt_priority_data_exists preempt_priority_data(::j2735_v2x_msgs::msg::IntersectionGeometry::_preempt_priority_data_type arg)
  {
    msg_.preempt_priority_data = std::move(arg);
    return Init_IntersectionGeometry_preempt_priority_data_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_lane_set
{
public:
  explicit Init_IntersectionGeometry_lane_set(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_preempt_priority_data lane_set(::j2735_v2x_msgs::msg::IntersectionGeometry::_lane_set_type arg)
  {
    msg_.lane_set = std::move(arg);
    return Init_IntersectionGeometry_preempt_priority_data(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_speed_limits_exists
{
public:
  explicit Init_IntersectionGeometry_speed_limits_exists(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_lane_set speed_limits_exists(::j2735_v2x_msgs::msg::IntersectionGeometry::_speed_limits_exists_type arg)
  {
    msg_.speed_limits_exists = std::move(arg);
    return Init_IntersectionGeometry_lane_set(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_speed_limits
{
public:
  explicit Init_IntersectionGeometry_speed_limits(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_speed_limits_exists speed_limits(::j2735_v2x_msgs::msg::IntersectionGeometry::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return Init_IntersectionGeometry_speed_limits_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_lane_width_exists
{
public:
  explicit Init_IntersectionGeometry_lane_width_exists(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_speed_limits lane_width_exists(::j2735_v2x_msgs::msg::IntersectionGeometry::_lane_width_exists_type arg)
  {
    msg_.lane_width_exists = std::move(arg);
    return Init_IntersectionGeometry_speed_limits(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_lane_width
{
public:
  explicit Init_IntersectionGeometry_lane_width(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_lane_width_exists lane_width(::j2735_v2x_msgs::msg::IntersectionGeometry::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_IntersectionGeometry_lane_width_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_ref_point
{
public:
  explicit Init_IntersectionGeometry_ref_point(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_lane_width ref_point(::j2735_v2x_msgs::msg::IntersectionGeometry::_ref_point_type arg)
  {
    msg_.ref_point = std::move(arg);
    return Init_IntersectionGeometry_lane_width(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_revision
{
public:
  explicit Init_IntersectionGeometry_revision(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_ref_point revision(::j2735_v2x_msgs::msg::IntersectionGeometry::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_IntersectionGeometry_ref_point(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_id
{
public:
  explicit Init_IntersectionGeometry_id(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_revision id(::j2735_v2x_msgs::msg::IntersectionGeometry::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionGeometry_revision(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_name_exists
{
public:
  explicit Init_IntersectionGeometry_name_exists(::j2735_v2x_msgs::msg::IntersectionGeometry & msg)
  : msg_(msg)
  {}
  Init_IntersectionGeometry_id name_exists(::j2735_v2x_msgs::msg::IntersectionGeometry::_name_exists_type arg)
  {
    msg_.name_exists = std::move(arg);
    return Init_IntersectionGeometry_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

class Init_IntersectionGeometry_name
{
public:
  Init_IntersectionGeometry_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionGeometry_name_exists name(::j2735_v2x_msgs::msg::IntersectionGeometry::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IntersectionGeometry_name_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionGeometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::IntersectionGeometry>()
{
  return j2735_v2x_msgs::msg::builder::Init_IntersectionGeometry_name();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__BUILDER_HPP_
