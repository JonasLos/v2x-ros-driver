// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/NodeAttributeSetXY.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/node_attribute_set_xy.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/node_attribute_set_xy__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeAttributeSetXY_d_elevation_exists
{
public:
  explicit Init_NodeAttributeSetXY_d_elevation_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY d_elevation_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_d_elevation_exists_type arg)
  {
    msg_.d_elevation_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_d_elevation
{
public:
  explicit Init_NodeAttributeSetXY_d_elevation(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_elevation_exists d_elevation(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_d_elevation_type arg)
  {
    msg_.d_elevation = std::move(arg);
    return Init_NodeAttributeSetXY_d_elevation_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_d_width_exists
{
public:
  explicit Init_NodeAttributeSetXY_d_width_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_elevation d_width_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_d_width_exists_type arg)
  {
    msg_.d_width_exists = std::move(arg);
    return Init_NodeAttributeSetXY_d_elevation(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_d_width
{
public:
  explicit Init_NodeAttributeSetXY_d_width(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_width_exists d_width(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_d_width_type arg)
  {
    msg_.d_width = std::move(arg);
    return Init_NodeAttributeSetXY_d_width_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_data_exists
{
public:
  explicit Init_NodeAttributeSetXY_data_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_d_width data_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_data_exists_type arg)
  {
    msg_.data_exists = std::move(arg);
    return Init_NodeAttributeSetXY_d_width(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_data
{
public:
  explicit Init_NodeAttributeSetXY_data(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_data_exists data(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_NodeAttributeSetXY_data_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_enabled_exists
{
public:
  explicit Init_NodeAttributeSetXY_enabled_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_data enabled_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_enabled_exists_type arg)
  {
    msg_.enabled_exists = std::move(arg);
    return Init_NodeAttributeSetXY_data(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_enabled
{
public:
  explicit Init_NodeAttributeSetXY_enabled(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_enabled_exists enabled(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_NodeAttributeSetXY_enabled_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_disabled_exists
{
public:
  explicit Init_NodeAttributeSetXY_disabled_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_enabled disabled_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_disabled_exists_type arg)
  {
    msg_.disabled_exists = std::move(arg);
    return Init_NodeAttributeSetXY_enabled(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_disabled
{
public:
  explicit Init_NodeAttributeSetXY_disabled(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_disabled_exists disabled(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_disabled_type arg)
  {
    msg_.disabled = std::move(arg);
    return Init_NodeAttributeSetXY_disabled_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_local_node_exists
{
public:
  explicit Init_NodeAttributeSetXY_local_node_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY & msg)
  : msg_(msg)
  {}
  Init_NodeAttributeSetXY_disabled local_node_exists(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_local_node_exists_type arg)
  {
    msg_.local_node_exists = std::move(arg);
    return Init_NodeAttributeSetXY_disabled(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

class Init_NodeAttributeSetXY_local_node
{
public:
  Init_NodeAttributeSetXY_local_node()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeAttributeSetXY_local_node_exists local_node(::j2735_v2x_msgs::msg::NodeAttributeSetXY::_local_node_type arg)
  {
    msg_.local_node = std::move(arg);
    return Init_NodeAttributeSetXY_local_node_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::NodeAttributeSetXY msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::NodeAttributeSetXY>()
{
  return j2735_v2x_msgs::msg::builder::Init_NodeAttributeSetXY_local_node();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_SET_XY__BUILDER_HPP_
