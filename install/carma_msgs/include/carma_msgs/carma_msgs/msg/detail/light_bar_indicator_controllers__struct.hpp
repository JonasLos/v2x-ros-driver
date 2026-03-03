// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from carma_msgs:msg/LightBarIndicatorControllers.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "carma_msgs/msg/light_bar_indicator_controllers.hpp"


#ifndef CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__STRUCT_HPP_
#define CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__carma_msgs__msg__LightBarIndicatorControllers __attribute__((deprecated))
#else
# define DEPRECATED__carma_msgs__msg__LightBarIndicatorControllers __declspec(deprecated)
#endif

namespace carma_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightBarIndicatorControllers_
{
  using Type = LightBarIndicatorControllers_<ContainerAllocator>;

  explicit LightBarIndicatorControllers_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->green_solid_owner = "";
      this->green_flash_owner = "";
      this->yellow_sides_owner = "";
      this->yellow_dim_owner = "";
      this->yellow_flash_owner = "";
      this->yellow_arrow_left_owner = "";
      this->yellow_arrow_right_owner = "";
      this->yellow_arrow_out_owner = "";
    }
  }

  explicit LightBarIndicatorControllers_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : green_solid_owner(_alloc),
    green_flash_owner(_alloc),
    yellow_sides_owner(_alloc),
    yellow_dim_owner(_alloc),
    yellow_flash_owner(_alloc),
    yellow_arrow_left_owner(_alloc),
    yellow_arrow_right_owner(_alloc),
    yellow_arrow_out_owner(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->green_solid_owner = "";
      this->green_flash_owner = "";
      this->yellow_sides_owner = "";
      this->yellow_dim_owner = "";
      this->yellow_flash_owner = "";
      this->yellow_arrow_left_owner = "";
      this->yellow_arrow_right_owner = "";
      this->yellow_arrow_out_owner = "";
    }
  }

  // field types and members
  using _green_solid_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _green_solid_owner_type green_solid_owner;
  using _green_flash_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _green_flash_owner_type green_flash_owner;
  using _yellow_sides_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yellow_sides_owner_type yellow_sides_owner;
  using _yellow_dim_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yellow_dim_owner_type yellow_dim_owner;
  using _yellow_flash_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yellow_flash_owner_type yellow_flash_owner;
  using _yellow_arrow_left_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yellow_arrow_left_owner_type yellow_arrow_left_owner;
  using _yellow_arrow_right_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yellow_arrow_right_owner_type yellow_arrow_right_owner;
  using _yellow_arrow_out_owner_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _yellow_arrow_out_owner_type yellow_arrow_out_owner;

  // setters for named parameter idiom
  Type & set__green_solid_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->green_solid_owner = _arg;
    return *this;
  }
  Type & set__green_flash_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->green_flash_owner = _arg;
    return *this;
  }
  Type & set__yellow_sides_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yellow_sides_owner = _arg;
    return *this;
  }
  Type & set__yellow_dim_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yellow_dim_owner = _arg;
    return *this;
  }
  Type & set__yellow_flash_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yellow_flash_owner = _arg;
    return *this;
  }
  Type & set__yellow_arrow_left_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yellow_arrow_left_owner = _arg;
    return *this;
  }
  Type & set__yellow_arrow_right_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yellow_arrow_right_owner = _arg;
    return *this;
  }
  Type & set__yellow_arrow_out_owner(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->yellow_arrow_out_owner = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator> *;
  using ConstRawPtr =
    const carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__carma_msgs__msg__LightBarIndicatorControllers
    std::shared_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__carma_msgs__msg__LightBarIndicatorControllers
    std::shared_ptr<carma_msgs::msg::LightBarIndicatorControllers_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightBarIndicatorControllers_ & other) const
  {
    if (this->green_solid_owner != other.green_solid_owner) {
      return false;
    }
    if (this->green_flash_owner != other.green_flash_owner) {
      return false;
    }
    if (this->yellow_sides_owner != other.yellow_sides_owner) {
      return false;
    }
    if (this->yellow_dim_owner != other.yellow_dim_owner) {
      return false;
    }
    if (this->yellow_flash_owner != other.yellow_flash_owner) {
      return false;
    }
    if (this->yellow_arrow_left_owner != other.yellow_arrow_left_owner) {
      return false;
    }
    if (this->yellow_arrow_right_owner != other.yellow_arrow_right_owner) {
      return false;
    }
    if (this->yellow_arrow_out_owner != other.yellow_arrow_out_owner) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightBarIndicatorControllers_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightBarIndicatorControllers_

// alias to use template instance with default allocator
using LightBarIndicatorControllers =
  carma_msgs::msg::LightBarIndicatorControllers_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace carma_msgs

#endif  // CARMA_MSGS__MSG__DETAIL__LIGHT_BAR_INDICATOR_CONTROLLERS__STRUCT_HPP_
