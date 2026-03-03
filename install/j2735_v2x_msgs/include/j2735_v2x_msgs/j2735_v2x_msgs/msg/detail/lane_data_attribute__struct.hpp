// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/lane_data_attribute.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'speed_limits'
#include "j2735_v2x_msgs/msg/detail/speed_limit_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__LaneDataAttribute __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__LaneDataAttribute __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneDataAttribute_
{
  using Type = LaneDataAttribute_<ContainerAllocator>;

  explicit LaneDataAttribute_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speed_limits(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->path_end_point_angle = 0;
      this->lane_crown_point_center = 0;
      this->lane_crown_point_right = 0;
      this->lane_crown_point_left = 0;
      this->lane_angle = 0;
    }
  }

  explicit LaneDataAttribute_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speed_limits(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->choice = 0;
      this->path_end_point_angle = 0;
      this->lane_crown_point_center = 0;
      this->lane_crown_point_right = 0;
      this->lane_crown_point_left = 0;
      this->lane_angle = 0;
    }
  }

  // field types and members
  using _choice_type =
    uint8_t;
  _choice_type choice;
  using _path_end_point_angle_type =
    int16_t;
  _path_end_point_angle_type path_end_point_angle;
  using _lane_crown_point_center_type =
    int8_t;
  _lane_crown_point_center_type lane_crown_point_center;
  using _lane_crown_point_right_type =
    int8_t;
  _lane_crown_point_right_type lane_crown_point_right;
  using _lane_crown_point_left_type =
    int8_t;
  _lane_crown_point_left_type lane_crown_point_left;
  using _lane_angle_type =
    int16_t;
  _lane_angle_type lane_angle;
  using _speed_limits_type =
    j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator>;
  _speed_limits_type speed_limits;

  // setters for named parameter idiom
  Type & set__choice(
    const uint8_t & _arg)
  {
    this->choice = _arg;
    return *this;
  }
  Type & set__path_end_point_angle(
    const int16_t & _arg)
  {
    this->path_end_point_angle = _arg;
    return *this;
  }
  Type & set__lane_crown_point_center(
    const int8_t & _arg)
  {
    this->lane_crown_point_center = _arg;
    return *this;
  }
  Type & set__lane_crown_point_right(
    const int8_t & _arg)
  {
    this->lane_crown_point_right = _arg;
    return *this;
  }
  Type & set__lane_crown_point_left(
    const int8_t & _arg)
  {
    this->lane_crown_point_left = _arg;
    return *this;
  }
  Type & set__lane_angle(
    const int16_t & _arg)
  {
    this->lane_angle = _arg;
    return *this;
  }
  Type & set__speed_limits(
    const j2735_v2x_msgs::msg::SpeedLimitList_<ContainerAllocator> & _arg)
  {
    this->speed_limits = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PATH_END_POINT_ANGLE =
    0u;
  static constexpr uint8_t LANE_CROWN_POINT_CENTER =
    1u;
  static constexpr uint8_t LANE_CROWN_POINT_LEFT =
    2u;
  static constexpr uint8_t LANE_CROWN_POINT_RIGHT =
    3u;
  static constexpr uint8_t LANE_ANGLE =
    4u;
  static constexpr uint8_t SPEED_LIMITS =
    5u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneDataAttribute
    std::shared_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__LaneDataAttribute
    std::shared_ptr<j2735_v2x_msgs::msg::LaneDataAttribute_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneDataAttribute_ & other) const
  {
    if (this->choice != other.choice) {
      return false;
    }
    if (this->path_end_point_angle != other.path_end_point_angle) {
      return false;
    }
    if (this->lane_crown_point_center != other.lane_crown_point_center) {
      return false;
    }
    if (this->lane_crown_point_right != other.lane_crown_point_right) {
      return false;
    }
    if (this->lane_crown_point_left != other.lane_crown_point_left) {
      return false;
    }
    if (this->lane_angle != other.lane_angle) {
      return false;
    }
    if (this->speed_limits != other.speed_limits) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneDataAttribute_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneDataAttribute_

// alias to use template instance with default allocator
using LaneDataAttribute =
  j2735_v2x_msgs::msg::LaneDataAttribute_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::PATH_END_POINT_ANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_CROWN_POINT_CENTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_CROWN_POINT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_CROWN_POINT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::LANE_ANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneDataAttribute_<ContainerAllocator>::SPEED_LIMITS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__STRUCT_HPP_
