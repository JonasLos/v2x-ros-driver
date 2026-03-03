// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeAttributeXY_node_attribute_xy
{
public:
  Init_NodeAttributeXY_node_attribute_xy()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::NodeAttributeXY node_attribute_xy(::j2735_v2x_msgs::msg::NodeAttributeXY::_node_attribute_xy_type arg)
  {
    msg_.node_attribute_xy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeAttributeXY>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeAttributeXY_node_attribute_xy();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__BUILDER_HPP_
