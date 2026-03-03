// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrafficControlMessageV01.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/traffic_control_message_v01.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/traffic_control_message_v01__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficControlMessageV01_geometry_exists
{
public:
  explicit Init_TrafficControlMessageV01_geometry_exists(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 geometry_exists(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_geometry_exists_type arg)
  {
    msg_.geometry_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_geometry
{
public:
  explicit Init_TrafficControlMessageV01_geometry(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_geometry_exists geometry(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return Init_TrafficControlMessageV01_geometry_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_params_exists
{
public:
  explicit Init_TrafficControlMessageV01_params_exists(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_geometry params_exists(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_params_exists_type arg)
  {
    msg_.params_exists = std::move(arg);
    return Init_TrafficControlMessageV01_geometry(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_params
{
public:
  explicit Init_TrafficControlMessageV01_params(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_params_exists params(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_TrafficControlMessageV01_params_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_package_exists
{
public:
  explicit Init_TrafficControlMessageV01_package_exists(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_params package_exists(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_package_exists_type arg)
  {
    msg_.package_exists = std::move(arg);
    return Init_TrafficControlMessageV01_params(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_package
{
public:
  explicit Init_TrafficControlMessageV01_package(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_package_exists package(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_package_type arg)
  {
    msg_.package = std::move(arg);
    return Init_TrafficControlMessageV01_package_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_updated
{
public:
  explicit Init_TrafficControlMessageV01_updated(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_package updated(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_updated_type arg)
  {
    msg_.updated = std::move(arg);
    return Init_TrafficControlMessageV01_package(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_id
{
public:
  explicit Init_TrafficControlMessageV01_id(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_updated id(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_TrafficControlMessageV01_updated(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_msgnum
{
public:
  explicit Init_TrafficControlMessageV01_msgnum(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_id msgnum(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_msgnum_type arg)
  {
    msg_.msgnum = std::move(arg);
    return Init_TrafficControlMessageV01_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_msgtot
{
public:
  explicit Init_TrafficControlMessageV01_msgtot(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_msgnum msgtot(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_msgtot_type arg)
  {
    msg_.msgtot = std::move(arg);
    return Init_TrafficControlMessageV01_msgnum(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_reqseq
{
public:
  explicit Init_TrafficControlMessageV01_reqseq(::j2735_v2x_msgs::msg::TrafficControlMessageV01 & msg)
  : msg_(msg)
  {}
  Init_TrafficControlMessageV01_msgtot reqseq(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_reqseq_type arg)
  {
    msg_.reqseq = std::move(arg);
    return Init_TrafficControlMessageV01_msgtot(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

class Init_TrafficControlMessageV01_reqid
{
public:
  Init_TrafficControlMessageV01_reqid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficControlMessageV01_reqseq reqid(::j2735_v2x_msgs::msg::TrafficControlMessageV01::_reqid_type arg)
  {
    msg_.reqid = std::move(arg);
    return Init_TrafficControlMessageV01_reqseq(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrafficControlMessageV01 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrafficControlMessageV01>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrafficControlMessageV01_reqid();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_MESSAGE_V01__BUILDER_HPP_
