// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from j2735_v2x_msgs:msg/NTCIPEssPrecipYesNo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "j2735_v2x_msgs/msg/ntcip_ess_precip_yes_no.hpp"


#ifndef J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__STRUCT_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo __attribute__((deprecated))
#else
# define DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo __declspec(deprecated)
#endif

namespace j2735_v2x_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NTCIPEssPrecipYesNo_
{
  using Type = NTCIPEssPrecipYesNo_<ContainerAllocator>;

  explicit NTCIPEssPrecipYesNo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->precip_yes_no = 0;
    }
  }

  explicit NTCIPEssPrecipYesNo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->precip_yes_no = 0;
    }
  }

  // field types and members
  using _precip_yes_no_type =
    uint8_t;
  _precip_yes_no_type precip_yes_no;

  // setters for named parameter idiom
  Type & set__precip_yes_no(
    const uint8_t & _arg)
  {
    this->precip_yes_no = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t PRECIP =
    1u;
  static constexpr uint8_t NO_PRECIP =
    2u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    3u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator> *;
  using ConstRawPtr =
    const j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__j2735_v2x_msgs__msg__NTCIPEssPrecipYesNo
    std::shared_ptr<j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NTCIPEssPrecipYesNo_ & other) const
  {
    if (this->precip_yes_no != other.precip_yes_no) {
      return false;
    }
    return true;
  }
  bool operator!=(const NTCIPEssPrecipYesNo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NTCIPEssPrecipYesNo_

// alias to use template instance with default allocator
using NTCIPEssPrecipYesNo =
  j2735_v2x_msgs::msg::NTCIPEssPrecipYesNo_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipYesNo_<ContainerAllocator>::PRECIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipYesNo_<ContainerAllocator>::NO_PRECIP;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NTCIPEssPrecipYesNo_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace j2735_v2x_msgs

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NTCIP_ESS_PRECIP_YES_NO__STRUCT_HPP_
