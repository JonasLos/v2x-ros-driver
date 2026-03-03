// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/SupplementalVehicleExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/supplemental_vehicle_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_SupplementalVehicleExtensions_the_rtcm
{
public:
  explicit Init_SupplementalVehicleExtensions_the_rtcm(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions the_rtcm(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_the_rtcm_type arg)
  {
    msg_.the_rtcm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_speed_profile
{
public:
  explicit Init_SupplementalVehicleExtensions_speed_profile(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_the_rtcm speed_profile(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_speed_profile_type arg)
  {
    msg_.speed_profile = std::move(arg);
    return Init_SupplementalVehicleExtensions_the_rtcm(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_status
{
public:
  explicit Init_SupplementalVehicleExtensions_status(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_speed_profile status(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SupplementalVehicleExtensions_speed_profile(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_obstacle
{
public:
  explicit Init_SupplementalVehicleExtensions_obstacle(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_status obstacle(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_SupplementalVehicleExtensions_status(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_weather_probe
{
public:
  explicit Init_SupplementalVehicleExtensions_weather_probe(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_obstacle weather_probe(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_weather_probe_type arg)
  {
    msg_.weather_probe = std::move(arg);
    return Init_SupplementalVehicleExtensions_obstacle(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_weather_report
{
public:
  explicit Init_SupplementalVehicleExtensions_weather_report(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_weather_probe weather_report(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_weather_report_type arg)
  {
    msg_.weather_report = std::move(arg);
    return Init_SupplementalVehicleExtensions_weather_probe(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_vehicle_data
{
public:
  explicit Init_SupplementalVehicleExtensions_vehicle_data(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_weather_report vehicle_data(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_vehicle_data_type arg)
  {
    msg_.vehicle_data = std::move(arg);
    return Init_SupplementalVehicleExtensions_weather_report(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_class_details
{
public:
  explicit Init_SupplementalVehicleExtensions_class_details(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_vehicle_data class_details(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_class_details_type arg)
  {
    msg_.class_details = std::move(arg);
    return Init_SupplementalVehicleExtensions_vehicle_data(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_classification
{
public:
  explicit Init_SupplementalVehicleExtensions_classification(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions & msg)
  : msg_(msg)
  {}
  Init_SupplementalVehicleExtensions_class_details classification(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_SupplementalVehicleExtensions_class_details(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

class Init_SupplementalVehicleExtensions_presence_vector
{
public:
  Init_SupplementalVehicleExtensions_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SupplementalVehicleExtensions_classification presence_vector(::j2735_v2x_msgs::msg::SupplementalVehicleExtensions::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_SupplementalVehicleExtensions_classification(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::SupplementalVehicleExtensions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::SupplementalVehicleExtensions>()
{
  return j2735_v2x_msgs::msg::builder::Init_SupplementalVehicleExtensions_presence_vector();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SUPPLEMENTAL_VEHICLE_EXTENSIONS__BUILDER_HPP_
