// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/vehicle_classification.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'key_type'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__struct.hpp"
// Member 'role'
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__struct.hpp"
// Member 'hpms_type'
#include "j2735_v2x_msgs/msg/detail/vehicle_type__struct.hpp"
// Member 'vehicle_type'
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__struct.hpp"
// Member 'response_equip'
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__struct.hpp"
// Member 'responder_type'
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__struct.hpp"
// Member 'fuel_type'
#include "j2735_v2x_msgs/msg/detail/fuel_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleClassification __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__VehicleClassification __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleClassification_
{
  using Type = VehicleClassification_<ContainerAllocator>;

  explicit VehicleClassification_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key_type(_init),
    role(_init),
    hpms_type(_init),
    vehicle_type(_init),
    response_equip(_init),
    responder_type(_init),
    fuel_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->iso3833 = 0;
    }
  }

  explicit VehicleClassification_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : key_type(_alloc, _init),
    role(_alloc, _init),
    hpms_type(_alloc, _init),
    vehicle_type(_alloc, _init),
    response_equip(_alloc, _init),
    responder_type(_alloc, _init),
    fuel_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
      this->iso3833 = 0;
    }
  }

  // field types and members
  using _presence_vector_type =
    uint16_t;
  _presence_vector_type presence_vector;
  using _key_type_type =
    j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator>;
  _key_type_type key_type;
  using _role_type =
    j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator>;
  _role_type role;
  using _iso3833_type =
    uint8_t;
  _iso3833_type iso3833;
  using _hpms_type_type =
    j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator>;
  _hpms_type_type hpms_type;
  using _vehicle_type_type =
    j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator>;
  _vehicle_type_type vehicle_type;
  using _response_equip_type =
    j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator>;
  _response_equip_type response_equip;
  using _responder_type_type =
    j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator>;
  _responder_type_type responder_type;
  using _fuel_type_type =
    j2735_v2x_msgs::msg::FuelType_<ContainerAllocator>;
  _fuel_type_type fuel_type;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__key_type(
    const j2735_v2x_msgs::msg::BasicVehicleClass_<ContainerAllocator> & _arg)
  {
    this->key_type = _arg;
    return *this;
  }
  Type & set__role(
    const j2735_v2x_msgs::msg::BasicVehicleRole_<ContainerAllocator> & _arg)
  {
    this->role = _arg;
    return *this;
  }
  Type & set__iso3833(
    const uint8_t & _arg)
  {
    this->iso3833 = _arg;
    return *this;
  }
  Type & set__hpms_type(
    const j2735_v2x_msgs::msg::VehicleType_<ContainerAllocator> & _arg)
  {
    this->hpms_type = _arg;
    return *this;
  }
  Type & set__vehicle_type(
    const j2735_v2x_msgs::msg::ITISVehicleGroupAffected_<ContainerAllocator> & _arg)
  {
    this->vehicle_type = _arg;
    return *this;
  }
  Type & set__response_equip(
    const j2735_v2x_msgs::msg::ITISIncidentResponseEquipment_<ContainerAllocator> & _arg)
  {
    this->response_equip = _arg;
    return *this;
  }
  Type & set__responder_type(
    const j2735_v2x_msgs::msg::ITISResponderGroupAffected_<ContainerAllocator> & _arg)
  {
    this->responder_type = _arg;
    return *this;
  }
  Type & set__fuel_type(
    const j2735_v2x_msgs::msg::FuelType_<ContainerAllocator> & _arg)
  {
    this->fuel_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_KEY_TYPE =
    1u;
  static constexpr uint16_t HAS_ROLE =
    2u;
  static constexpr uint16_t HAS_ISO =
    4u;
  static constexpr uint16_t HAS_HPMS_TYPE =
    8u;
  static constexpr uint16_t HAS_VEHICLE_TYPE =
    16u;
  static constexpr uint16_t HAS_RESPONSE_EQUIP =
    32u;
  static constexpr uint16_t HAS_RESPONDER_TYPE =
    64u;
  static constexpr uint16_t HAS_FUEL_TYPE =
    128u;
  static constexpr uint8_t ISO3833_MIN =
    0u;
  static constexpr uint8_t ISO3833_MAX =
    100u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleClassification
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__VehicleClassification
    std::shared_ptr<j2735_v2x_msgs::msg::VehicleClassification_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleClassification_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->key_type != other.key_type) {
      return false;
    }
    if (this->role != other.role) {
      return false;
    }
    if (this->iso3833 != other.iso3833) {
      return false;
    }
    if (this->hpms_type != other.hpms_type) {
      return false;
    }
    if (this->vehicle_type != other.vehicle_type) {
      return false;
    }
    if (this->response_equip != other.response_equip) {
      return false;
    }
    if (this->responder_type != other.responder_type) {
      return false;
    }
    if (this->fuel_type != other.fuel_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleClassification_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleClassification_

// alias to use template instance with default allocator
using VehicleClassification =
  j2735_v2x_msgs::msg::VehicleClassification_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_KEY_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_ROLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_ISO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_HPMS_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_VEHICLE_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_RESPONSE_EQUIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_RESPONDER_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t VehicleClassification_<ContainerAllocator>::HAS_FUEL_TYPE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleClassification_<ContainerAllocator>::ISO3833_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleClassification_<ContainerAllocator>::ISO3833_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VEHICLE_CLASSIFICATION__STRUCT_HPP_
