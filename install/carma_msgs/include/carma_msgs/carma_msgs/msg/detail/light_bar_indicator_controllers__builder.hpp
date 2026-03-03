// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator_controllers.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__BUILDER_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_msgs/msg/detail/light_bar_indicator_controllers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_msgs
{

namespace msg
{

namespace builder
{

class Init_LightBarIndicatorControllers_yellow_arrow_out_owner
{
public:
  explicit Init_LightBarIndicatorControllers_yellow_arrow_out_owner(::carma_msgs::msg::LightBarIndicatorControllers & msg)
  : msg_(msg)
  {}
  ::carma_msgs::msg::LightBarIndicatorControllers yellow_arrow_out_owner(::carma_msgs::msg::LightBarIndicatorControllers::_yellow_arrow_out_owner_type arg)
  {
    msg_.yellow_arrow_out_owner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

class Init_LightBarIndicatorControllers_yellow_arrow_right_owner
{
public:
  explicit Init_LightBarIndicatorControllers_yellow_arrow_right_owner(::carma_msgs::msg::LightBarIndicatorControllers & msg)
  : msg_(msg)
  {}
  Init_LightBarIndicatorControllers_yellow_arrow_out_owner yellow_arrow_right_owner(::carma_msgs::msg::LightBarIndicatorControllers::_yellow_arrow_right_owner_type arg)
  {
    msg_.yellow_arrow_right_owner = std::move(arg);
    return Init_LightBarIndicatorControllers_yellow_arrow_out_owner(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

class Init_LightBarIndicatorControllers_yellow_arrow_left_owner
{
public:
  explicit Init_LightBarIndicatorControllers_yellow_arrow_left_owner(::carma_msgs::msg::LightBarIndicatorControllers & msg)
  : msg_(msg)
  {}
  Init_LightBarIndicatorControllers_yellow_arrow_right_owner yellow_arrow_left_owner(::carma_msgs::msg::LightBarIndicatorControllers::_yellow_arrow_left_owner_type arg)
  {
    msg_.yellow_arrow_left_owner = std::move(arg);
    return Init_LightBarIndicatorControllers_yellow_arrow_right_owner(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

class Init_LightBarIndicatorControllers_yellow_flash_owner
{
public:
  explicit Init_LightBarIndicatorControllers_yellow_flash_owner(::carma_msgs::msg::LightBarIndicatorControllers & msg)
  : msg_(msg)
  {}
  Init_LightBarIndicatorControllers_yellow_arrow_left_owner yellow_flash_owner(::carma_msgs::msg::LightBarIndicatorControllers::_yellow_flash_owner_type arg)
  {
    msg_.yellow_flash_owner = std::move(arg);
    return Init_LightBarIndicatorControllers_yellow_arrow_left_owner(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

class Init_LightBarIndicatorControllers_yellow_dim_owner
{
public:
  explicit Init_LightBarIndicatorControllers_yellow_dim_owner(::carma_msgs::msg::LightBarIndicatorControllers & msg)
  : msg_(msg)
  {}
  Init_LightBarIndicatorControllers_yellow_flash_owner yellow_dim_owner(::carma_msgs::msg::LightBarIndicatorControllers::_yellow_dim_owner_type arg)
  {
    msg_.yellow_dim_owner = std::move(arg);
    return Init_LightBarIndicatorControllers_yellow_flash_owner(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

class Init_LightBarIndicatorControllers_yellow_sides_owner
{
public:
  explicit Init_LightBarIndicatorControllers_yellow_sides_owner(::carma_msgs::msg::LightBarIndicatorControllers & msg)
  : msg_(msg)
  {}
  Init_LightBarIndicatorControllers_yellow_dim_owner yellow_sides_owner(::carma_msgs::msg::LightBarIndicatorControllers::_yellow_sides_owner_type arg)
  {
    msg_.yellow_sides_owner = std::move(arg);
    return Init_LightBarIndicatorControllers_yellow_dim_owner(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

class Init_LightBarIndicatorControllers_green_flash_owner
{
public:
  explicit Init_LightBarIndicatorControllers_green_flash_owner(::carma_msgs::msg::LightBarIndicatorControllers & msg)
  : msg_(msg)
  {}
  Init_LightBarIndicatorControllers_yellow_sides_owner green_flash_owner(::carma_msgs::msg::LightBarIndicatorControllers::_green_flash_owner_type arg)
  {
    msg_.green_flash_owner = std::move(arg);
    return Init_LightBarIndicatorControllers_yellow_sides_owner(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

class Init_LightBarIndicatorControllers_green_solid_owner
{
public:
  Init_LightBarIndicatorControllers_green_solid_owner()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightBarIndicatorControllers_green_flash_owner green_solid_owner(::carma_msgs::msg::LightBarIndicatorControllers::_green_solid_owner_type arg)
  {
    msg_.green_solid_owner = std::move(arg);
    return Init_LightBarIndicatorControllers_green_flash_owner(msg_);
  }

private:
  ::carma_msgs::msg::LightBarIndicatorControllers msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_msgs::msg::LightBarIndicatorControllers>()
{
  return carma_msgs::msg::builder::Init_LightBarIndicatorControllers_green_solid_owner();
}

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__BUILDER_HPP_
