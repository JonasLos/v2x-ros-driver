// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleSafetyExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_safety_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleSafetyExtensions_lights
{
public:
  explicit Init_VehicleSafetyExtensions_lights(::j2735_v2x_msgs::msg::VehicleSafetyExtensions & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::VehicleSafetyExtensions lights(::j2735_v2x_msgs::msg::VehicleSafetyExtensions::_lights_type arg)
  {
    msg_.lights = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleSafetyExtensions msg_;
};

class Init_VehicleSafetyExtensions_path_prediction
{
public:
  explicit Init_VehicleSafetyExtensions_path_prediction(::j2735_v2x_msgs::msg::VehicleSafetyExtensions & msg)
  : msg_(msg)
  {}
  Init_VehicleSafetyExtensions_lights path_prediction(::j2735_v2x_msgs::msg::VehicleSafetyExtensions::_path_prediction_type arg)
  {
    msg_.path_prediction = std::move(arg);
    return Init_VehicleSafetyExtensions_lights(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleSafetyExtensions msg_;
};

class Init_VehicleSafetyExtensions_path_history
{
public:
  explicit Init_VehicleSafetyExtensions_path_history(::j2735_v2x_msgs::msg::VehicleSafetyExtensions & msg)
  : msg_(msg)
  {}
  Init_VehicleSafetyExtensions_path_prediction path_history(::j2735_v2x_msgs::msg::VehicleSafetyExtensions::_path_history_type arg)
  {
    msg_.path_history = std::move(arg);
    return Init_VehicleSafetyExtensions_path_prediction(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleSafetyExtensions msg_;
};

class Init_VehicleSafetyExtensions_events
{
public:
  explicit Init_VehicleSafetyExtensions_events(::j2735_v2x_msgs::msg::VehicleSafetyExtensions & msg)
  : msg_(msg)
  {}
  Init_VehicleSafetyExtensions_path_history events(::j2735_v2x_msgs::msg::VehicleSafetyExtensions::_events_type arg)
  {
    msg_.events = std::move(arg);
    return Init_VehicleSafetyExtensions_path_history(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleSafetyExtensions msg_;
};

class Init_VehicleSafetyExtensions_presence_vector
{
public:
  Init_VehicleSafetyExtensions_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleSafetyExtensions_events presence_vector(::j2735_v2x_msgs::msg::VehicleSafetyExtensions::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_VehicleSafetyExtensions_events(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleSafetyExtensions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VehicleSafetyExtensions>()
{
  return j2735_v2x_msgs::msg::builder::Init_VehicleSafetyExtensions_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_SAFETY_EXTENSIONS__BUILDER_HPP_
