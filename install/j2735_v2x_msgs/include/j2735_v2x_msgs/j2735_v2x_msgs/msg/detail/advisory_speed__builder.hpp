// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/AdvisorySpeed.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/advisory_speed.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/advisory_speed__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_AdvisorySpeed_restriction_class_id_exists
{
public:
  explicit Init_AdvisorySpeed_restriction_class_id_exists(::j2735_v2x_msgs::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::AdvisorySpeed restriction_class_id_exists(::j2735_v2x_msgs::msg::AdvisorySpeed::_restriction_class_id_exists_type arg)
  {
    msg_.restriction_class_id_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_restriction_class_id
{
public:
  explicit Init_AdvisorySpeed_restriction_class_id(::j2735_v2x_msgs::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_restriction_class_id_exists restriction_class_id(::j2735_v2x_msgs::msg::AdvisorySpeed::_restriction_class_id_type arg)
  {
    msg_.restriction_class_id = std::move(arg);
    return Init_AdvisorySpeed_restriction_class_id_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_distance_exists
{
public:
  explicit Init_AdvisorySpeed_distance_exists(::j2735_v2x_msgs::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_restriction_class_id distance_exists(::j2735_v2x_msgs::msg::AdvisorySpeed::_distance_exists_type arg)
  {
    msg_.distance_exists = std::move(arg);
    return Init_AdvisorySpeed_restriction_class_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_distance
{
public:
  explicit Init_AdvisorySpeed_distance(::j2735_v2x_msgs::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_distance_exists distance(::j2735_v2x_msgs::msg::AdvisorySpeed::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_AdvisorySpeed_distance_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_confidence
{
public:
  explicit Init_AdvisorySpeed_confidence(::j2735_v2x_msgs::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_distance confidence(::j2735_v2x_msgs::msg::AdvisorySpeed::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_AdvisorySpeed_distance(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_speed_exists
{
public:
  explicit Init_AdvisorySpeed_speed_exists(::j2735_v2x_msgs::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_confidence speed_exists(::j2735_v2x_msgs::msg::AdvisorySpeed::_speed_exists_type arg)
  {
    msg_.speed_exists = std::move(arg);
    return Init_AdvisorySpeed_confidence(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_speed
{
public:
  explicit Init_AdvisorySpeed_speed(::j2735_v2x_msgs::msg::AdvisorySpeed & msg)
  : msg_(msg)
  {}
  Init_AdvisorySpeed_speed_exists speed(::j2735_v2x_msgs::msg::AdvisorySpeed::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_AdvisorySpeed_speed_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

class Init_AdvisorySpeed_type
{
public:
  Init_AdvisorySpeed_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdvisorySpeed_speed type(::j2735_v2x_msgs::msg::AdvisorySpeed::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_AdvisorySpeed_speed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::AdvisorySpeed msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::AdvisorySpeed>()
{
  return j2735_v2x_msgs::msg::builder::Init_AdvisorySpeed_type();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ADVISORY_SPEED__BUILDER_HPP_
