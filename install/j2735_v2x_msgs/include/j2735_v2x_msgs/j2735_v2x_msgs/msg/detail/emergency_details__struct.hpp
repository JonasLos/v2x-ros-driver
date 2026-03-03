// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/EmergencyDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/emergency_details.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'siren_use'
#include "j2735_v2x_msgs/msg/detail/siren_in_use__struct.hpp"
// Member 'lights_use'
#include "j2735_v2x_msgs/msg/detail/lightbar_in_use__struct.hpp"
// Member 'multi'
#include "j2735_v2x_msgs/msg/detail/multi_vehicle_response__struct.hpp"
// Member 'events'
#include "j2735_v2x_msgs/msg/detail/privileged_events__struct.hpp"
// Member 'response_type'
#include "j2735_v2x_msgs/msg/detail/response_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__EmergencyDetails __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__EmergencyDetails __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EmergencyDetails_
{
  using Type = EmergencyDetails_<ContainerAllocator>;

  explicit EmergencyDetails_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : siren_use(_init),
    lights_use(_init),
    multi(_init),
    events(_init),
    response_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->ssp_index = 0;
    }
  }

  explicit EmergencyDetails_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : siren_use(_alloc, _init),
    lights_use(_alloc, _init),
    multi(_alloc, _init),
    events(_alloc, _init),
    response_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->ssp_index = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _ssp_index_type =
    uint8_t;
  _ssp_index_type ssp_index;
  using _siren_use_type =
    j2735_v2x_msgs::msg::SirenInUse_<ContainerAllocator>;
  _siren_use_type siren_use;
  using _lights_use_type =
    j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator>;
  _lights_use_type lights_use;
  using _multi_type =
    j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator>;
  _multi_type multi;
  using _events_type =
    j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator>;
  _events_type events;
  using _response_type_type =
    j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator>;
  _response_type_type response_type;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__ssp_index(
    const uint8_t & _arg)
  {
    this->ssp_index = _arg;
    return *this;
  }
  Type & set__siren_use(
    const j2735_v2x_msgs::msg::SirenInUse_<ContainerAllocator> & _arg)
  {
    this->siren_use = _arg;
    return *this;
  }
  Type & set__lights_use(
    const j2735_v2x_msgs::msg::LightbarInUse_<ContainerAllocator> & _arg)
  {
    this->lights_use = _arg;
    return *this;
  }
  Type & set__multi(
    const j2735_v2x_msgs::msg::MultiVehicleResponse_<ContainerAllocator> & _arg)
  {
    this->multi = _arg;
    return *this;
  }
  Type & set__events(
    const j2735_v2x_msgs::msg::PrivilegedEvents_<ContainerAllocator> & _arg)
  {
    this->events = _arg;
    return *this;
  }
  Type & set__response_type(
    const j2735_v2x_msgs::msg::ResponseType_<ContainerAllocator> & _arg)
  {
    this->response_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_EVENTS =
    1u;
  static constexpr uint16_t HAS_RESPONSE_TYPE =
    2u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__EmergencyDetails
    std::shared_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__EmergencyDetails
    std::shared_ptr<j2735_v2x_msgs::msg::EmergencyDetails_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EmergencyDetails_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->ssp_index != other.ssp_index) {
      return false;
    }
    if (this->siren_use != other.siren_use) {
      return false;
    }
    if (this->lights_use != other.lights_use) {
      return false;
    }
    if (this->multi != other.multi) {
      return false;
    }
    if (this->events != other.events) {
      return false;
    }
    if (this->response_type != other.response_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const EmergencyDetails_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EmergencyDetails_

// alias to use template instance with default allocator
using EmergencyDetails =
  j2735_v2x_msgs::msg::EmergencyDetails_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t EmergencyDetails_<ContainerAllocator>::HAS_EVENTS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t EmergencyDetails_<ContainerAllocator>::HAS_RESPONSE_TYPE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EMERGENCY_DETAILS__STRUCT_HPP_
