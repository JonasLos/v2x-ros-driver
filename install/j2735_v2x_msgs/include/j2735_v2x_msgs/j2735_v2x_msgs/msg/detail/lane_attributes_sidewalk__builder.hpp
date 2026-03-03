// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneAttributesSidewalk.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_attributes_sidewalk.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_attributes_sidewalk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneAttributesSidewalk_lane_attributes_sidewalk
{
public:
  Init_LaneAttributesSidewalk_lane_attributes_sidewalk()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::LaneAttributesSidewalk lane_attributes_sidewalk(::j2735_v2x_msgs::msg::LaneAttributesSidewalk::_lane_attributes_sidewalk_type arg)
  {
    msg_.lane_attributes_sidewalk = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneAttributesSidewalk msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneAttributesSidewalk>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneAttributesSidewalk_lane_attributes_sidewalk();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_SIDEWALK__BUILDER_HPP_
