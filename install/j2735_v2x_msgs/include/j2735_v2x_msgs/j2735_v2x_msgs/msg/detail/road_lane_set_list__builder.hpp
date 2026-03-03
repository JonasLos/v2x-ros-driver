// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RoadLaneSetList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_lane_set_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/road_lane_set_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadLaneSetList_road_lane_set_list
{
public:
  Init_RoadLaneSetList_road_lane_set_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::RoadLaneSetList road_lane_set_list(::j2735_v2x_msgs::msg::RoadLaneSetList::_road_lane_set_list_type arg)
  {
    msg_.road_lane_set_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RoadLaneSetList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RoadLaneSetList>()
{
  return j2735_v2x_msgs::msg::builder::Init_RoadLaneSetList_road_lane_set_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_LANE_SET_LIST__BUILDER_HPP_
