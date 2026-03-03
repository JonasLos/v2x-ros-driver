// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/VehicleData.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/vehicle_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `height`
#include "j2735_v2x_msgs/msg/detail/vehicle_height__functions.h"
// Member `bumpers`
#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"
// Member `mass`
#include "j2735_v2x_msgs/msg/detail/vehicle_mass__functions.h"
// Member `trailer_weight`
#include "j2735_v2x_msgs/msg/detail/trailer_weight__functions.h"

bool
j2735_v2x_msgs__msg__VehicleData__init(j2735_v2x_msgs__msg__VehicleData * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // height
  if (!j2735_v2x_msgs__msg__VehicleHeight__init(&msg->height)) {
    j2735_v2x_msgs__msg__VehicleData__fini(msg);
    return false;
  }
  // bumpers
  if (!j2735_v2x_msgs__msg__BumperHeights__init(&msg->bumpers)) {
    j2735_v2x_msgs__msg__VehicleData__fini(msg);
    return false;
  }
  // mass
  if (!j2735_v2x_msgs__msg__VehicleMass__init(&msg->mass)) {
    j2735_v2x_msgs__msg__VehicleData__fini(msg);
    return false;
  }
  // trailer_weight
  if (!j2735_v2x_msgs__msg__TrailerWeight__init(&msg->trailer_weight)) {
    j2735_v2x_msgs__msg__VehicleData__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__VehicleData__fini(j2735_v2x_msgs__msg__VehicleData * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // height
  j2735_v2x_msgs__msg__VehicleHeight__fini(&msg->height);
  // bumpers
  j2735_v2x_msgs__msg__BumperHeights__fini(&msg->bumpers);
  // mass
  j2735_v2x_msgs__msg__VehicleMass__fini(&msg->mass);
  // trailer_weight
  j2735_v2x_msgs__msg__TrailerWeight__fini(&msg->trailer_weight);
}

bool
j2735_v2x_msgs__msg__VehicleData__are_equal(const j2735_v2x_msgs__msg__VehicleData * lhs, const j2735_v2x_msgs__msg__VehicleData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // height
  if (!j2735_v2x_msgs__msg__VehicleHeight__are_equal(
      &(lhs->height), &(rhs->height)))
  {
    return false;
  }
  // bumpers
  if (!j2735_v2x_msgs__msg__BumperHeights__are_equal(
      &(lhs->bumpers), &(rhs->bumpers)))
  {
    return false;
  }
  // mass
  if (!j2735_v2x_msgs__msg__VehicleMass__are_equal(
      &(lhs->mass), &(rhs->mass)))
  {
    return false;
  }
  // trailer_weight
  if (!j2735_v2x_msgs__msg__TrailerWeight__are_equal(
      &(lhs->trailer_weight), &(rhs->trailer_weight)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__VehicleData__copy(
  const j2735_v2x_msgs__msg__VehicleData * input,
  j2735_v2x_msgs__msg__VehicleData * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // height
  if (!j2735_v2x_msgs__msg__VehicleHeight__copy(
      &(input->height), &(output->height)))
  {
    return false;
  }
  // bumpers
  if (!j2735_v2x_msgs__msg__BumperHeights__copy(
      &(input->bumpers), &(output->bumpers)))
  {
    return false;
  }
  // mass
  if (!j2735_v2x_msgs__msg__VehicleMass__copy(
      &(input->mass), &(output->mass)))
  {
    return false;
  }
  // trailer_weight
  if (!j2735_v2x_msgs__msg__TrailerWeight__copy(
      &(input->trailer_weight), &(output->trailer_weight)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__VehicleData *
j2735_v2x_msgs__msg__VehicleData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleData * msg = (j2735_v2x_msgs__msg__VehicleData *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__VehicleData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__VehicleData));
  bool success = j2735_v2x_msgs__msg__VehicleData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__VehicleData__destroy(j2735_v2x_msgs__msg__VehicleData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__VehicleData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__VehicleData__Sequence__init(j2735_v2x_msgs__msg__VehicleData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleData * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__VehicleData *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__VehicleData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__VehicleData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__VehicleData__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__VehicleData__Sequence__fini(j2735_v2x_msgs__msg__VehicleData__Sequence * array)
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
      j2735_v2x_msgs__msg__VehicleData__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__VehicleData__Sequence *
j2735_v2x_msgs__msg__VehicleData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleData__Sequence * array = (j2735_v2x_msgs__msg__VehicleData__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__VehicleData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__VehicleData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__VehicleData__Sequence__destroy(j2735_v2x_msgs__msg__VehicleData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__VehicleData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__VehicleData__Sequence__are_equal(const j2735_v2x_msgs__msg__VehicleData__Sequence * lhs, const j2735_v2x_msgs__msg__VehicleData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__VehicleData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__VehicleData__Sequence__copy(
  const j2735_v2x_msgs__msg__VehicleData__Sequence * input,
  j2735_v2x_msgs__msg__VehicleData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__VehicleData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__VehicleData * data =
      (j2735_v2x_msgs__msg__VehicleData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__VehicleData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__VehicleData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__VehicleData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
