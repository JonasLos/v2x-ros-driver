// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/MapData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/map_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'layer_type'
#include "j2735_v2x_msgs/msg/detail/layer_type__struct.hpp"
// Member 'intersections'
#include "j2735_v2x_msgs/msg/detail/intersection_geometry__struct.hpp"
// Member 'road_segments'
#include "j2735_v2x_msgs/msg/detail/road_segment_list__struct.hpp"
// Member 'data_parameters'
#include "j2735_v2x_msgs/msg/detail/data_parameters__struct.hpp"
// Member 'restriction_list'
#include "j2735_v2x_msgs/msg/detail/restriction_class_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__MapData __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__MapData __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapData_
{
  using Type = MapData_<ContainerAllocator>;

  explicit MapData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    layer_type(_init),
    road_segments(_init),
    data_parameters(_init),
    restriction_list(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->msg_issue_revision = 0;
      this->layer_id = 0;
      this->layer_id_exists = false;
      this->intersections_exists = false;
      this->road_segments_exists = false;
      this->data_parameters_exists = false;
      this->restriction_list_exists = false;
    }
  }

  explicit MapData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    layer_type(_alloc, _init),
    road_segments(_alloc, _init),
    data_parameters(_alloc, _init),
    restriction_list(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->msg_issue_revision = 0;
      this->layer_id = 0;
      this->layer_id_exists = false;
      this->intersections_exists = false;
      this->road_segments_exists = false;
      this->data_parameters_exists = false;
      this->restriction_list_exists = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _time_stamp_exists_type =
    bool;
  _time_stamp_exists_type time_stamp_exists;
  using _msg_issue_revision_type =
    uint8_t;
  _msg_issue_revision_type msg_issue_revision;
  using _layer_type_type =
    j2735_v2x_msgs::msg::LayerType_<ContainerAllocator>;
  _layer_type_type layer_type;
  using _layer_id_type =
    uint8_t;
  _layer_id_type layer_id;
  using _layer_id_exists_type =
    bool;
  _layer_id_exists_type layer_id_exists;
  using _intersections_type =
    std::vector<j2735_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>>>;
  _intersections_type intersections;
  using _intersections_exists_type =
    bool;
  _intersections_exists_type intersections_exists;
  using _road_segments_type =
    j2735_v2x_msgs::msg::RoadSegmentList_<ContainerAllocator>;
  _road_segments_type road_segments;
  using _road_segments_exists_type =
    bool;
  _road_segments_exists_type road_segments_exists;
  using _data_parameters_type =
    j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator>;
  _data_parameters_type data_parameters;
  using _data_parameters_exists_type =
    bool;
  _data_parameters_exists_type data_parameters_exists;
  using _restriction_list_type =
    j2735_v2x_msgs::msg::RestrictionClassList_<ContainerAllocator>;
  _restriction_list_type restriction_list;
  using _restriction_list_exists_type =
    bool;
  _restriction_list_exists_type restriction_list_exists;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__time_stamp_exists(
    const bool & _arg)
  {
    this->time_stamp_exists = _arg;
    return *this;
  }
  Type & set__msg_issue_revision(
    const uint8_t & _arg)
  {
    this->msg_issue_revision = _arg;
    return *this;
  }
  Type & set__layer_type(
    const j2735_v2x_msgs::msg::LayerType_<ContainerAllocator> & _arg)
  {
    this->layer_type = _arg;
    return *this;
  }
  Type & set__layer_id(
    const uint8_t & _arg)
  {
    this->layer_id = _arg;
    return *this;
  }
  Type & set__layer_id_exists(
    const bool & _arg)
  {
    this->layer_id_exists = _arg;
    return *this;
  }
  Type & set__intersections(
    const std::vector<j2735_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::IntersectionGeometry_<ContainerAllocator>>> & _arg)
  {
    this->intersections = _arg;
    return *this;
  }
  Type & set__intersections_exists(
    const bool & _arg)
  {
    this->intersections_exists = _arg;
    return *this;
  }
  Type & set__road_segments(
    const j2735_v2x_msgs::msg::RoadSegmentList_<ContainerAllocator> & _arg)
  {
    this->road_segments = _arg;
    return *this;
  }
  Type & set__road_segments_exists(
    const bool & _arg)
  {
    this->road_segments_exists = _arg;
    return *this;
  }
  Type & set__data_parameters(
    const j2735_v2x_msgs::msg::DataParameters_<ContainerAllocator> & _arg)
  {
    this->data_parameters = _arg;
    return *this;
  }
  Type & set__data_parameters_exists(
    const bool & _arg)
  {
    this->data_parameters_exists = _arg;
    return *this;
  }
  Type & set__restriction_list(
    const j2735_v2x_msgs::msg::RestrictionClassList_<ContainerAllocator> & _arg)
  {
    this->restriction_list = _arg;
    return *this;
  }
  Type & set__restriction_list_exists(
    const bool & _arg)
  {
    this->restriction_list_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::MapData_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::MapData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MapData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::MapData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__MapData
    std::shared_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__MapData
    std::shared_ptr<j2735_v2x_msgs::msg::MapData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->time_stamp_exists != other.time_stamp_exists) {
      return false;
    }
    if (this->msg_issue_revision != other.msg_issue_revision) {
      return false;
    }
    if (this->layer_type != other.layer_type) {
      return false;
    }
    if (this->layer_id != other.layer_id) {
      return false;
    }
    if (this->layer_id_exists != other.layer_id_exists) {
      return false;
    }
    if (this->intersections != other.intersections) {
      return false;
    }
    if (this->intersections_exists != other.intersections_exists) {
      return false;
    }
    if (this->road_segments != other.road_segments) {
      return false;
    }
    if (this->road_segments_exists != other.road_segments_exists) {
      return false;
    }
    if (this->data_parameters != other.data_parameters) {
      return false;
    }
    if (this->data_parameters_exists != other.data_parameters_exists) {
      return false;
    }
    if (this->restriction_list != other.restriction_list) {
      return false;
    }
    if (this->restriction_list_exists != other.restriction_list_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapData_

// alias to use template instance with default allocator
using MapData =
  j2735_v2x_msgs::msg::MapData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__MAP_DATA__STRUCT_HPP_
