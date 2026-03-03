// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/EnabledLaneList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/enabled_lane_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/enabled_lane_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_EnabledLaneList_lane_id_list
{
public:
  Init_EnabledLaneList_lane_id_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::EnabledLaneList lane_id_list(::j2735_v2x_msgs::msg::EnabledLaneList::_lane_id_list_type arg)
  {
    msg_.lane_id_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EnabledLaneList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::EnabledLaneList>()
{
  return j2735_v2x_msgs::msg::builder::Init_EnabledLaneList_lane_id_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ENABLED_LANE_LIST__BUILDER_HPP_
