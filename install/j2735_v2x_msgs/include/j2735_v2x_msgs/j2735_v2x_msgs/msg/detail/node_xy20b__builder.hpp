// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeXY20b.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_xy20b.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY20B__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY20B__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_xy20b__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeXY20b_y
{
public:
  explicit Init_NodeXY20b_y(::j2735_v2x_msgs::msg::NodeXY20b & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::NodeXY20b y(::j2735_v2x_msgs::msg::NodeXY20b::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeXY20b msg_;
};

class Init_NodeXY20b_x
{
public:
  Init_NodeXY20b_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeXY20b_y x(::j2735_v2x_msgs::msg::NodeXY20b::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_NodeXY20b_y(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeXY20b msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeXY20b>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeXY20b_x();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY20B__BUILDER_HPP_
