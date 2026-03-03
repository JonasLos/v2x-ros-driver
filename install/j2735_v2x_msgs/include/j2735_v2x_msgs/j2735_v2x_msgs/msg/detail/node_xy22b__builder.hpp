// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeXY22b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_xy22b.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY22B__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY22B__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_xy22b__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeXY22b_y
{
public:
  explicit Init_NodeXY22b_y(::j2735_v2x_msgs::msg::NodeXY22b & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::NodeXY22b y(::j2735_v2x_msgs::msg::NodeXY22b::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeXY22b msg_;
};

class Init_NodeXY22b_x
{
public:
  Init_NodeXY22b_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeXY22b_y x(::j2735_v2x_msgs::msg::NodeXY22b::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NodeXY22b_y(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeXY22b msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeXY22b>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeXY22b_x();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY22B__BUILDER_HPP_
