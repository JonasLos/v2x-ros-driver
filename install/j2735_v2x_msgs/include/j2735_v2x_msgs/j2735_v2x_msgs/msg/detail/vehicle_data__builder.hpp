// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/vehicle_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleData_trailer_weight
{
public:
  explicit Init_VehicleData_trailer_weight(::j2735_v2x_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::VehicleData trailer_weight(::j2735_v2x_msgs::msg::VehicleData::_trailer_weight_type arg)
  {
    msg_.trailer_weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_mass
{
public:
  explicit Init_VehicleData_mass(::j2735_v2x_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_trailer_weight mass(::j2735_v2x_msgs::msg::VehicleData::_mass_type arg)
  {
    msg_.mass = std::move(arg);
    return Init_VehicleData_trailer_weight(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_bumpers
{
public:
  explicit Init_VehicleData_bumpers(::j2735_v2x_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_mass bumpers(::j2735_v2x_msgs::msg::VehicleData::_bumpers_type arg)
  {
    msg_.bumpers = std::move(arg);
    return Init_VehicleData_mass(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_height
{
public:
  explicit Init_VehicleData_height(::j2735_v2x_msgs::msg::VehicleData & msg)
  : msg_(msg)
  {}
  Init_VehicleData_bumpers height(::j2735_v2x_msgs::msg::VehicleData::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_VehicleData_bumpers(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleData msg_;
};

class Init_VehicleData_presence_vector
{
public:
  Init_VehicleData_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleData_height presence_vector(::j2735_v2x_msgs::msg::VehicleData::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_VehicleData_height(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VehicleData>()
{
  return j2735_v2x_msgs::msg::builder::Init_VehicleData_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__BUILDER_HPP_
