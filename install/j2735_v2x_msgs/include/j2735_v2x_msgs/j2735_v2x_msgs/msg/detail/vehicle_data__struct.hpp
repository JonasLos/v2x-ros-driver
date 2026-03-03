// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_data.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'height'
#include "j2735_v2x_msgs/msg/detail/vehicle_height__struct.hpp"
// Member 'bumpers'
#include "j2735_v2x_msgs/msg/detail/bumper_heights__struct.hpp"
// Member 'mass'
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__struct.hpp"
// Member 'trailer_weight'
#include "j2735_v2x_msgs/msg/detail/trailer_weight__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleData __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleData __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleData_
{
  using Type = VehicleData_<ContainerAllocator>;

  explicit VehicleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : height(_init),
    bumpers(_init),
    mass(_init),
    trailer_weight(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit VehicleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : height(_alloc, _init),
    bumpers(_alloc, _init),
    mass(_alloc, _init),
    trailer_weight(_alloc, _init)
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
  using _height_type =
    j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator>;
  _height_type height;
  using _bumpers_type =
    j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator>;
  _bumpers_type bumpers;
  using _mass_type =
    j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator>;
  _mass_type mass;
  using _trailer_weight_type =
    j2735_v2x_msgs::msg::TrailerWeight_<ContainerAllocator>;
  _trailer_weight_type trailer_weight;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__height(
    const j2735_v2x_msgs::msg::VehicleHeight_<ContainerAllocator> & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__bumpers(
    const j2735_v2x_msgs::msg::BumperHeights_<ContainerAllocator> & _arg)
  {
    this->bumpers = _arg;
    return *this;
  }
  Type & set__mass(
    const j2735_v2x_msgs::msg::VehicleMass_<ContainerAllocator> & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__trailer_weight(
    const j2735_v2x_msgs::msg::TrailerWeight_<ContainerAllocator> & _arg)
  {
    this->trailer_weight = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_HEIGHT =
    1u;
  static constexpr uint16_t HAS_BUMPERS =
    2u;
  static constexpr uint16_t HAS_MASS =
    4u;
  static constexpr uint16_t HAS_TRAILER_WEIGHT =
    8u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleData
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleData
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleData_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->bumpers != other.bumpers) {
      return false;
    }
    if (this->mass != other.mass) {
      return false;
    }
    if (this->trailer_weight != other.trailer_weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleData_

// alias to use template instance with default allocator
using VehicleData =
  j2735_v2x_msgs::msg::VehicleData_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleData_<ContainerAllocator>::HAS_HEIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleData_<ContainerAllocator>::HAS_BUMPERS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleData_<ContainerAllocator>::HAS_MASS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleData_<ContainerAllocator>::HAS_TRAILER_WEIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_DATA__STRUCT_HPP_
