// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/BSMRegionalExtension.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/bsm_regional_extension.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route_destination_points'
#include "j2735_v2x_msgs/msg/detail/position3_d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__BSMRegionalExtension __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__BSMRegionalExtension __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BSMRegionalExtension_
{
  using Type = BSMRegionalExtension_<ContainerAllocator>;

  explicit BSMRegionalExtension_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->regional_extension_id = 0;
    }
  }

  explicit BSMRegionalExtension_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->regional_extension_id = 0;
    }
  }

  // field types and members
  using _regional_extension_id_type =
    uint16_t;
  _regional_extension_id_type regional_extension_id;
  using _route_destination_points_type =
    std::vector<j2735_v2x_msgs::msg::Position3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::Position3D_<ContainerAllocator>>>;
  _route_destination_points_type route_destination_points;

  // setters for named parameter idiom
  Type & set__regional_extension_id(
    const uint16_t & _arg)
  {
    this->regional_extension_id = _arg;
    return *this;
  }
  Type & set__route_destination_points(
    const std::vector<j2735_v2x_msgs::msg::Position3D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::Position3D_<ContainerAllocator>>> & _arg)
  {
    this->route_destination_points = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t ROUTE_DESTINATIONS =
    1u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__BSMRegionalExtension
    std::shared_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__BSMRegionalExtension
    std::shared_ptr<j2735_v2x_msgs::msg::BSMRegionalExtension_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BSMRegionalExtension_ & other) const
  {
    if (this->regional_extension_id != other.regional_extension_id) {
      return false;
    }
    if (this->route_destination_points != other.route_destination_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const BSMRegionalExtension_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BSMRegionalExtension_

// alias to use template instance with default allocator
using BSMRegionalExtension =
  j2735_v2x_msgs::msg::BSMRegionalExtension_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t BSMRegionalExtension_<ContainerAllocator>::ROUTE_DESTINATIONS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM_REGIONAL_EXTENSION__STRUCT_HPP_
