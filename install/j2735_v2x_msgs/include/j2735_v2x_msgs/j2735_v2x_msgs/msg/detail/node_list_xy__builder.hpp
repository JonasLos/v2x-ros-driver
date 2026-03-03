// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeListXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_list_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_list_xy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeListXY_computed
{
public:
  explicit Init_NodeListXY_computed(::j2735_v2x_msgs::msg::NodeListXY & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::NodeListXY computed(::j2735_v2x_msgs::msg::NodeListXY::_computed_type arg)
  {
    msg_.computed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeListXY msg_;
};

class Init_NodeListXY_nodes
{
public:
  explicit Init_NodeListXY_nodes(::j2735_v2x_msgs::msg::NodeListXY & msg)
  : msg_(msg)
  {}
  Init_NodeListXY_computed nodes(::j2735_v2x_msgs::msg::NodeListXY::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return Init_NodeListXY_computed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeListXY msg_;
};

class Init_NodeListXY_choice
{
public:
  Init_NodeListXY_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeListXY_nodes choice(::j2735_v2x_msgs::msg::NodeListXY::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_NodeListXY_nodes(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeListXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeListXY>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeListXY_choice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_LIST_XY__BUILDER_HPP_
