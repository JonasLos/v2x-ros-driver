// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_direction.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneDirection_lane_direction
{
public:
  Init_LaneDirection_lane_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::LaneDirection lane_direction(::j2735_v2x_msgs::msg::LaneDirection::_lane_direction_type arg)
  {
    msg_.lane_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneDirection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneDirection>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneDirection_lane_direction();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DIRECTION__BUILDER_HPP_
