// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/intersection_state.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/intersection_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionState_maneuever_assist_list_exists
{
public:
  explicit Init_IntersectionState_maneuever_assist_list_exists(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::IntersectionState maneuever_assist_list_exists(::j2735_v2x_msgs::msg::IntersectionState::_maneuever_assist_list_exists_type arg)
  {
    msg_.maneuever_assist_list_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_maneuever_assist_list
{
public:
  explicit Init_IntersectionState_maneuever_assist_list(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_maneuever_assist_list_exists maneuever_assist_list(::j2735_v2x_msgs::msg::IntersectionState::_maneuever_assist_list_type arg)
  {
    msg_.maneuever_assist_list = std::move(arg);
    return Init_IntersectionState_maneuever_assist_list_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_states
{
public:
  explicit Init_IntersectionState_states(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_maneuever_assist_list states(::j2735_v2x_msgs::msg::IntersectionState::_states_type arg)
  {
    msg_.states = std::move(arg);
    return Init_IntersectionState_maneuever_assist_list(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_enabled_lanes_exists
{
public:
  explicit Init_IntersectionState_enabled_lanes_exists(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_states enabled_lanes_exists(::j2735_v2x_msgs::msg::IntersectionState::_enabled_lanes_exists_type arg)
  {
    msg_.enabled_lanes_exists = std::move(arg);
    return Init_IntersectionState_states(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_enabled_lanes
{
public:
  explicit Init_IntersectionState_enabled_lanes(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_enabled_lanes_exists enabled_lanes(::j2735_v2x_msgs::msg::IntersectionState::_enabled_lanes_type arg)
  {
    msg_.enabled_lanes = std::move(arg);
    return Init_IntersectionState_enabled_lanes_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_time_stamp_exists
{
public:
  explicit Init_IntersectionState_time_stamp_exists(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_enabled_lanes time_stamp_exists(::j2735_v2x_msgs::msg::IntersectionState::_time_stamp_exists_type arg)
  {
    msg_.time_stamp_exists = std::move(arg);
    return Init_IntersectionState_enabled_lanes(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_time_stamp
{
public:
  explicit Init_IntersectionState_time_stamp(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_time_stamp_exists time_stamp(::j2735_v2x_msgs::msg::IntersectionState::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_IntersectionState_time_stamp_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_moy_exists
{
public:
  explicit Init_IntersectionState_moy_exists(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_time_stamp moy_exists(::j2735_v2x_msgs::msg::IntersectionState::_moy_exists_type arg)
  {
    msg_.moy_exists = std::move(arg);
    return Init_IntersectionState_time_stamp(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_moy
{
public:
  explicit Init_IntersectionState_moy(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_moy_exists moy(::j2735_v2x_msgs::msg::IntersectionState::_moy_type arg)
  {
    msg_.moy = std::move(arg);
    return Init_IntersectionState_moy_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_status
{
public:
  explicit Init_IntersectionState_status(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_moy status(::j2735_v2x_msgs::msg::IntersectionState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_IntersectionState_moy(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_revision
{
public:
  explicit Init_IntersectionState_revision(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_status revision(::j2735_v2x_msgs::msg::IntersectionState::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_IntersectionState_status(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_id
{
public:
  explicit Init_IntersectionState_id(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_revision id(::j2735_v2x_msgs::msg::IntersectionState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionState_revision(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_name_exists
{
public:
  explicit Init_IntersectionState_name_exists(::j2735_v2x_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_id name_exists(::j2735_v2x_msgs::msg::IntersectionState::_name_exists_type arg)
  {
    msg_.name_exists = std::move(arg);
    return Init_IntersectionState_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_name
{
public:
  Init_IntersectionState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionState_name_exists name(::j2735_v2x_msgs::msg::IntersectionState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IntersectionState_name_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::IntersectionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::IntersectionState>()
{
  return j2735_v2x_msgs::msg::builder::Init_IntersectionState_name();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_
