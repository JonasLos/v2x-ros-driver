// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_driver_msgs/msg/driver_status.hpp"


#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__BUILDER_HPP_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "carma_driver_msgs/msg/detail/driver_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace carma_driver_msgs
{

namespace msg
{

namespace builder
{

class Init_DriverStatus_lightbar
{
public:
  explicit Init_DriverStatus_lightbar(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  ::carma_driver_msgs::msg::DriverStatus lightbar(::carma_driver_msgs::msg::DriverStatus::_lightbar_type arg)
  {
    msg_.lightbar = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_trailer_angle_sensor
{
public:
  explicit Init_DriverStatus_trailer_angle_sensor(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_lightbar trailer_angle_sensor(::carma_driver_msgs::msg::DriverStatus::_trailer_angle_sensor_type arg)
  {
    msg_.trailer_angle_sensor = std::move(arg);
    return Init_DriverStatus_lightbar(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_imu
{
public:
  explicit Init_DriverStatus_imu(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_trailer_angle_sensor imu(::carma_driver_msgs::msg::DriverStatus::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_DriverStatus_trailer_angle_sensor(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_camera
{
public:
  explicit Init_DriverStatus_camera(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_imu camera(::carma_driver_msgs::msg::DriverStatus::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return Init_DriverStatus_imu(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_controller
{
public:
  explicit Init_DriverStatus_controller(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_camera controller(::carma_driver_msgs::msg::DriverStatus::_controller_type arg)
  {
    msg_.controller = std::move(arg);
    return Init_DriverStatus_camera(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_comms
{
public:
  explicit Init_DriverStatus_comms(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_controller comms(::carma_driver_msgs::msg::DriverStatus::_comms_type arg)
  {
    msg_.comms = std::move(arg);
    return Init_DriverStatus_controller(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_roadway_sensor
{
public:
  explicit Init_DriverStatus_roadway_sensor(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_comms roadway_sensor(::carma_driver_msgs::msg::DriverStatus::_roadway_sensor_type arg)
  {
    msg_.roadway_sensor = std::move(arg);
    return Init_DriverStatus_comms(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_lidar
{
public:
  explicit Init_DriverStatus_lidar(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_roadway_sensor lidar(::carma_driver_msgs::msg::DriverStatus::_lidar_type arg)
  {
    msg_.lidar = std::move(arg);
    return Init_DriverStatus_roadway_sensor(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_gnss
{
public:
  explicit Init_DriverStatus_gnss(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_lidar gnss(::carma_driver_msgs::msg::DriverStatus::_gnss_type arg)
  {
    msg_.gnss = std::move(arg);
    return Init_DriverStatus_lidar(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_radar
{
public:
  explicit Init_DriverStatus_radar(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_gnss radar(::carma_driver_msgs::msg::DriverStatus::_radar_type arg)
  {
    msg_.radar = std::move(arg);
    return Init_DriverStatus_gnss(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_can
{
public:
  explicit Init_DriverStatus_can(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_radar can(::carma_driver_msgs::msg::DriverStatus::_can_type arg)
  {
    msg_.can = std::move(arg);
    return Init_DriverStatus_radar(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_status
{
public:
  explicit Init_DriverStatus_status(::carma_driver_msgs::msg::DriverStatus & msg)
  : msg_(msg)
  {}
  Init_DriverStatus_can status(::carma_driver_msgs::msg::DriverStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DriverStatus_can(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

class Init_DriverStatus_name
{
public:
  Init_DriverStatus_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriverStatus_status name(::carma_driver_msgs::msg::DriverStatus::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DriverStatus_status(msg_);
  }

private:
  ::carma_driver_msgs::msg::DriverStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_driver_msgs::msg::DriverStatus>()
{
  return carma_driver_msgs::msg::builder::Init_DriverStatus_name();
}

}  // namespace carma_driver_msgs

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__BUILDER_HPP_
