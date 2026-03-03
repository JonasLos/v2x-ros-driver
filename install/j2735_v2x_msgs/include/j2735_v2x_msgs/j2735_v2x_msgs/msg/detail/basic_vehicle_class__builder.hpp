// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BasicVehicleClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/basic_vehicle_class.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BasicVehicleClass_basic_vehicle_class
{
public:
  Init_BasicVehicleClass_basic_vehicle_class()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::j2735_v2x_msgs::msg::BasicVehicleClass basic_vehicle_class(::j2735_v2x_msgs::msg::BasicVehicleClass::_basic_vehicle_class_type arg)
  {
    msg_.basic_vehicle_class = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BasicVehicleClass msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BasicVehicleClass>()
{
  return j2735_v2x_msgs::msg::builder::Init_BasicVehicleClass_basic_vehicle_class();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BASIC_VEHICLE_CLASS__BUILDER_HPP_
