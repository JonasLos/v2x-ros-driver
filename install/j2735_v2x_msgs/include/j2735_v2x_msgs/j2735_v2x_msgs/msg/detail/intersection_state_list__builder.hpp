// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionStateList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_state_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE_LIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/intersection_state_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionStateList_intersection_state_list
{
public:
  Init_IntersectionStateList_intersection_state_list()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::IntersectionStateList intersection_state_list(::j2735_v2x_msgs::msg::IntersectionStateList::_intersection_state_list_type arg)
  {
    msg_.intersection_state_list = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionStateList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::IntersectionStateList>()
{
  return j2735_v2x_msgs::msg::builder::Init_IntersectionStateList_intersection_state_list();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE_LIST__BUILDER_HPP_
