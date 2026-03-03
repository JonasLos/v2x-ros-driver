// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeSetXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_set_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_set_xy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeSetXY_node_set_xy
{
public:
  Init_NodeSetXY_node_set_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::NodeSetXY node_set_xy(::j2735_v2x_msgs::msg::NodeSetXY::_node_set_xy_type arg)
  {
    msg_.node_set_xy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeSetXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeSetXY>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeSetXY_node_set_xy();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_SET_XY__BUILDER_HPP_
