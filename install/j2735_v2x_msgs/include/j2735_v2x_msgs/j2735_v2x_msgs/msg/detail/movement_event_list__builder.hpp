// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MovementEventList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_event_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/movement_event_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementEventList_movement_event_list
{
public:
  Init_MovementEventList_movement_event_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::MovementEventList movement_event_list(::j2735_v2x_msgs::msg::MovementEventList::_movement_event_list_type arg)
  {
    msg_.movement_event_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementEventList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MovementEventList>()
{
  return j2735_v2x_msgs::msg::builder::Init_MovementEventList_movement_event_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_EVENT_LIST__BUILDER_HPP_
