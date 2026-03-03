// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/generic_lane.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/generic_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_GenericLane_overlay_lane_list_exists
{
public:
  explicit Init_GenericLane_overlay_lane_list_exists(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::GenericLane overlay_lane_list_exists(::j2735_v2x_msgs::msg::GenericLane::_overlay_lane_list_exists_type arg)
  {
    msg_.overlay_lane_list_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_overlay_lane_list
{
public:
  explicit Init_GenericLane_overlay_lane_list(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_overlay_lane_list_exists overlay_lane_list(::j2735_v2x_msgs::msg::GenericLane::_overlay_lane_list_type arg)
  {
    msg_.overlay_lane_list = std::move(arg);
    return Init_GenericLane_overlay_lane_list_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_connects_to_exists
{
public:
  explicit Init_GenericLane_connects_to_exists(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_overlay_lane_list connects_to_exists(::j2735_v2x_msgs::msg::GenericLane::_connects_to_exists_type arg)
  {
    msg_.connects_to_exists = std::move(arg);
    return Init_GenericLane_overlay_lane_list(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_connects_to
{
public:
  explicit Init_GenericLane_connects_to(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_connects_to_exists connects_to(::j2735_v2x_msgs::msg::GenericLane::_connects_to_type arg)
  {
    msg_.connects_to = std::move(arg);
    return Init_GenericLane_connects_to_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_node_list
{
public:
  explicit Init_GenericLane_node_list(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_connects_to node_list(::j2735_v2x_msgs::msg::GenericLane::_node_list_type arg)
  {
    msg_.node_list = std::move(arg);
    return Init_GenericLane_connects_to(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_maneuvers_exists
{
public:
  explicit Init_GenericLane_maneuvers_exists(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_node_list maneuvers_exists(::j2735_v2x_msgs::msg::GenericLane::_maneuvers_exists_type arg)
  {
    msg_.maneuvers_exists = std::move(arg);
    return Init_GenericLane_node_list(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_maneuvers
{
public:
  explicit Init_GenericLane_maneuvers(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_maneuvers_exists maneuvers(::j2735_v2x_msgs::msg::GenericLane::_maneuvers_type arg)
  {
    msg_.maneuvers = std::move(arg);
    return Init_GenericLane_maneuvers_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_lane_attributes
{
public:
  explicit Init_GenericLane_lane_attributes(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_maneuvers lane_attributes(::j2735_v2x_msgs::msg::GenericLane::_lane_attributes_type arg)
  {
    msg_.lane_attributes = std::move(arg);
    return Init_GenericLane_maneuvers(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_egress_approach_exists
{
public:
  explicit Init_GenericLane_egress_approach_exists(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_lane_attributes egress_approach_exists(::j2735_v2x_msgs::msg::GenericLane::_egress_approach_exists_type arg)
  {
    msg_.egress_approach_exists = std::move(arg);
    return Init_GenericLane_lane_attributes(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_egress_approach
{
public:
  explicit Init_GenericLane_egress_approach(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_egress_approach_exists egress_approach(::j2735_v2x_msgs::msg::GenericLane::_egress_approach_type arg)
  {
    msg_.egress_approach = std::move(arg);
    return Init_GenericLane_egress_approach_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_ingress_approach_exists
{
public:
  explicit Init_GenericLane_ingress_approach_exists(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_egress_approach ingress_approach_exists(::j2735_v2x_msgs::msg::GenericLane::_ingress_approach_exists_type arg)
  {
    msg_.ingress_approach_exists = std::move(arg);
    return Init_GenericLane_egress_approach(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_ingress_approach
{
public:
  explicit Init_GenericLane_ingress_approach(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_ingress_approach_exists ingress_approach(::j2735_v2x_msgs::msg::GenericLane::_ingress_approach_type arg)
  {
    msg_.ingress_approach = std::move(arg);
    return Init_GenericLane_ingress_approach_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_name_exists
{
public:
  explicit Init_GenericLane_name_exists(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_ingress_approach name_exists(::j2735_v2x_msgs::msg::GenericLane::_name_exists_type arg)
  {
    msg_.name_exists = std::move(arg);
    return Init_GenericLane_ingress_approach(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_name
{
public:
  explicit Init_GenericLane_name(::j2735_v2x_msgs::msg::GenericLane & msg)
  : msg_(msg)
  {}
  Init_GenericLane_name_exists name(::j2735_v2x_msgs::msg::GenericLane::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GenericLane_name_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

class Init_GenericLane_lane_id
{
public:
  Init_GenericLane_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenericLane_name lane_id(::j2735_v2x_msgs::msg::GenericLane::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_GenericLane_name(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::GenericLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::GenericLane>()
{
  return j2735_v2x_msgs::msg::builder::Init_GenericLane_lane_id();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GENERIC_LANE__BUILDER_HPP_
