// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/emergency_details.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_EmergencyDetails_response_type
{
public:
  explicit Init_EmergencyDetails_response_type(::j2735_v2x_msgs::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::EmergencyDetails response_type(::j2735_v2x_msgs::msg::EmergencyDetails::_response_type_type arg)
  {
    msg_.response_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_events
{
public:
  explicit Init_EmergencyDetails_events(::j2735_v2x_msgs::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_response_type events(::j2735_v2x_msgs::msg::EmergencyDetails::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_EmergencyDetails_response_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_multi
{
public:
  explicit Init_EmergencyDetails_multi(::j2735_v2x_msgs::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_events multi(::j2735_v2x_msgs::msg::EmergencyDetails::_multi_type arg)
  {
    msg_.multi = std::move(arg);
    return Init_EmergencyDetails_events(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_lights_use
{
public:
  explicit Init_EmergencyDetails_lights_use(::j2735_v2x_msgs::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_multi lights_use(::j2735_v2x_msgs::msg::EmergencyDetails::_lights_use_type arg)
  {
    msg_.lights_use = std::move(arg);
    return Init_EmergencyDetails_multi(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_siren_use
{
public:
  explicit Init_EmergencyDetails_siren_use(::j2735_v2x_msgs::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_lights_use siren_use(::j2735_v2x_msgs::msg::EmergencyDetails::_siren_use_type arg)
  {
    msg_.siren_use = std::move(arg);
    return Init_EmergencyDetails_lights_use(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_ssp_index
{
public:
  explicit Init_EmergencyDetails_ssp_index(::j2735_v2x_msgs::msg::EmergencyDetails & msg)
  : msg_(msg)
  {}
  Init_EmergencyDetails_siren_use ssp_index(::j2735_v2x_msgs::msg::EmergencyDetails::_ssp_index_type arg)
  {
    msg_.ssp_index = std::move(arg);
    return Init_EmergencyDetails_siren_use(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EmergencyDetails msg_;
};

class Init_EmergencyDetails_presence_vector
{
public:
  Init_EmergencyDetails_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EmergencyDetails_ssp_index presence_vector(::j2735_v2x_msgs::msg::EmergencyDetails::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_EmergencyDetails_ssp_index(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EmergencyDetails msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::EmergencyDetails>()
{
  return j2735_v2x_msgs::msg::builder::Init_EmergencyDetails_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__BUILDER_HPP_
