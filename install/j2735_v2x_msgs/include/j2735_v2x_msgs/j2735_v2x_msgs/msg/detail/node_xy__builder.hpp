// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_xy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeXY_attributes_exists
{
public:
  explicit Init_NodeXY_attributes_exists(::j2735_v2x_msgs::msg::NodeXY & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::NodeXY attributes_exists(::j2735_v2x_msgs::msg::NodeXY::_attributes_exists_type arg)
  {
    msg_.attributes_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeXY msg_;
};

class Init_NodeXY_attributes
{
public:
  explicit Init_NodeXY_attributes(::j2735_v2x_msgs::msg::NodeXY & msg)
  : msg_(msg)
  {}
  Init_NodeXY_attributes_exists attributes(::j2735_v2x_msgs::msg::NodeXY::_attributes_type arg)
  {
    msg_.attributes = std::move(arg);
    return Init_NodeXY_attributes_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeXY msg_;
};

class Init_NodeXY_delta
{
public:
  Init_NodeXY_delta()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeXY_attributes delta(::j2735_v2x_msgs::msg::NodeXY::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_NodeXY_attributes(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeXY>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeXY_delta();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_XY__BUILDER_HPP_
