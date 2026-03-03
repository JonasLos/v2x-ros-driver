// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_unit_description.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_TrailerUnitDescription_crumb_data
{
public:
  explicit Init_TrailerUnitDescription_crumb_data(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::TrailerUnitDescription crumb_data(::j2735_v2x_msgs::msg::TrailerUnitDescription::_crumb_data_type arg)
  {
    msg_.crumb_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_elevation_offset
{
public:
  explicit Init_TrailerUnitDescription_elevation_offset(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_crumb_data elevation_offset(::j2735_v2x_msgs::msg::TrailerUnitDescription::_elevation_offset_type arg)
  {
    msg_.elevation_offset = std::move(arg);
    return Init_TrailerUnitDescription_crumb_data(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_position_offset
{
public:
  explicit Init_TrailerUnitDescription_position_offset(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_elevation_offset position_offset(::j2735_v2x_msgs::msg::TrailerUnitDescription::_position_offset_type arg)
  {
    msg_.position_offset = std::move(arg);
    return Init_TrailerUnitDescription_elevation_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_rear_wheel_offset
{
public:
  explicit Init_TrailerUnitDescription_rear_wheel_offset(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_position_offset rear_wheel_offset(::j2735_v2x_msgs::msg::TrailerUnitDescription::_rear_wheel_offset_type arg)
  {
    msg_.rear_wheel_offset = std::move(arg);
    return Init_TrailerUnitDescription_position_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_rear_pivot
{
public:
  explicit Init_TrailerUnitDescription_rear_pivot(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_rear_wheel_offset rear_pivot(::j2735_v2x_msgs::msg::TrailerUnitDescription::_rear_pivot_type arg)
  {
    msg_.rear_pivot = std::move(arg);
    return Init_TrailerUnitDescription_rear_wheel_offset(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_front_pivot
{
public:
  explicit Init_TrailerUnitDescription_front_pivot(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_rear_pivot front_pivot(::j2735_v2x_msgs::msg::TrailerUnitDescription::_front_pivot_type arg)
  {
    msg_.front_pivot = std::move(arg);
    return Init_TrailerUnitDescription_rear_pivot(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_center_of_gravity
{
public:
  explicit Init_TrailerUnitDescription_center_of_gravity(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_front_pivot center_of_gravity(::j2735_v2x_msgs::msg::TrailerUnitDescription::_center_of_gravity_type arg)
  {
    msg_.center_of_gravity = std::move(arg);
    return Init_TrailerUnitDescription_front_pivot(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_bumper_heights
{
public:
  explicit Init_TrailerUnitDescription_bumper_heights(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_center_of_gravity bumper_heights(::j2735_v2x_msgs::msg::TrailerUnitDescription::_bumper_heights_type arg)
  {
    msg_.bumper_heights = std::move(arg);
    return Init_TrailerUnitDescription_center_of_gravity(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_mass
{
public:
  explicit Init_TrailerUnitDescription_mass(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_bumper_heights mass(::j2735_v2x_msgs::msg::TrailerUnitDescription::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_TrailerUnitDescription_bumper_heights(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_height
{
public:
  explicit Init_TrailerUnitDescription_height(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_mass height(::j2735_v2x_msgs::msg::TrailerUnitDescription::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_TrailerUnitDescription_mass(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_length
{
public:
  explicit Init_TrailerUnitDescription_length(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_height length(::j2735_v2x_msgs::msg::TrailerUnitDescription::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_TrailerUnitDescription_height(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_width
{
public:
  explicit Init_TrailerUnitDescription_width(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_length width(::j2735_v2x_msgs::msg::TrailerUnitDescription::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_TrailerUnitDescription_length(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_is_dolly
{
public:
  explicit Init_TrailerUnitDescription_is_dolly(::j2735_v2x_msgs::msg::TrailerUnitDescription & msg)
  : msg_(msg)
  {}
  Init_TrailerUnitDescription_width is_dolly(::j2735_v2x_msgs::msg::TrailerUnitDescription::_is_dolly_type arg)
  {
    msg_.is_dolly = std::move(arg);
    return Init_TrailerUnitDescription_width(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

class Init_TrailerUnitDescription_presence_vector
{
public:
  Init_TrailerUnitDescription_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrailerUnitDescription_is_dolly presence_vector(::j2735_v2x_msgs::msg::TrailerUnitDescription::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_TrailerUnitDescription_is_dolly(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::TrailerUnitDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::TrailerUnitDescription>()
{
  return j2735_v2x_msgs::msg::builder::Init_TrailerUnitDescription_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__BUILDER_HPP_
