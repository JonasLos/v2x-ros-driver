// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/map_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/map_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_MapData_restriction_list_exists
{
public:
  explicit Init_MapData_restriction_list_exists(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::MapData restriction_list_exists(::j2735_v2x_msgs::msg::MapData::_restriction_list_exists_type arg)
  {
    msg_.restriction_list_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_restriction_list
{
public:
  explicit Init_MapData_restriction_list(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_restriction_list_exists restriction_list(::j2735_v2x_msgs::msg::MapData::_restriction_list_type arg)
  {
    msg_.restriction_list = std::move(arg);
    return Init_MapData_restriction_list_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_data_parameters_exists
{
public:
  explicit Init_MapData_data_parameters_exists(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_restriction_list data_parameters_exists(::j2735_v2x_msgs::msg::MapData::_data_parameters_exists_type arg)
  {
    msg_.data_parameters_exists = std::move(arg);
    return Init_MapData_restriction_list(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_data_parameters
{
public:
  explicit Init_MapData_data_parameters(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_data_parameters_exists data_parameters(::j2735_v2x_msgs::msg::MapData::_data_parameters_type arg)
  {
    msg_.data_parameters = std::move(arg);
    return Init_MapData_data_parameters_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_road_segments_exists
{
public:
  explicit Init_MapData_road_segments_exists(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_data_parameters road_segments_exists(::j2735_v2x_msgs::msg::MapData::_road_segments_exists_type arg)
  {
    msg_.road_segments_exists = std::move(arg);
    return Init_MapData_data_parameters(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_road_segments
{
public:
  explicit Init_MapData_road_segments(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_road_segments_exists road_segments(::j2735_v2x_msgs::msg::MapData::_road_segments_type arg)
  {
    msg_.road_segments = std::move(arg);
    return Init_MapData_road_segments_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_intersections_exists
{
public:
  explicit Init_MapData_intersections_exists(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_road_segments intersections_exists(::j2735_v2x_msgs::msg::MapData::_intersections_exists_type arg)
  {
    msg_.intersections_exists = std::move(arg);
    return Init_MapData_road_segments(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_intersections
{
public:
  explicit Init_MapData_intersections(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_intersections_exists intersections(::j2735_v2x_msgs::msg::MapData::_intersections_type arg)
  {
    msg_.intersections = std::move(arg);
    return Init_MapData_intersections_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_layer_id_exists
{
public:
  explicit Init_MapData_layer_id_exists(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_intersections layer_id_exists(::j2735_v2x_msgs::msg::MapData::_layer_id_exists_type arg)
  {
    msg_.layer_id_exists = std::move(arg);
    return Init_MapData_intersections(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_layer_id
{
public:
  explicit Init_MapData_layer_id(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_layer_id_exists layer_id(::j2735_v2x_msgs::msg::MapData::_layer_id_type arg)
  {
    msg_.layer_id = std::move(arg);
    return Init_MapData_layer_id_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_layer_type
{
public:
  explicit Init_MapData_layer_type(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_layer_id layer_type(::j2735_v2x_msgs::msg::MapData::_layer_type_type arg)
  {
    msg_.layer_type = std::move(arg);
    return Init_MapData_layer_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_msg_issue_revision
{
public:
  explicit Init_MapData_msg_issue_revision(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_layer_type msg_issue_revision(::j2735_v2x_msgs::msg::MapData::_msg_issue_revision_type arg)
  {
    msg_.msg_issue_revision = std::move(arg);
    return Init_MapData_layer_type(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_time_stamp_exists
{
public:
  explicit Init_MapData_time_stamp_exists(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_msg_issue_revision time_stamp_exists(::j2735_v2x_msgs::msg::MapData::_time_stamp_exists_type arg)
  {
    msg_.time_stamp_exists = std::move(arg);
    return Init_MapData_msg_issue_revision(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_time_stamp
{
public:
  explicit Init_MapData_time_stamp(::j2735_v2x_msgs::msg::MapData & msg)
  : msg_(msg)
  {}
  Init_MapData_time_stamp_exists time_stamp(::j2735_v2x_msgs::msg::MapData::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_MapData_time_stamp_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

class Init_MapData_header
{
public:
  Init_MapData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapData_time_stamp header(::j2735_v2x_msgs::msg::MapData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapData_time_stamp(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::MapData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::MapData>()
{
  return j2735_v2x_msgs::msg::builder::Init_MapData_header();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__BUILDER_HPP_
