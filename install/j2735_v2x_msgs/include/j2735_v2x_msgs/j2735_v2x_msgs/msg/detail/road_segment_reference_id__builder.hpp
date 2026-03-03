// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from j2735_v2x_msgs:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_segment_reference_id.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__BUILDER_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "j2735_v2x_msgs/msg/detail/road_segment_reference_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace j2735_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadSegmentReferenceID_id_exists
{
public:
  explicit Init_RoadSegmentReferenceID_id_exists(::j2735_v2x_msgs::msg::RoadSegmentReferenceID & msg)
  : msg_(msg)
  {}
  ::j2735_v2x_msgs::msg::RoadSegmentReferenceID id_exists(::j2735_v2x_msgs::msg::RoadSegmentReferenceID::_id_exists_type arg)
  {
    msg_.id_exists = std::move(arg);
    return std::move(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RoadSegmentReferenceID msg_;
};

class Init_RoadSegmentReferenceID_id
{
public:
  explicit Init_RoadSegmentReferenceID_id(::j2735_v2x_msgs::msg::RoadSegmentReferenceID & msg)
  : msg_(msg)
  {}
  Init_RoadSegmentReferenceID_id_exists id(::j2735_v2x_msgs::msg::RoadSegmentReferenceID::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RoadSegmentReferenceID_id_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RoadSegmentReferenceID msg_;
};

class Init_RoadSegmentReferenceID_region_exists
{
public:
  explicit Init_RoadSegmentReferenceID_region_exists(::j2735_v2x_msgs::msg::RoadSegmentReferenceID & msg)
  : msg_(msg)
  {}
  Init_RoadSegmentReferenceID_id region_exists(::j2735_v2x_msgs::msg::RoadSegmentReferenceID::_region_exists_type arg)
  {
    msg_.region_exists = std::move(arg);
    return Init_RoadSegmentReferenceID_id(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RoadSegmentReferenceID msg_;
};

class Init_RoadSegmentReferenceID_region
{
public:
  Init_RoadSegmentReferenceID_region()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadSegmentReferenceID_region_exists region(::j2735_v2x_msgs::msg::RoadSegmentReferenceID::_region_type arg)
  {
    msg_.region = std::move(arg);
    return Init_RoadSegmentReferenceID_region_exists(msg_);
  }

private:
  ::j2735_v2x_msgs::msg::RoadSegmentReferenceID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::j2735_v2x_msgs::msg::RoadSegmentReferenceID>()
{
  return j2735_v2x_msgs::msg::builder::Init_RoadSegmentReferenceID_region();
}

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__BUILDER_HPP_
