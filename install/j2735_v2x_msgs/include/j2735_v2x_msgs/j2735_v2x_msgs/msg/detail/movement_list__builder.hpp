// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MovementList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/movement_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/movement_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementList_movement_list
{
public:
  Init_MovementList_movement_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::MovementList movement_list(::j2735_v2x_msgs::msg::MovementList::_movement_list_type arg)
  {
    msg_.movement_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MovementList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MovementList>()
{
  return j2735_v2x_msgs::msg::builder::Init_MovementList_movement_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MOVEMENT_LIST__BUILDER_HPP_
