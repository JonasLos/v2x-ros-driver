// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/EventDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/event_description.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'type_event'
// Member 'description'
#include "j2735_v2x_msgs/msg/detail/iti_scodes__struct.hpp"
// Member 'priority'
#include "j2735_v2x_msgs/msg/detail/priority__struct.hpp"
// Member 'heading'
#include "j2735_v2x_msgs/msg/detail/heading_slice__struct.hpp"
// Member 'extent'
#include "j2735_v2x_msgs/msg/detail/extent__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__EventDescription __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__EventDescription __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EventDescription_
{
  using Type = EventDescription_<ContainerAllocator>;

  explicit EventDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type_event(_init),
    priority(_init),
    heading(_init),
    extent(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->presence_vector = 0;
    }
  }

  explicit EventDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type_event(_alloc, _init),
    priority(_alloc, _init),
    heading(_alloc, _init),
    extent(_alloc, _init)
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
  using _type_event_type =
    j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator>;
  _type_event_type type_event;
  using _priority_type =
    j2735_v2x_msgs::msg::Priority_<ContainerAllocator>;
  _priority_type priority;
  using _heading_type =
    j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator>;
  _heading_type heading;
  using _extent_type =
    j2735_v2x_msgs::msg::Extent_<ContainerAllocator>;
  _extent_type extent;
  using _description_type =
    std::vector<j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator>>>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__presence_vector(
    const uint16_t & _arg)
  {
    this->presence_vector = _arg;
    return *this;
  }
  Type & set__type_event(
    const j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator> & _arg)
  {
    this->type_event = _arg;
    return *this;
  }
  Type & set__priority(
    const j2735_v2x_msgs::msg::Priority_<ContainerAllocator> & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__heading(
    const j2735_v2x_msgs::msg::HeadingSlice_<ContainerAllocator> & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__extent(
    const j2735_v2x_msgs::msg::Extent_<ContainerAllocator> & _arg)
  {
    this->extent = _arg;
    return *this;
  }
  Type & set__description(
    const std::vector<j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<j2735_v2x_msgs::msg::ITIScodes_<ContainerAllocator>>> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint16_t HAS_PRIORITY =
    1u;
  static constexpr uint16_t HAS_HEADING =
    2u;
  static constexpr uint16_t HAS_EXTENT =
    4u;
  static constexpr uint16_t HAS_DESCRIPTION =
    8u;
  static constexpr uint8_t DESCRIPTION_SIZE_MIN =
    1u;
  static constexpr uint8_t DESCRIPTION_SIZE_MAX =
    8u;

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__EventDescription
    std::shared_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__EventDescription
    std::shared_ptr<j2735_v2x_msgs::msg::EventDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EventDescription_ & other) const
  {
    if (this->presence_vector != other.presence_vector) {
      return false;
    }
    if (this->type_event != other.type_event) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->extent != other.extent) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const EventDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EventDescription_

// alias to use template instance with default allocator
using EventDescription =
  j2735_v2x_msgs::msg::EventDescription_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t EventDescription_<ContainerAllocator>::HAS_PRIORITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t EventDescription_<ContainerAllocator>::HAS_HEADING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t EventDescription_<ContainerAllocator>::HAS_EXTENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint16_t EventDescription_<ContainerAllocator>::HAS_DESCRIPTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventDescription_<ContainerAllocator>::DESCRIPTION_SIZE_MIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t EventDescription_<ContainerAllocator>::DESCRIPTION_SIZE_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__EVENT_DESCRIPTION__STRUCT_HPP_
