// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice
#include "carma_driver_msgs/msg/detail/robot_enabled__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
carma_driver_msgs__msg__RobotEnabled__init(carma_driver_msgs__msg__RobotEnabled * msg)
{
  if (!msg) {
    return false;
  }
  // robot_active
  // robot_enabled
  // torque
  // torque_validity
  // brake_decel
  // brake_decel_validity
  // throttle_effort
  // throttle_effort_validity
  // braking_effort
  // braking_effort_validity
  return true;
}

void
carma_driver_msgs__msg__RobotEnabled__fini(carma_driver_msgs__msg__RobotEnabled * msg)
{
  if (!msg) {
    return;
  }
  // robot_active
  // robot_enabled
  // torque
  // torque_validity
  // brake_decel
  // brake_decel_validity
  // throttle_effort
  // throttle_effort_validity
  // braking_effort
  // braking_effort_validity
}

bool
carma_driver_msgs__msg__RobotEnabled__are_equal(const carma_driver_msgs__msg__RobotEnabled * lhs, const carma_driver_msgs__msg__RobotEnabled * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_active
  if (lhs->robot_active != rhs->robot_active) {
    return false;
  }
  // robot_enabled
  if (lhs->robot_enabled != rhs->robot_enabled) {
    return false;
  }
  // torque
  if (lhs->torque != rhs->torque) {
    return false;
  }
  // torque_validity
  if (lhs->torque_validity != rhs->torque_validity) {
    return false;
  }
  // brake_decel
  if (lhs->brake_decel != rhs->brake_decel) {
    return false;
  }
  // brake_decel_validity
  if (lhs->brake_decel_validity != rhs->brake_decel_validity) {
    return false;
  }
  // throttle_effort
  if (lhs->throttle_effort != rhs->throttle_effort) {
    return false;
  }
  // throttle_effort_validity
  if (lhs->throttle_effort_validity != rhs->throttle_effort_validity) {
    return false;
  }
  // braking_effort
  if (lhs->braking_effort != rhs->braking_effort) {
    return false;
  }
  // braking_effort_validity
  if (lhs->braking_effort_validity != rhs->braking_effort_validity) {
    return false;
  }
  return true;
}

bool
carma_driver_msgs__msg__RobotEnabled__copy(
  const carma_driver_msgs__msg__RobotEnabled * input,
  carma_driver_msgs__msg__RobotEnabled * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_active
  output->robot_active = input->robot_active;
  // robot_enabled
  output->robot_enabled = input->robot_enabled;
  // torque
  output->torque = input->torque;
  // torque_validity
  output->torque_validity = input->torque_validity;
  // brake_decel
  output->brake_decel = input->brake_decel;
  // brake_decel_validity
  output->brake_decel_validity = input->brake_decel_validity;
  // throttle_effort
  output->throttle_effort = input->throttle_effort;
  // throttle_effort_validity
  output->throttle_effort_validity = input->throttle_effort_validity;
  // braking_effort
  output->braking_effort = input->braking_effort;
  // braking_effort_validity
  output->braking_effort_validity = input->braking_effort_validity;
  return true;
}

carma_driver_msgs__msg__RobotEnabled *
carma_driver_msgs__msg__RobotEnabled__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__RobotEnabled * msg = (carma_driver_msgs__msg__RobotEnabled *)allocator.allocate(sizeof(carma_driver_msgs__msg__RobotEnabled), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_driver_msgs__msg__RobotEnabled));
  bool success = carma_driver_msgs__msg__RobotEnabled__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_driver_msgs__msg__RobotEnabled__destroy(carma_driver_msgs__msg__RobotEnabled * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_driver_msgs__msg__RobotEnabled__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_driver_msgs__msg__RobotEnabled__Sequence__init(carma_driver_msgs__msg__RobotEnabled__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__RobotEnabled * data = NULL;

  if (size) {
    data = (carma_driver_msgs__msg__RobotEnabled *)allocator.zero_allocate(size, sizeof(carma_driver_msgs__msg__RobotEnabled), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_driver_msgs__msg__RobotEnabled__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_driver_msgs__msg__RobotEnabled__fini(&data[i - 1]);
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
carma_driver_msgs__msg__RobotEnabled__Sequence__fini(carma_driver_msgs__msg__RobotEnabled__Sequence * array)
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
      carma_driver_msgs__msg__RobotEnabled__fini(&array->data[i]);
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

carma_driver_msgs__msg__RobotEnabled__Sequence *
carma_driver_msgs__msg__RobotEnabled__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_driver_msgs__msg__RobotEnabled__Sequence * array = (carma_driver_msgs__msg__RobotEnabled__Sequence *)allocator.allocate(sizeof(carma_driver_msgs__msg__RobotEnabled__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_driver_msgs__msg__RobotEnabled__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_driver_msgs__msg__RobotEnabled__Sequence__destroy(carma_driver_msgs__msg__RobotEnabled__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_driver_msgs__msg__RobotEnabled__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_driver_msgs__msg__RobotEnabled__Sequence__are_equal(const carma_driver_msgs__msg__RobotEnabled__Sequence * lhs, const carma_driver_msgs__msg__RobotEnabled__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_driver_msgs__msg__RobotEnabled__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_driver_msgs__msg__RobotEnabled__Sequence__copy(
  const carma_driver_msgs__msg__RobotEnabled__Sequence * input,
  carma_driver_msgs__msg__RobotEnabled__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_driver_msgs__msg__RobotEnabled);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    carma_driver_msgs__msg__RobotEnabled * data =
      (carma_driver_msgs__msg__RobotEnabled *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_driver_msgs__msg__RobotEnabled__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          carma_driver_msgs__msg__RobotEnabled__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!carma_driver_msgs__msg__RobotEnabled__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
