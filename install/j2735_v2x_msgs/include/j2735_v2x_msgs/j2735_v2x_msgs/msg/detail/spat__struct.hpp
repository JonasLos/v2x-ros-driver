// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/SPAT.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/spat.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'intersections'
#include "j2735_v2x_msgs/msg/detail/intersection_state_list__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__SPAT __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__SPAT __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SPAT_
{
  using Type = SPAT_<ContainerAllocator>;

  explicit SPAT_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : intersections(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->name = "";
      this->name_exists = false;
    }
  }

  explicit SPAT_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    intersections(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time_stamp = 0ul;
      this->time_stamp_exists = false;
      this->name = "";
      this->name_exists = false;
    }
  }

  // field types and members
  using _time_stamp_type =
    uint32_t;
  _time_stamp_type time_stamp;
  using _time_stamp_exists_type =
    bool;
  _time_stamp_exists_type time_stamp_exists;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _name_exists_type =
    bool;
  _name_exists_type name_exists;
  using _intersections_type =
    j2735_v2x_msgs::msg::IntersectionStateList_<ContainerAllocator>;
  _intersections_type intersections;

  // setters for named parameter idiom
  Type & set__time_stamp(
    const uint32_t & _arg)
  {
    this->time_stamp = _arg;
    return *this;
  }
  Type & set__time_stamp_exists(
    const bool & _arg)
  {
    this->time_stamp_exists = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__name_exists(
    const bool & _arg)
  {
    this->name_exists = _arg;
    return *this;
  }
  Type & set__intersections(
    const j2735_v2x_msgs::msg::IntersectionStateList_<ContainerAllocator> & _arg)
  {
    this->intersections = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::SPAT_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::SPAT_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SPAT_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::SPAT_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__SPAT
    std::shared_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__SPAT
    std::shared_ptr<j2735_v2x_msgs::msg::SPAT_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SPAT_ & other) const
  {
    if (this->time_stamp != other.time_stamp) {
      return false;
    }
    if (this->time_stamp_exists != other.time_stamp_exists) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->name_exists != other.name_exists) {
      return false;
    }
    if (this->intersections != other.intersections) {
      return false;
    }
    return true;
  }
  bool operator!=(const SPAT_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SPAT_

// alias to use template instance with default allocator
using SPAT =
  j2735_v2x_msgs::msg::SPAT_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SPAT__STRUCT_HPP_
