// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/OverlayLaneList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/overlay_lane_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__OVERLAY_LANE_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__OVERLAY_LANE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/overlay_lane_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_OverlayLaneList_overlay_lane_list
{
public:
  Init_OverlayLaneList_overlay_lane_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::OverlayLaneList overlay_lane_list(::j2735_v2x_msgs::msg::OverlayLaneList::_overlay_lane_list_type arg)
  {
    msg_.overlay_lane_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::OverlayLaneList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::OverlayLaneList>()
{
  return j2735_v2x_msgs::msg::builder::Init_OverlayLaneList_overlay_lane_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OVERLAY_LANE_LIST__BUILDER_HPP_
