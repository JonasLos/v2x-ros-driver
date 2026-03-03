// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BSMPartIIExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_part_ii_extension.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vehicle_safety_extensions'
#include "j2735_v2x_msgs/msg/detail/vehicle_safety_extensions__struct.hpp"
// Member 'special_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/special_vehicle_extensions__struct.hpp"
// Member 'supplemental_vehicle_extensions'
#include "j2735_v2x_msgs/msg/detail/supplemental_vehicle_extensions__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BSMPartIIExtension __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BSMPartIIExtension __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSMPartIIExtension_
{
  using Type = BSMPartIIExtension_<ContainerAllocator>;

  explicit BSMPartIIExtension_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_safety_extensions(_init),
    special_vehicle_extensions(_init),
    supplemental_vehicle_extensions(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->part_ii_id = 0;
    }
  }

  explicit BSMPartIIExtension_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : vehicle_safety_extensions(_alloc, _init),
    special_vehicle_extensions(_alloc, _init),
    supplemental_vehicle_extensions(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->part_ii_id = 0;
    }
  }

  // field types and members
  using _part_ii_id_type =
    uint8_t;
  _part_ii_id_type part_ii_id;
  using _vehicle_safety_extensions_type =
    j2735_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator>;
  _vehicle_safety_extensions_type vehicle_safety_extensions;
  using _special_vehicle_extensions_type =
    j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator>;
  _special_vehicle_extensions_type special_vehicle_extensions;
  using _supplemental_vehicle_extensions_type =
    j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator>;
  _supplemental_vehicle_extensions_type supplemental_vehicle_extensions;

  // setters for named parameter idiom
  Type & set__part_ii_id(
    const uint8_t & _arg)
  {
    this->part_ii_id = _arg;
    return *this;
  }
  Type & set__vehicle_safety_extensions(
    const j2735_v2x_msgs::msg::VehicleSafetyExtensions_<ContainerAllocator> & _arg)
  {
    this->vehicle_safety_extensions = _arg;
    return *this;
  }
  Type & set__special_vehicle_extensions(
    const j2735_v2x_msgs::msg::SpecialVehicleExtensions_<ContainerAllocator> & _arg)
  {
    this->special_vehicle_extensions = _arg;
    return *this;
  }
  Type & set__supplemental_vehicle_extensions(
    const j2735_v2x_msgs::msg::SupplementalVehicleExtensions_<ContainerAllocator> & _arg)
  {
    this->supplemental_vehicle_extensions = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t VEHICLE_SAFETY_EXT =
    0u;
  static constexpr uint8_t SPECIAL_VEHICLE_EXT =
    1u;
  static constexpr uint8_t SUPPLEMENTAL_VEHICLE_EXT =
    2u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BSMPartIIExtension
    std::shared_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BSMPartIIExtension
    std::shared_ptr<j2735_v2x_msgs::msg::BSMPartIIExtension_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSMPartIIExtension_ & other) const
  {
    if (this->part_ii_id != other.part_ii_id) {
      return false;
    }
    if (this->vehicle_safety_extensions != other.vehicle_safety_extensions) {
      return false;
    }
    if (this->special_vehicle_extensions != other.special_vehicle_extensions) {
      return false;
    }
    if (this->supplemental_vehicle_extensions != other.supplemental_vehicle_extensions) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSMPartIIExtension_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSMPartIIExtension_

// alias to use template instance with default allocator
using BSMPartIIExtension =
  j2735_v2x_msgs::msg::BSMPartIIExtension_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSMPartIIExtension_<ContainerAllocator>::VEHICLE_SAFETY_EXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSMPartIIExtension_<ContainerAllocator>::SPECIAL_VEHICLE_EXT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BSMPartIIExtension_<ContainerAllocator>::SUPPLEMENTAL_VEHICLE_EXT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_PART_II_EXTENSION__STRUCT_HPP_
