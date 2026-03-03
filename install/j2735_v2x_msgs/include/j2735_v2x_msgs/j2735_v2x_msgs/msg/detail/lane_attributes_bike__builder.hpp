// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributesBike.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_bike.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_attributes_bike__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneAttributesBike_lane_attributes_bike
{
public:
  Init_LaneAttributesBike_lane_attributes_bike()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::LaneAttributesBike lane_attributes_bike(::j2735_v2x_msgs::msg::LaneAttributesBike::_lane_attributes_bike_type arg)
  {
    msg_.lane_attributes_bike = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneAttributesBike msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneAttributesBike>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneAttributesBike_lane_attributes_bike();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_BIKE__BUILDER_HPP_
