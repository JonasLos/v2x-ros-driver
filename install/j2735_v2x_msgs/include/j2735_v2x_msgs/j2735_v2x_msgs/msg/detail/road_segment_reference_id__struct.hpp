// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/RoadSegmentReferenceID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/road_segment_reference_id.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__RoadSegmentReferenceID __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__RoadSegmentReferenceID __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadSegmentReferenceID_
{
  using Type = RoadSegmentReferenceID_<ContainerAllocator>;

  explicit RoadSegmentReferenceID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region = 0;
      this->region_exists = false;
      this->id = 0;
      this->id_exists = false;
    }
  }

  explicit RoadSegmentReferenceID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->region = 0;
      this->region_exists = false;
      this->id = 0;
      this->id_exists = false;
    }
  }

  // field types and members
  using _region_type =
    uint16_t;
  _region_type region;
  using _region_exists_type =
    bool;
  _region_exists_type region_exists;
  using _id_type =
    uint16_t;
  _id_type id;
  using _id_exists_type =
    bool;
  _id_exists_type id_exists;

  // setters for named parameter idiom
  Type & set__region(
    const uint16_t & _arg)
  {
    this->region = _arg;
    return *this;
  }
  Type & set__region_exists(
    const bool & _arg)
  {
    this->region_exists = _arg;
    return *this;
  }
  Type & set__id(
    const uint16_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__id_exists(
    const bool & _arg)
  {
    this->id_exists = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__RoadSegmentReferenceID
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__RoadSegmentReferenceID
    std::shared_ptr<j2735_v2x_msgs::msg::RoadSegmentReferenceID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadSegmentReferenceID_ & other) const
  {
    if (this->region != other.region) {
      return false;
    }
    if (this->region_exists != other.region_exists) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->id_exists != other.id_exists) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadSegmentReferenceID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadSegmentReferenceID_

// alias to use template instance with default allocator
using RoadSegmentReferenceID =
  j2735_v2x_msgs::msg::RoadSegmentReferenceID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_REFERENCE_ID__STRUCT_HPP_
