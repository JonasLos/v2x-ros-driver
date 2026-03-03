// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/full_position_vector.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'utc_time'
#include "j2735_v2x_msgs/msg/detail/d_date_time__struct.hpp"
// Member 'lon'
#include "j2735_v2x_msgs/msg/detail/longitude__struct.hpp"
// Member 'lat'
#include "j2735_v2x_msgs/msg/detail/latitude__struct.hpp"
// Member 'elevation'
#include "j2735_v2x_msgs/msg/detail/elevation__struct.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading__struct.hpp"
// Member 'speed'
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__struct.hpp"
// Member 'pos_accuracy'
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__struct.hpp"
// Member 'time_confidence'
#include "j2735_v2x_msgs/msg/detail/time_confidence__struct.hpp"
// Member 'pos_confidence'
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__struct.hpp"
// Member 'speed_confidence'
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__FullPositionVector __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__FullPositionVector __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FullPositionVector_
{
  using Type = FullPositionVector_<ContainerAllocator>;

  explicit FullPositionVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utc_time(_init),
    lon(_init),
    lat(_init),
    elevation(_init),
    heading(_init),
    speed(_init),
    pos_accuracy(_init),
    time_confidence(_init),
    pos_confidence(_init),
    speed_confidence(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit FullPositionVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : utc_time(_alloc, _init),
    lon(_alloc, _init),
    lat(_alloc, _init),
    elevation(_alloc, _init),
    heading(_alloc, _init),
    speed(_alloc, _init),
    pos_accuracy(_alloc, _init),
    time_confidence(_alloc, _init),
    pos_confidence(_alloc, _init),
    speed_confidence(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _utc_time_type =
    j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator>;
  _utc_time_type utc_time;
  using _lon_type =
    j2735_v2x_msgs::msg::Longitude_<ContainerAllocator>;
  _lon_type lon;
  using _lat_type =
    j2735_v2x_msgs::msg::Latitude_<ContainerAllocator>;
  _lat_type lat;
  using _elevation_type =
    j2735_v2x_msgs::msg::Elevation_<ContainerAllocator>;
  _elevation_type elevation;
  using _heading_type =
    j2735_v2x_msgs::msg::Heading_<ContainerAllocator>;
  _heading_type heading;
  using _speed_type =
    j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator>;
  _speed_type speed;
  using _pos_accuracy_type =
    j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator>;
  _pos_accuracy_type pos_accuracy;
  using _time_confidence_type =
    j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator>;
  _time_confidence_type time_confidence;
  using _pos_confidence_type =
    j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator>;
  _pos_confidence_type pos_confidence;
  using _speed_confidence_type =
    j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator>;
  _speed_confidence_type speed_confidence;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__utc_time(
    const j2735_v2x_msgs::msg::DDateTime_<ContainerAllocator> & _arg)
  {
    this->utc_time = _arg;
    return *this;
  }
  Type & set__lon(
    const j2735_v2x_msgs::msg::Longitude_<ContainerAllocator> & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__lat(
    const j2735_v2x_msgs::msg::Latitude_<ContainerAllocator> & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__elevation(
    const j2735_v2x_msgs::msg::Elevation_<ContainerAllocator> & _arg)
  {
    this->elevation = _arg;
    return *this;
  }
  Type & set__heading(
    const j2735_v2x_msgs::msg::Heading_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const j2735_v2x_msgs::msg::TransmissionAndSpeed_<ContainerAllocator> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__pos_accuracy(
    const j2735_v2x_msgs::msg::PositionalAccuracy_<ContainerAllocator> & _arg)
  {
    this->pos_accuracy = _arg;
    return *this;
  }
  Type & set__time_confidence(
    const j2735_v2x_msgs::msg::TimeConfidence_<ContainerAllocator> & _arg)
  {
    this->time_confidence = _arg;
    return *this;
  }
  Type & set__pos_confidence(
    const j2735_v2x_msgs::msg::PositionConfidenceSet_<ContainerAllocator> & _arg)
  {
    this->pos_confidence = _arg;
    return *this;
  }
  Type & set__speed_confidence(
    const j2735_v2x_msgs::msg::SpeedandHeadingandThrottleConfidence_<ContainerAllocator> & _arg)
  {
    this->speed_confidence = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_UTC_TIME =
    1u;
  static constexpr uint16_t HAS_ELEVATION =
    2u;
  static constexpr uint16_t HAS_HEADING =
    4u;
  static constexpr uint16_t HAS_SPEED =
    8u;
  static constexpr uint16_t HAS_POS_ACCURACY =
    16u;
  static constexpr uint16_t HAS_TIME_CONFIDENCE =
    32u;
  static constexpr uint16_t HAS_POS_CONFIDENCE =
    64u;
  static constexpr uint16_t HAS_SPEED_CONFIDENCE =
    128u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__FullPositionVector
    std::shared_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__FullPositionVector
    std::shared_ptr<j2735_v2x_msgs::msg::FullPositionVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FullPositionVector_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->utc_time != other.utc_time) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->elevation != other.elevation) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->pos_accuracy != other.pos_accuracy) {
      return false;
    }
    if (this->time_confidence != other.time_confidence) {
      return false;
    }
    if (this->pos_confidence != other.pos_confidence) {
      return false;
    }
    if (this->speed_confidence != other.speed_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const FullPositionVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FullPositionVector_

// alias to use template instance with default allocator
using FullPositionVector =
  j2735_v2x_msgs::msg::FullPositionVector_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_UTC_TIME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_ELEVATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_HEADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_POS_ACCURACY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_TIME_CONFIDENCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_POS_CONFIDENCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t FullPositionVector_<ContainerAllocator>::HAS_SPEED_CONFIDENCE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__STRUCT_HPP_
