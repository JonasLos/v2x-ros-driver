// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RoadSegmentList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_segment_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/road_segment_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadSegmentList_road_segment_list
{
public:
  Init_RoadSegmentList_road_segment_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::RoadSegmentList road_segment_list(::j2735_v2x_msgs::msg::RoadSegmentList::_road_segment_list_type arg)
  {
    msg_.road_segment_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RoadSegmentList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RoadSegmentList>()
{
  return j2735_v2x_msgs::msg::builder::Init_RoadSegmentList_road_segment_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_LIST__BUILDER_HPP_
