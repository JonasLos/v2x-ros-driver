// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ManeuverAssistList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/maneuver_assist_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/maneuver_assist_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ManeuverAssistList_connection_maneuver_assist_list
{
public:
  Init_ManeuverAssistList_connection_maneuver_assist_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::ManeuverAssistList connection_maneuver_assist_list(::j2735_v2x_msgs::msg::ManeuverAssistList::_connection_maneuver_assist_list_type arg)
  {
    msg_.connection_maneuver_assist_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ManeuverAssistList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ManeuverAssistList>()
{
  return j2735_v2x_msgs::msg::builder::Init_ManeuverAssistList_connection_maneuver_assist_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MANEUVER_ASSIST_LIST__BUILDER_HPP_
