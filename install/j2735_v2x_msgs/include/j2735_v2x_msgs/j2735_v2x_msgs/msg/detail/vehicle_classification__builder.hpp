// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_classification.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/vehicle_classification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleClassification_fuel_type
{
public:
  explicit Init_VehicleClassification_fuel_type(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::VehicleClassification fuel_type(::j2735_v2x_msgs::msg::VehicleClassification::_fuel_type_type arg)
  {
    msg_.fuel_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_responder_type
{
public:
  explicit Init_VehicleClassification_responder_type(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_fuel_type responder_type(::j2735_v2x_msgs::msg::VehicleClassification::_responder_type_type arg)
  {
    msg_.responder_type = std::move(arg);
    return Init_VehicleClassification_fuel_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_response_equip
{
public:
  explicit Init_VehicleClassification_response_equip(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_responder_type response_equip(::j2735_v2x_msgs::msg::VehicleClassification::_response_equip_type arg)
  {
    msg_.response_equip = std::move(arg);
    return Init_VehicleClassification_responder_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_vehicle_type
{
public:
  explicit Init_VehicleClassification_vehicle_type(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_response_equip vehicle_type(::j2735_v2x_msgs::msg::VehicleClassification::_vehicle_type_type arg)
  {
    msg_.vehicle_type = std::move(arg);
    return Init_VehicleClassification_response_equip(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_hpms_type
{
public:
  explicit Init_VehicleClassification_hpms_type(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_vehicle_type hpms_type(::j2735_v2x_msgs::msg::VehicleClassification::_hpms_type_type arg)
  {
    msg_.hpms_type = std::move(arg);
    return Init_VehicleClassification_vehicle_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_iso3833
{
public:
  explicit Init_VehicleClassification_iso3833(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_hpms_type iso3833(::j2735_v2x_msgs::msg::VehicleClassification::_iso3833_type arg)
  {
    msg_.iso3833 = std::move(arg);
    return Init_VehicleClassification_hpms_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_role
{
public:
  explicit Init_VehicleClassification_role(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_iso3833 role(::j2735_v2x_msgs::msg::VehicleClassification::_role_type arg)
  {
    msg_.role = std::move(arg);
    return Init_VehicleClassification_iso3833(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_key_type
{
public:
  explicit Init_VehicleClassification_key_type(::j2735_v2x_msgs::msg::VehicleClassification & msg)
  : msg_(msg)
  {}
  Init_VehicleClassification_role key_type(::j2735_v2x_msgs::msg::VehicleClassification::_key_type_type arg)
  {
    msg_.key_type = std::move(arg);
    return Init_VehicleClassification_role(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

class Init_VehicleClassification_presence_vector
{
public:
  Init_VehicleClassification_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleClassification_key_type presence_vector(::j2735_v2x_msgs::msg::VehicleClassification::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_VehicleClassification_key_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::VehicleClassification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::VehicleClassification>()
{
  return j2735_v2x_msgs::msg::builder::Init_VehicleClassification_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__BUILDER_HPP_
