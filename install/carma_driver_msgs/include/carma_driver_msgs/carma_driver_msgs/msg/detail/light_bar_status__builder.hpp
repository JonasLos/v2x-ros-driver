// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:msg/LightBarStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/light_bar_status.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/msg/detail/light_bar_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_LightBarStatus_takedown
{
public:
  explicit Init_LightBarStatus_takedown(::carma_driver_msgs::msg::LightBarStatus & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::msg::LightBarStatus takedown(::carma_driver_msgs::msg::LightBarStatus::_takedown_type arg)
  {
    msg_.takedown = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

class Init_LightBarStatus_green_flash
{
public:
  explicit Init_LightBarStatus_green_flash(::carma_driver_msgs::msg::LightBarStatus & msg)
  : msg_(msg)
  {}
  Init_LightBarStatus_takedown green_flash(::carma_driver_msgs::msg::LightBarStatus::_green_flash_type arg)
  {
    msg_.green_flash = std::move(arg);
    return Init_LightBarStatus_takedown(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

class Init_LightBarStatus_flash
{
public:
  explicit Init_LightBarStatus_flash(::carma_driver_msgs::msg::LightBarStatus & msg)
  : msg_(msg)
  {}
  Init_LightBarStatus_green_flash flash(::carma_driver_msgs::msg::LightBarStatus::_flash_type arg)
  {
    msg_.flash = std::move(arg);
    return Init_LightBarStatus_green_flash(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

class Init_LightBarStatus_sides_solid
{
public:
  explicit Init_LightBarStatus_sides_solid(::carma_driver_msgs::msg::LightBarStatus & msg)
  : msg_(msg)
  {}
  Init_LightBarStatus_flash sides_solid(::carma_driver_msgs::msg::LightBarStatus::_sides_solid_type arg)
  {
    msg_.sides_solid = std::move(arg);
    return Init_LightBarStatus_flash(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

class Init_LightBarStatus_left_arrow
{
public:
  explicit Init_LightBarStatus_left_arrow(::carma_driver_msgs::msg::LightBarStatus & msg)
  : msg_(msg)
  {}
  Init_LightBarStatus_sides_solid left_arrow(::carma_driver_msgs::msg::LightBarStatus::_left_arrow_type arg)
  {
    msg_.left_arrow = std::move(arg);
    return Init_LightBarStatus_sides_solid(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

class Init_LightBarStatus_right_arrow
{
public:
  explicit Init_LightBarStatus_right_arrow(::carma_driver_msgs::msg::LightBarStatus & msg)
  : msg_(msg)
  {}
  Init_LightBarStatus_left_arrow right_arrow(::carma_driver_msgs::msg::LightBarStatus::_right_arrow_type arg)
  {
    msg_.right_arrow = std::move(arg);
    return Init_LightBarStatus_left_arrow(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

class Init_LightBarStatus_yellow_solid
{
public:
  explicit Init_LightBarStatus_yellow_solid(::carma_driver_msgs::msg::LightBarStatus & msg)
  : msg_(msg)
  {}
  Init_LightBarStatus_right_arrow yellow_solid(::carma_driver_msgs::msg::LightBarStatus::_yellow_solid_type arg)
  {
    msg_.yellow_solid = std::move(arg);
    return Init_LightBarStatus_right_arrow(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

class Init_LightBarStatus_green_solid
{
public:
  Init_LightBarStatus_green_solid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightBarStatus_yellow_solid green_solid(::carma_driver_msgs::msg::LightBarStatus::_green_solid_type arg)
  {
    msg_.green_solid = std::move(arg);
    return Init_LightBarStatus_yellow_solid(msg_);
  }

private:
  ::carma_driver_msgs::msg::LightBarStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::msg::LightBarStatus>()
{
  return carma_driver_msgs::msg::builder::Init_LightBarStatus_green_solid();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__LIGHT_BAR_STATUS__BUILDER_HPP_
