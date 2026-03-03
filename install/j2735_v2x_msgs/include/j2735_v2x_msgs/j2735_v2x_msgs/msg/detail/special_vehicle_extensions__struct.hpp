// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SpecialVehicleExtensions.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/special_vehicle_extensions.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vehicle_alerts'
#include "j2735_v2x_msgs/msg/detail/emergency_details__struct.hpp"
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/event_description__struct.hpp"
// Member 'trailers'
#include "j2735_v2x_msgs/msg/detail/trailer_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SpecialVehicleExtensions __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SpecialVehicleExtensions __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpecialVehicleExtensions_
{
  using Type = SpecialVehicleExtensions_<ContainerAllocator>;

  explicit SpecialVehicleExtensions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_alerts(_init),
    description(_init),
    trailers(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit SpecialVehicleExtensions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_alerts(_alloc, _init),
    description(_alloc, _init),
    trailers(_alloc, _init)
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
  using _vehicle_alerts_type =
    j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator>;
  _vehicle_alerts_type vehicle_alerts;
  using _description_type =
    j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator>;
  _description_type description;
  using _trailers_type =
    j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator>;
  _trailers_type trailers;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__vehicle_alerts(
    const j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator> & _arg)
  {
    this->vehicle_alerts = _arg;
    return *this;
  }
  Type & set__description(
    const j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__trailers(
    const j2735_v2x_msgs::msg::TrailerData_<ContainerAllocator> & _arg)
  {
    this->trailers = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_VEHICLE_ALERTS =
    1u;
  static constexpr uint16_t HAS_DESCRIPTION =
    2u;
  static constexpr uint16_t HAS_TRAILERS =
    4u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpecialVehicleExtensions
    std::shared_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SpecialVehicleExtensions
    std::shared_ptr<j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpecialVehicleExtensions_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->vehicle_alerts != other.vehicle_alerts) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->trailers != other.trailers) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpecialVehicleExtensions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpecialVehicleExtensions_

// alias to use template instance with default allocator
using SpecialVehicleExtensions =
  j2735_v2x_msgs::msg::SpecialVehicleExtensions_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SpecialVehicleExtensions_<ContainerAllocator>::HAS_VEHICLE_ALERTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SpecialVehicleExtensions_<ContainerAllocator>::HAS_DESCRIPTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t SpecialVehicleExtensions_<ContainerAllocator>::HAS_TRAILERS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPECIAL_VEHICLE_EXTENSIONS__STRUCT_HPP_
