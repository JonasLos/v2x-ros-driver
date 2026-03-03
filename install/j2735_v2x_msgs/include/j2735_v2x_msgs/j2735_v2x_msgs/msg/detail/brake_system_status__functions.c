// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/BrakeSystemStatus.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wheel_brakes`
#include "j2735_v2x_msgs/msg/detail/brake_applied_status__functions.h"
// Member `traction`
#include "j2735_v2x_msgs/msg/detail/traction_control_status__functions.h"
// Member `abs`
#include "j2735_v2x_msgs/msg/detail/anti_lock_brake_status__functions.h"
// Member `scs`
#include "j2735_v2x_msgs/msg/detail/stability_control_status__functions.h"
// Member `brake_boost`
#include "j2735_v2x_msgs/msg/detail/brake_boost_applied__functions.h"
// Member `aux_brakes`
#include "j2735_v2x_msgs/msg/detail/auxiliary_brake_status__functions.h"

bool
j2735_v2x_msgs__msg__BrakeSystemStatus__init(j2735_v2x_msgs__msg__BrakeSystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // wheel_brakes
  if (!j2735_v2x_msgs__msg__BrakeAppliedStatus__init(&msg->wheel_brakes)) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__fini(msg);
    return false;
  }
  // traction
  if (!j2735_v2x_msgs__msg__TractionControlStatus__init(&msg->traction)) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__fini(msg);
    return false;
  }
  // abs
  if (!j2735_v2x_msgs__msg__AntiLockBrakeStatus__init(&msg->abs)) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__fini(msg);
    return false;
  }
  // scs
  if (!j2735_v2x_msgs__msg__StabilityControlStatus__init(&msg->scs)) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__fini(msg);
    return false;
  }
  // brake_boost
  if (!j2735_v2x_msgs__msg__BrakeBoostApplied__init(&msg->brake_boost)) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__fini(msg);
    return false;
  }
  // aux_brakes
  if (!j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__init(&msg->aux_brakes)) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__BrakeSystemStatus__fini(j2735_v2x_msgs__msg__BrakeSystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // wheel_brakes
  j2735_v2x_msgs__msg__BrakeAppliedStatus__fini(&msg->wheel_brakes);
  // traction
  j2735_v2x_msgs__msg__TractionControlStatus__fini(&msg->traction);
  // abs
  j2735_v2x_msgs__msg__AntiLockBrakeStatus__fini(&msg->abs);
  // scs
  j2735_v2x_msgs__msg__StabilityControlStatus__fini(&msg->scs);
  // brake_boost
  j2735_v2x_msgs__msg__BrakeBoostApplied__fini(&msg->brake_boost);
  // aux_brakes
  j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__fini(&msg->aux_brakes);
}

bool
j2735_v2x_msgs__msg__BrakeSystemStatus__are_equal(const j2735_v2x_msgs__msg__BrakeSystemStatus * lhs, const j2735_v2x_msgs__msg__BrakeSystemStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wheel_brakes
  if (!j2735_v2x_msgs__msg__BrakeAppliedStatus__are_equal(
      &(lhs->wheel_brakes), &(rhs->wheel_brakes)))
  {
    return false;
  }
  // traction
  if (!j2735_v2x_msgs__msg__TractionControlStatus__are_equal(
      &(lhs->traction), &(rhs->traction)))
  {
    return false;
  }
  // abs
  if (!j2735_v2x_msgs__msg__AntiLockBrakeStatus__are_equal(
      &(lhs->abs), &(rhs->abs)))
  {
    return false;
  }
  // scs
  if (!j2735_v2x_msgs__msg__StabilityControlStatus__are_equal(
      &(lhs->scs), &(rhs->scs)))
  {
    return false;
  }
  // brake_boost
  if (!j2735_v2x_msgs__msg__BrakeBoostApplied__are_equal(
      &(lhs->brake_boost), &(rhs->brake_boost)))
  {
    return false;
  }
  // aux_brakes
  if (!j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__are_equal(
      &(lhs->aux_brakes), &(rhs->aux_brakes)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BrakeSystemStatus__copy(
  const j2735_v2x_msgs__msg__BrakeSystemStatus * input,
  j2735_v2x_msgs__msg__BrakeSystemStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // wheel_brakes
  if (!j2735_v2x_msgs__msg__BrakeAppliedStatus__copy(
      &(input->wheel_brakes), &(output->wheel_brakes)))
  {
    return false;
  }
  // traction
  if (!j2735_v2x_msgs__msg__TractionControlStatus__copy(
      &(input->traction), &(output->traction)))
  {
    return false;
  }
  // abs
  if (!j2735_v2x_msgs__msg__AntiLockBrakeStatus__copy(
      &(input->abs), &(output->abs)))
  {
    return false;
  }
  // scs
  if (!j2735_v2x_msgs__msg__StabilityControlStatus__copy(
      &(input->scs), &(output->scs)))
  {
    return false;
  }
  // brake_boost
  if (!j2735_v2x_msgs__msg__BrakeBoostApplied__copy(
      &(input->brake_boost), &(output->brake_boost)))
  {
    return false;
  }
  // aux_brakes
  if (!j2735_v2x_msgs__msg__AuxiliaryBrakeStatus__copy(
      &(input->aux_brakes), &(output->aux_brakes)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__BrakeSystemStatus *
j2735_v2x_msgs__msg__BrakeSystemStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BrakeSystemStatus * msg = (j2735_v2x_msgs__msg__BrakeSystemStatus *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BrakeSystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__BrakeSystemStatus));
  bool success = j2735_v2x_msgs__msg__BrakeSystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__BrakeSystemStatus__destroy(j2735_v2x_msgs__msg__BrakeSystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__init(j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BrakeSystemStatus * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__BrakeSystemStatus *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__BrakeSystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__BrakeSystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__BrakeSystemStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__fini(j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      j2735_v2x_msgs__msg__BrakeSystemStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence *
j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * array = (j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__destroy(j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__are_equal(const j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * lhs, const j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__BrakeSystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence__copy(
  const j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * input,
  j2735_v2x_msgs__msg__BrakeSystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__BrakeSystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__BrakeSystemStatus * data =
      (j2735_v2x_msgs__msg__BrakeSystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__BrakeSystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__BrakeSystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__BrakeSystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
