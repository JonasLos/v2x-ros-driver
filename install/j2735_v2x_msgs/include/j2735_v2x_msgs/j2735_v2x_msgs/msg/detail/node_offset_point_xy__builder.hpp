// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeOffsetPointXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_offset_point_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_offset_point_xy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeOffsetPointXY_node_latlon
{
public:
  explicit Init_NodeOffsetPointXY_node_latlon(::j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY node_latlon(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_node_latlon_type arg)
  {
    msg_.node_latlon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_node_xy6
{
public:
  explicit Init_NodeOffsetPointXY_node_xy6(::j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_node_latlon node_xy6(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_node_xy6_type arg)
  {
    msg_.node_xy6 = std::move(arg);
    return Init_NodeOffsetPointXY_node_latlon(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_node_xy5
{
public:
  explicit Init_NodeOffsetPointXY_node_xy5(::j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_node_xy6 node_xy5(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_node_xy5_type arg)
  {
    msg_.node_xy5 = std::move(arg);
    return Init_NodeOffsetPointXY_node_xy6(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_node_xy4
{
public:
  explicit Init_NodeOffsetPointXY_node_xy4(::j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_node_xy5 node_xy4(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_node_xy4_type arg)
  {
    msg_.node_xy4 = std::move(arg);
    return Init_NodeOffsetPointXY_node_xy5(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_node_xy3
{
public:
  explicit Init_NodeOffsetPointXY_node_xy3(::j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_node_xy4 node_xy3(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_node_xy3_type arg)
  {
    msg_.node_xy3 = std::move(arg);
    return Init_NodeOffsetPointXY_node_xy4(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_node_xy2
{
public:
  explicit Init_NodeOffsetPointXY_node_xy2(::j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_node_xy3 node_xy2(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_node_xy2_type arg)
  {
    msg_.node_xy2 = std::move(arg);
    return Init_NodeOffsetPointXY_node_xy3(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_node_xy1
{
public:
  explicit Init_NodeOffsetPointXY_node_xy1(::j2735_v2x_msgs::msg::NodeOffsetPointXY & msg)
  : msg_(msg)
  {}
  Init_NodeOffsetPointXY_node_xy2 node_xy1(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_node_xy1_type arg)
  {
    msg_.node_xy1 = std::move(arg);
    return Init_NodeOffsetPointXY_node_xy2(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

class Init_NodeOffsetPointXY_choice
{
public:
  Init_NodeOffsetPointXY_choice()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeOffsetPointXY_node_xy1 choice(::j2735_v2x_msgs::msg::NodeOffsetPointXY::_choice_type arg)
  {
    msg_.choice = std::move(arg);
    return Init_NodeOffsetPointXY_node_xy1(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeOffsetPointXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeOffsetPointXY>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeOffsetPointXY_choice();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_OFFSET_POINT_XY__BUILDER_HPP_
