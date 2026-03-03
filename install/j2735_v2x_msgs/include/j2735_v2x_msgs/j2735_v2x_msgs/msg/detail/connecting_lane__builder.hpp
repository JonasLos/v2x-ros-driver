// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectingLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connecting_lane.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/connecting_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ConnectingLane_maneuver_exists
{
public:
  explicit Init_ConnectingLane_maneuver_exists(::j2735_v2x_msgs::msg::ConnectingLane & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::ConnectingLane maneuver_exists(::j2735_v2x_msgs::msg::ConnectingLane::_maneuver_exists_type arg)
  {
    msg_.maneuver_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectingLane msg_;
};

class Init_ConnectingLane_maneuver
{
public:
  explicit Init_ConnectingLane_maneuver(::j2735_v2x_msgs::msg::ConnectingLane & msg)
  : msg_(msg)
  {}
  Init_ConnectingLane_maneuver_exists maneuver(::j2735_v2x_msgs::msg::ConnectingLane::_maneuver_type arg)
  {
    msg_.maneuver = std::move(arg);
    return Init_ConnectingLane_maneuver_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectingLane msg_;
};

class Init_ConnectingLane_lane
{
public:
  Init_ConnectingLane_lane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectingLane_maneuver lane(::j2735_v2x_msgs::msg::ConnectingLane::_lane_type arg)
  {
    msg_.lane = std::move(arg);
    return Init_ConnectingLane_maneuver(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectingLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ConnectingLane>()
{
  return j2735_v2x_msgs::msg::builder::Init_ConnectingLane_lane();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTING_LANE__BUILDER_HPP_
