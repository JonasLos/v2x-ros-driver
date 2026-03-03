// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/Connection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/connection.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/connection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_Connection_connection_id_exists
{
public:
  explicit Init_Connection_connection_id_exists(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::Connection connection_id_exists(::j2735_v2x_msgs::msg::Connection::_connection_id_exists_type arg)
  {
    msg_.connection_id_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_connection_id
{
public:
  explicit Init_Connection_connection_id(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_connection_id_exists connection_id(::j2735_v2x_msgs::msg::Connection::_connection_id_type arg)
  {
    msg_.connection_id = std::move(arg);
    return Init_Connection_connection_id_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_user_class_exists
{
public:
  explicit Init_Connection_user_class_exists(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_connection_id user_class_exists(::j2735_v2x_msgs::msg::Connection::_user_class_exists_type arg)
  {
    msg_.user_class_exists = std::move(arg);
    return Init_Connection_connection_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_user_class
{
public:
  explicit Init_Connection_user_class(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_user_class_exists user_class(::j2735_v2x_msgs::msg::Connection::_user_class_type arg)
  {
    msg_.user_class = std::move(arg);
    return Init_Connection_user_class_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_signal_group_exists
{
public:
  explicit Init_Connection_signal_group_exists(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_user_class signal_group_exists(::j2735_v2x_msgs::msg::Connection::_signal_group_exists_type arg)
  {
    msg_.signal_group_exists = std::move(arg);
    return Init_Connection_user_class(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_signal_group
{
public:
  explicit Init_Connection_signal_group(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_signal_group_exists signal_group(::j2735_v2x_msgs::msg::Connection::_signal_group_type arg)
  {
    msg_.signal_group = std::move(arg);
    return Init_Connection_signal_group_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_remote_intersection_exists
{
public:
  explicit Init_Connection_remote_intersection_exists(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_signal_group remote_intersection_exists(::j2735_v2x_msgs::msg::Connection::_remote_intersection_exists_type arg)
  {
    msg_.remote_intersection_exists = std::move(arg);
    return Init_Connection_signal_group(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_remote_intersection
{
public:
  explicit Init_Connection_remote_intersection(::j2735_v2x_msgs::msg::Connection & msg)
  : msg_(msg)
  {}
  Init_Connection_remote_intersection_exists remote_intersection(::j2735_v2x_msgs::msg::Connection::_remote_intersection_type arg)
  {
    msg_.remote_intersection = std::move(arg);
    return Init_Connection_remote_intersection_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

class Init_Connection_connecting_lane
{
public:
  Init_Connection_connecting_lane()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Connection_remote_intersection connecting_lane(::j2735_v2x_msgs::msg::Connection::_connecting_lane_type arg)
  {
    msg_.connecting_lane = std::move(arg);
    return Init_Connection_remote_intersection(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::Connection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::Connection>()
{
  return j2735_v2x_msgs::msg::builder::Init_Connection_connecting_lane();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__CONNECTION__BUILDER_HPP_
