// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_core_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/bsm_core_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_BSMCoreData_size
{
public:
  explicit Init_BSMCoreData_size(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::BSMCoreData size(::j2735_v2x_msgs::msg::BSMCoreData::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_brakes
{
public:
  explicit Init_BSMCoreData_brakes(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_size brakes(::j2735_v2x_msgs::msg::BSMCoreData::_brakes_type arg)
  {
    msg_.brakes = std::move(arg);
    return Init_BSMCoreData_size(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_accel_set
{
public:
  explicit Init_BSMCoreData_accel_set(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_brakes accel_set(::j2735_v2x_msgs::msg::BSMCoreData::_accel_set_type arg)
  {
    msg_.accel_set = std::move(arg);
    return Init_BSMCoreData_brakes(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_angle
{
public:
  explicit Init_BSMCoreData_angle(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_accel_set angle(::j2735_v2x_msgs::msg::BSMCoreData::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_BSMCoreData_accel_set(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_heading
{
public:
  explicit Init_BSMCoreData_heading(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_angle heading(::j2735_v2x_msgs::msg::BSMCoreData::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_BSMCoreData_angle(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_speed
{
public:
  explicit Init_BSMCoreData_speed(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_heading speed(::j2735_v2x_msgs::msg::BSMCoreData::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_BSMCoreData_heading(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_transmission
{
public:
  explicit Init_BSMCoreData_transmission(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_speed transmission(::j2735_v2x_msgs::msg::BSMCoreData::_transmission_type arg)
  {
    msg_.transmission = std::move(arg);
    return Init_BSMCoreData_speed(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_accuracy
{
public:
  explicit Init_BSMCoreData_accuracy(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_transmission accuracy(::j2735_v2x_msgs::msg::BSMCoreData::_accuracy_type arg)
  {
    msg_.accuracy = std::move(arg);
    return Init_BSMCoreData_transmission(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_elev
{
public:
  explicit Init_BSMCoreData_elev(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_accuracy elev(::j2735_v2x_msgs::msg::BSMCoreData::_elev_type arg)
  {
    msg_.elev = std::move(arg);
    return Init_BSMCoreData_accuracy(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_latitude
{
public:
  explicit Init_BSMCoreData_latitude(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_elev latitude(::j2735_v2x_msgs::msg::BSMCoreData::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_BSMCoreData_elev(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_longitude
{
public:
  explicit Init_BSMCoreData_longitude(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_latitude longitude(::j2735_v2x_msgs::msg::BSMCoreData::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_BSMCoreData_latitude(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_sec_mark
{
public:
  explicit Init_BSMCoreData_sec_mark(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_longitude sec_mark(::j2735_v2x_msgs::msg::BSMCoreData::_sec_mark_type arg)
  {
    msg_.sec_mark = std::move(arg);
    return Init_BSMCoreData_longitude(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_id
{
public:
  explicit Init_BSMCoreData_id(::j2735_v2x_msgs::msg::BSMCoreData & msg)
  : msg_(msg)
  {}
  Init_BSMCoreData_sec_mark id(::j2735_v2x_msgs::msg::BSMCoreData::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BSMCoreData_sec_mark(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

class Init_BSMCoreData_msg_count
{
public:
  Init_BSMCoreData_msg_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BSMCoreData_id msg_count(::j2735_v2x_msgs::msg::BSMCoreData::_msg_count_type arg)
  {
    msg_.msg_count = std::move(arg);
    return Init_BSMCoreData_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::BSMCoreData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::BSMCoreData>()
{
  return j2735_v2x_msgs::msg::builder::Init_BSMCoreData_msg_count();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_CORE_DATA__BUILDER_HPP_
