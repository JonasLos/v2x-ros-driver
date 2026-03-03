// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/TrailerUnitDescriptionList.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/trailer_unit_description_list.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trailer_unit_descriptions'
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescriptionList __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescriptionList __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrailerUnitDescriptionList_
{
  using Type = TrailerUnitDescriptionList_<ContainerAllocator>;

  explicit TrailerUnitDescriptionList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit TrailerUnitDescriptionList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _trailer_unit_descriptions_type =
    std::vector<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>>>;
  _trailer_unit_descriptions_type trailer_unit_descriptions;

  // setters for named parameter idiom
  Type & set__trailer_unit_descriptions(
    const std::vector<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::TrailerUnitDescription_<ContainerAllocator>>> & _arg)
  {
    this->trailer_unit_descriptions = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t MIN_SIZE =
    1u;
  static constexpr uint8_t MAX_SIZE =
    8u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescriptionList
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__TrailerUnitDescriptionList
    std::shared_ptr<j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrailerUnitDescriptionList_ & other) const
  {
    if (this->trailer_unit_descriptions != other.trailer_unit_descriptions) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrailerUnitDescriptionList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrailerUnitDescriptionList_

// alias to use template instance with default allocator
using TrailerUnitDescriptionList =
  j2735_v2x_msgs::msg::TrailerUnitDescriptionList_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrailerUnitDescriptionList_<ContainerAllocator>::MIN_SIZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TrailerUnitDescriptionList_<ContainerAllocator>::MAX_SIZE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_UNIT_DESCRIPTION_LIST__STRUCT_HPP_
