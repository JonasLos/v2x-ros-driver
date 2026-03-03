// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/BSMCoreData.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `accuracy`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
// Member `transmission`
#include "j2735_v2x_msgs/msg/detail/transmission_state__functions.h"
// Member `accel_set`
#include "j2735_v2x_msgs/msg/detail/acceleration_set4_way__functions.h"
// Member `brakes`
#include "j2735_v2x_msgs/msg/detail/brake_system_status__functions.h"
// Member `size`
#include "j2735_v2x_msgs/msg/detail/vehicle_size__functions.h"

bool
j2735_v2x_msgs__msg__BSMCoreData__init(j2735_v2x_msgs__msg__BSMCoreData * msg)
{
  if (!msg) {
    return false;
  }
  // msg_count
  // id
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->id, 0)) {
    j2735_v2x_msgs__msg__BSMCoreData__fini(msg);
    return false;
  }
  // sec_mark
  // longitude
  // latitude
  // elev
  // accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__init(&msg->accuracy)) {
    j2735_v2x_msgs__msg__BSMCoreData__fini(msg);
    return false;
  }
  // transmission
  if (!j2735_v2x_msgs__msg__TransmissionState__init(&msg->transmission)) {
    j2735_v2x_msgs__msg__BSMCoreData__fini(msg);
    return false;
  }
  // speed
  // heading
  // angle
  // accel_set
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__init(&msg->accel_set)) {
    j2735_v2x_msgs__msg__BSMCoreData__fini(msg);
    return false;
  }
  // brakes
  if (!j2735_v2x_msgs__msg__BrakeSystemStatus__init(&msg->brakes)) {
    j2735_v2x_msgs__msg__BSMCoreData__fini(msg);
    return false;
  }
  // size
  if (!j2735_v2x_msgs__msg__VehicleSize__init(&msg->size)) {
    j2735_v2x_msgs__msg__BSMCoreData__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__BSMCoreData__fini(j2735_v2x_msgs__msg__BSMCoreData * msg)
{
  if (!msg) {
    return;
  }
  // msg_count
  // id
  rosidl_runtime_c__uint8__Sequence__fini(&msg->id);
  // sec_mark
  // longitude
  // latitude
  // elev
  // accuracy
  j2735_v2x_msgs__msg__PositionalAccuracy__fini(&msg->accuracy);
  // transmission
  j2735_v2x_msgs__msg__TransmissionState__fini(&msg->transmission);
  // speed
  // heading
  // angle
  // accel_set
  j2735_v2x_msgs__msg__AccelerationSet4Way__fini(&msg->accel_set);
  // brakes
  j2735_v2x_msgs__msg__BrakeSystemStatus__fini(&msg->brakes);
  // size
  j2735_v2x_msgs__msg__VehicleSize__fini(&msg->size);
}

bool
j2735_v2x_msgs__msg__BSMCoreData__are_equal(const j2735_v2x_msgs__msg__BSMCoreData * lhs, const j2735_v2x_msgs__msg__BSMCoreData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // msg_count
  if (lhs->msg_count != rhs->msg_count) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // sec_mark
  if (lhs->sec_mark != rhs->sec_mark) {
    return false;
  }
  // longitude
  if (lhs->longitude != rhs->longitude) {
    return false;
  }
  // latitude
  if (lhs->latitude != rhs->latitude) {
    return false;
  }
  // elev
  if (lhs->elev != rhs->elev) {
    return false;
  }
  // accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__are_equal(
      &(lhs->accuracy), &(rhs->accuracy)))
  {
    return false;
  }
  // transmission
  if (!j2735_v2x_msgs__msg__TransmissionState__are_equal(
      &(lhs->transmission), &(rhs->transmission)))
  {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // angle
  if (lhs->angle != rhs->angle) {
    return false;
  }
  // accel_set
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__are_equal(
      &(lhs->accel_set), &(rhs->accel_set)))
  {
    return false;
  }
  // brakes
  if (!j2735_v2x_msgs__msg__BrakeSystemStatus__are_equal(
      &(lhs->brakes), &(rhs->brakes)))
  {
    return false;
  }
  // size
  if (!j2735_v2x_msgs__msg__VehicleSize__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BSMCoreData__copy(
  const j2735_v2x_msgs__msg__BSMCoreData * input,
  j2735_v2x_msgs__msg__BSMCoreData * output)
{
  if (!input || !output) {
    return false;
  }
  // msg_count
  output->msg_count = input->msg_count;
  // id
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // sec_mark
  output->sec_mark = input->sec_mark;
  // longitude
  output->longitude = input->longitude;
  // latitude
  output->latitude = input->latitude;
  // elev
  output->elev = input->elev;
  // accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__copy(
      &(input->accuracy), &(output->accuracy)))
  {
    return false;
  }
  // transmission
  if (!j2735_v2x_msgs__msg__TransmissionState__copy(
      &(input->transmission), &(output->transmission)))
  {
    return false;
  }
  // speed
  output->speed = input->speed;
  // heading
  output->heading = input->heading;
  // angle
  output->angle = input->angle;
  // accel_set
  if (!j2735_v2x_msgs__msg__AccelerationSet4Way__copy(
      &(input->accel_set), &(output->accel_set)))
  {
    return false;
  }
  // brakes
  if (!j2735_v2x_msgs__msg__BrakeSystemStatus__copy(
      &(input->brakes), &(output->brakes)))
  {
    return false;
  }
  // size
  if (!j2735_v2x_msgs__msg__VehicleSize__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__BSMCoreData *
j2735_v2x_msgs__msg__BSMCoreData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSMCoreData * msg = (j2735_v2x_msgs__msg__BSMCoreData *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BSMCoreData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__BSMCoreData));
  bool success = j2735_v2x_msgs__msg__BSMCoreData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__BSMCoreData__destroy(j2735_v2x_msgs__msg__BSMCoreData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__BSMCoreData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__BSMCoreData__Sequence__init(j2735_v2x_msgs__msg__BSMCoreData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSMCoreData * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__BSMCoreData *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__BSMCoreData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__BSMCoreData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__BSMCoreData__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__BSMCoreData__Sequence__fini(j2735_v2x_msgs__msg__BSMCoreData__Sequence * array)
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
      j2735_v2x_msgs__msg__BSMCoreData__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__BSMCoreData__Sequence *
j2735_v2x_msgs__msg__BSMCoreData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSMCoreData__Sequence * array = (j2735_v2x_msgs__msg__BSMCoreData__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BSMCoreData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__BSMCoreData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__BSMCoreData__Sequence__destroy(j2735_v2x_msgs__msg__BSMCoreData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__BSMCoreData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__BSMCoreData__Sequence__are_equal(const j2735_v2x_msgs__msg__BSMCoreData__Sequence * lhs, const j2735_v2x_msgs__msg__BSMCoreData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__BSMCoreData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BSMCoreData__Sequence__copy(
  const j2735_v2x_msgs__msg__BSMCoreData__Sequence * input,
  j2735_v2x_msgs__msg__BSMCoreData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__BSMCoreData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__BSMCoreData * data =
      (j2735_v2x_msgs__msg__BSMCoreData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__BSMCoreData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__BSMCoreData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__BSMCoreData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
