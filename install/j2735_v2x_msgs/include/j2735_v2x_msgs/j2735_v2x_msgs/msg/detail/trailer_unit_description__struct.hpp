// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_unit_description.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'is_dolly'
#include "j2735_v2x_msgs/msg/detail/is_dolly__struct.hpp"
// Member 'width'
#include "j2735_v2x_msgs/msg/detail/vehicle_width__struct.hpp"
// Member 'length'
#include "j2735_v2x_msgs/msg/detail/vehicle_length__struct.hpp"
// Member 'height'
// Member 'center_of_gravity'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__struct.hpp"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/trailer_mass__struct.hpp"
// Member 'bumper_heights'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__struct.hpp"
// Member 'front_pivot'
// Member 'rear_pivot'
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__struct.hpp"
// Member 'rear_wheel_offset'
#include "j2735_v2x_msgs/msg/detail/offset_b12__struct.hpp"
// Member 'position_offset'
#include "j2735_v2x_msgs/msg/detail/node_xy24b__struct.hpp"
// Member 'elevation_offset'
#include "j2735_v2x_msgs/msg/detail/vert_offset_b07__struct.hpp"
// Member 'crumb_data'
#include "j2735_v2x_msgs/msg/detail/trailer_history_point_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescription __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescription __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrailerUnitDescription_
{
  using Type = TrailerUnitDescription_<ContainerAllocator>;

  explicit TrailerUnitDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : is_dolly(_init),
    width(_init),
    length(_init),
    height(_init),
    mass(_init),
    bumper_heights(_init),
    center_of_gravity(_init),
    front_pivot(_init),
    rear_pivot(_init),
    rear_wheel_offset(_init),
    position_offset(_init),
    elevation_offset(_init),
    crumb_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0ul;
    }
  }

  explicit TrailerUnitDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : is_dolly(_alloc, _init),
    width(_alloc, _init),
    length(_alloc, _init),
    height(_alloc, _init),
    mass(_alloc, _init),
    bumper_heights(_alloc, _init),
    center_of_gravity(_alloc, _init),
    front_pivot(_alloc, _init),
    rear_pivot(_alloc, _init),
    rear_wheel_offset(_alloc, _init),
    position_offset(_alloc, _init),
    elevation_offset(_alloc, _init),
    crumb_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0ul;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint32_t;
  _presence_vector_type presence_vector;
  using _is_dolly_type =
    j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator>;
  _is_dolly_type is_dolly;
  using _width_type =
    j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator>;
  _width_type width;
  using _length_type =
    j2735_v2x_msgs::msg::VehicleLength_<ContainerAllocator>;
  _length_type length;
  using _height_type =
    j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>;
  _height_type height;
  using _mass_type =
    j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator>;
  _mass_type mass;
  using _bumper_heights_type =
    j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>;
  _bumper_heights_type bumper_heights;
  using _center_of_gravity_type =
    j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>;
  _center_of_gravity_type center_of_gravity;
  using _front_pivot_type =
    j2735_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>;
  _front_pivot_type front_pivot;
  using _rear_pivot_type =
    j2735_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator>;
  _rear_pivot_type rear_pivot;
  using _rear_wheel_offset_type =
    j2735_v2x_msgs::msg::OffsetB12_<ContainerAllocator>;
  _rear_wheel_offset_type rear_wheel_offset;
  using _position_offset_type =
    j2735_v2x_msgs::msg::NodeXY24b_<ContainerAllocator>;
  _position_offset_type position_offset;
  using _elevation_offset_type =
    j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator>;
  _elevation_offset_type elevation_offset;
  using _crumb_data_type =
    j2735_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator>;
  _crumb_data_type crumb_data;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint32_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__is_dolly(
    const j2735_v2x_msgs::msg::IsDolly_<ContainerAllocator> & _arg)
  {
    this->is_dolly = _arg;
    return *this;
  }
  Type & set__width(
    const j2735_v2x_msgs::msg::VehicleWidth_<ContainerAllocator> & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const j2735_v2x_msgs::msg::VehicleLength_<ContainerAllocator> & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__height(
    const j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__mass(
    const j2735_v2x_msgs::msg::TrailerMass_<ContainerAllocator> & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__bumper_heights(
    const j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> & _arg)
  {
    this->bumper_heights = _arg;
    return *this;
  }
  Type & set__center_of_gravity(
    const j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> & _arg)
  {
    this->center_of_gravity = _arg;
    return *this;
  }
  Type & set__front_pivot(
    const j2735_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> & _arg)
  {
    this->front_pivot = _arg;
    return *this;
  }
  Type & set__rear_pivot(
    const j2735_v2x_msgs::msg::PivotPointDescription_<ContainerAllocator> & _arg)
  {
    this->rear_pivot = _arg;
    return *this;
  }
  Type & set__rear_wheel_offset(
    const j2735_v2x_msgs::msg::OffsetB12_<ContainerAllocator> & _arg)
  {
    this->rear_wheel_offset = _arg;
    return *this;
  }
  Type & set__position_offset(
    const j2735_v2x_msgs::msg::NodeXY24b_<ContainerAllocator> & _arg)
  {
    this->position_offset = _arg;
    return *this;
  }
  Type & set__elevation_offset(
    const j2735_v2x_msgs::msg::VertOffsetB07_<ContainerAllocator> & _arg)
  {
    this->elevation_offset = _arg;
    return *this;
  }
  Type & set__crumb_data(
    const j2735_v2x_msgs::msg::TrailerHistoryPointList_<ContainerAllocator> & _arg)
  {
    this->crumb_data = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t HAS_HEIGHT =
    1u;
  static constexpr uint32_t HAS_MASS =
    2u;
  static constexpr uint32_t HAS_BUMPER_HEIGHTS =
    4u;
  static constexpr uint32_t HAS_CENTER_OF_GRAVITY =
    8u;
  static constexpr uint32_t HAS_REAR_PIVOT =
    16u;
  static constexpr uint32_t HAS_REAR_WHEEL_OFFSET =
    32u;
  static constexpr uint32_t HAS_ELEVATION_OFFSET =
    64u;
  static constexpr uint32_t HAS_CRUMB_DATA =
    128u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescription
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescription
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrailerUnitDescription_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->is_dolly != other.is_dolly) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->bumper_heights != other.bumper_heights) {
      return false;
    }
    if (this->center_of_gravity != other.center_of_gravity) {
      return false;
    }
    if (this->front_pivot != other.front_pivot) {
      return false;
    }
    if (this->rear_pivot != other.rear_pivot) {
      return false;
    }
    if (this->rear_wheel_offset != other.rear_wheel_offset) {
      return false;
    }
    if (this->position_offset != other.position_offset) {
      return false;
    }
    if (this->elevation_offset != other.elevation_offset) {
      return false;
    }
    if (this->crumb_data != other.crumb_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrailerUnitDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrailerUnitDescription_

// alias to use template instance with default allocator
using TrailerUnitDescription =
  j2735_v2x_msgs::msg::TrailerUnitDescription_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_HEIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_MASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_BUMPER_HEIGHTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_CENTER_OF_GRAVITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_REAR_PIVOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_REAR_WHEEL_OFFSET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_ELEVATION_OFFSET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t TrailerUnitDescription_<ContainerAllocator>::HAS_CRUMB_DATA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION__STRUCT_HPP_
