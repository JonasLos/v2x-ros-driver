// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/LaneDataAttributeList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_data_attribute_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneDataAttributeList_lane_attribute_list
{
public:
  Init_LaneDataAttributeList_lane_attribute_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::LaneDataAttributeList lane_attribute_list(::j2735_v2x_msgs::msg::LaneDataAttributeList::_lane_attribute_list_type arg)
  {
    msg_.lane_attribute_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::LaneDataAttributeList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::LaneDataAttributeList>()
{
  return j2735_v2x_msgs::msg::builder::Init_LaneDataAttributeList_lane_attribute_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE_LIST__BUILDER_HPP_
