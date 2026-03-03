// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/event_description.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/event_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_EventDescription_description
{
public:
  explicit Init_EventDescription_description(::j2735_v2x_msgs::msg::EventDescription & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::EventDescription description(::j2735_v2x_msgs::msg::EventDescription::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EventDescription msg_;
};

class Init_EventDescription_extent
{
public:
  explicit Init_EventDescription_extent(::j2735_v2x_msgs::msg::EventDescription & msg)
  : msg_(msg)
  {}
  Init_EventDescription_description extent(::j2735_v2x_msgs::msg::EventDescription::_extent_type arg)
  {
    msg_.extent = std::move(arg);
    return Init_EventDescription_description(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EventDescription msg_;
};

class Init_EventDescription_heading
{
public:
  explicit Init_EventDescription_heading(::j2735_v2x_msgs::msg::EventDescription & msg)
  : msg_(msg)
  {}
  Init_EventDescription_extent heading(::j2735_v2x_msgs::msg::EventDescription::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_EventDescription_extent(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EventDescription msg_;
};

class Init_EventDescription_priority
{
public:
  explicit Init_EventDescription_priority(::j2735_v2x_msgs::msg::EventDescription & msg)
  : msg_(msg)
  {}
  Init_EventDescription_heading priority(::j2735_v2x_msgs::msg::EventDescription::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_EventDescription_heading(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EventDescription msg_;
};

class Init_EventDescription_type_event
{
public:
  explicit Init_EventDescription_type_event(::j2735_v2x_msgs::msg::EventDescription & msg)
  : msg_(msg)
  {}
  Init_EventDescription_priority type_event(::j2735_v2x_msgs::msg::EventDescription::_type_event_type arg)
  {
    msg_.type_event = std::move(arg);
    return Init_EventDescription_priority(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EventDescription msg_;
};

class Init_EventDescription_presence_vector
{
public:
  Init_EventDescription_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EventDescription_type_event presence_vector(::j2735_v2x_msgs::msg::EventDescription::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_EventDescription_type_event(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::EventDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::EventDescription>()
{
  return j2735_v2x_msgs::msg::builder::Init_EventDescription_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__BUILDER_HPP_
