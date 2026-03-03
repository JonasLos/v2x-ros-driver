// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/ConnectionManeuverAssist.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection_maneuver_assist.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/connection_maneuver_assist__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_ConnectionManeuverAssist_ped_bicycle_detect_exists
{
public:
  explicit Init_ConnectionManeuverAssist_ped_bicycle_detect_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist ped_bicycle_detect_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_ped_bicycle_detect_exists_type arg)
  {
    msg_.ped_bicycle_detect_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_ped_bicycle_detect
{
public:
  explicit Init_ConnectionManeuverAssist_ped_bicycle_detect(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_ped_bicycle_detect_exists ped_bicycle_detect(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_ped_bicycle_detect_type arg)
  {
    msg_.ped_bicycle_detect = std::move(arg);
    return Init_ConnectionManeuverAssist_ped_bicycle_detect_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_wait_on_stop_exists
{
public:
  explicit Init_ConnectionManeuverAssist_wait_on_stop_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_ped_bicycle_detect wait_on_stop_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_wait_on_stop_exists_type arg)
  {
    msg_.wait_on_stop_exists = std::move(arg);
    return Init_ConnectionManeuverAssist_ped_bicycle_detect(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_wait_on_stop
{
public:
  explicit Init_ConnectionManeuverAssist_wait_on_stop(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_wait_on_stop_exists wait_on_stop(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_wait_on_stop_type arg)
  {
    msg_.wait_on_stop = std::move(arg);
    return Init_ConnectionManeuverAssist_wait_on_stop_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_available_storage_length_exists
{
public:
  explicit Init_ConnectionManeuverAssist_available_storage_length_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_wait_on_stop available_storage_length_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_available_storage_length_exists_type arg)
  {
    msg_.available_storage_length_exists = std::move(arg);
    return Init_ConnectionManeuverAssist_wait_on_stop(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_available_storage_length
{
public:
  explicit Init_ConnectionManeuverAssist_available_storage_length(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_available_storage_length_exists available_storage_length(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_available_storage_length_type arg)
  {
    msg_.available_storage_length = std::move(arg);
    return Init_ConnectionManeuverAssist_available_storage_length_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_queue_length_exists
{
public:
  explicit Init_ConnectionManeuverAssist_queue_length_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_available_storage_length queue_length_exists(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_queue_length_exists_type arg)
  {
    msg_.queue_length_exists = std::move(arg);
    return Init_ConnectionManeuverAssist_available_storage_length(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_queue_length
{
public:
  explicit Init_ConnectionManeuverAssist_queue_length(::j2735_v2x_msgs::msg::ConnectionManeuverAssist & msg)
  : msg_(msg)
  {}
  Init_ConnectionManeuverAssist_queue_length_exists queue_length(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_queue_length_type arg)
  {
    msg_.queue_length = std::move(arg);
    return Init_ConnectionManeuverAssist_queue_length_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

class Init_ConnectionManeuverAssist_connection_id
{
public:
  Init_ConnectionManeuverAssist_connection_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConnectionManeuverAssist_queue_length connection_id(::j2735_v2x_msgs::msg::ConnectionManeuverAssist::_connection_id_type arg)
  {
    msg_.connection_id = std::move(arg);
    return Init_ConnectionManeuverAssist_queue_length(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::ConnectionManeuverAssist msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::ConnectionManeuverAssist>()
{
  return j2735_v2x_msgs::msg::builder::Init_ConnectionManeuverAssist_connection_id();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION_MANEUVER_ASSIST__BUILDER_HPP_
