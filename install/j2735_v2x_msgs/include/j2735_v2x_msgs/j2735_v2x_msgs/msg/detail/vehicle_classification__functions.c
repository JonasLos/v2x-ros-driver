// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/VehicleClassification.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/vehicle_classification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key_type`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_class__functions.h"
// Member `role`
#include "j2735_v2x_msgs/msg/detail/basic_vehicle_role__functions.h"
// Member `hpms_type`
#include "j2735_v2x_msgs/msg/detail/vehicle_type__functions.h"
// Member `vehicle_type`
#include "j2735_v2x_msgs/msg/detail/itis_vehicle_group_affected__functions.h"
// Member `response_equip`
#include "j2735_v2x_msgs/msg/detail/itis_incident_response_equipment__functions.h"
// Member `responder_type`
#include "j2735_v2x_msgs/msg/detail/itis_responder_group_affected__functions.h"
// Member `fuel_type`
#include "j2735_v2x_msgs/msg/detail/fuel_type__functions.h"

bool
j2735_v2x_msgs__msg__VehicleClassification__init(j2735_v2x_msgs__msg__VehicleClassification * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // key_type
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__init(&msg->key_type)) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
    return false;
  }
  // role
  if (!j2735_v2x_msgs__msg__BasicVehicleRole__init(&msg->role)) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
    return false;
  }
  // iso3833
  // hpms_type
  if (!j2735_v2x_msgs__msg__VehicleType__init(&msg->hpms_type)) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
    return false;
  }
  // vehicle_type
  if (!j2735_v2x_msgs__msg__ITISVehicleGroupAffected__init(&msg->vehicle_type)) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
    return false;
  }
  // response_equip
  if (!j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__init(&msg->response_equip)) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
    return false;
  }
  // responder_type
  if (!j2735_v2x_msgs__msg__ITISResponderGroupAffected__init(&msg->responder_type)) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
    return false;
  }
  // fuel_type
  if (!j2735_v2x_msgs__msg__FuelType__init(&msg->fuel_type)) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__VehicleClassification__fini(j2735_v2x_msgs__msg__VehicleClassification * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // key_type
  j2735_v2x_msgs__msg__BasicVehicleClass__fini(&msg->key_type);
  // role
  j2735_v2x_msgs__msg__BasicVehicleRole__fini(&msg->role);
  // iso3833
  // hpms_type
  j2735_v2x_msgs__msg__VehicleType__fini(&msg->hpms_type);
  // vehicle_type
  j2735_v2x_msgs__msg__ITISVehicleGroupAffected__fini(&msg->vehicle_type);
  // response_equip
  j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__fini(&msg->response_equip);
  // responder_type
  j2735_v2x_msgs__msg__ITISResponderGroupAffected__fini(&msg->responder_type);
  // fuel_type
  j2735_v2x_msgs__msg__FuelType__fini(&msg->fuel_type);
}

bool
j2735_v2x_msgs__msg__VehicleClassification__are_equal(const j2735_v2x_msgs__msg__VehicleClassification * lhs, const j2735_v2x_msgs__msg__VehicleClassification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // key_type
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__are_equal(
      &(lhs->key_type), &(rhs->key_type)))
  {
    return false;
  }
  // role
  if (!j2735_v2x_msgs__msg__BasicVehicleRole__are_equal(
      &(lhs->role), &(rhs->role)))
  {
    return false;
  }
  // iso3833
  if (lhs->iso3833 != rhs->iso3833) {
    return false;
  }
  // hpms_type
  if (!j2735_v2x_msgs__msg__VehicleType__are_equal(
      &(lhs->hpms_type), &(rhs->hpms_type)))
  {
    return false;
  }
  // vehicle_type
  if (!j2735_v2x_msgs__msg__ITISVehicleGroupAffected__are_equal(
      &(lhs->vehicle_type), &(rhs->vehicle_type)))
  {
    return false;
  }
  // response_equip
  if (!j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__are_equal(
      &(lhs->response_equip), &(rhs->response_equip)))
  {
    return false;
  }
  // responder_type
  if (!j2735_v2x_msgs__msg__ITISResponderGroupAffected__are_equal(
      &(lhs->responder_type), &(rhs->responder_type)))
  {
    return false;
  }
  // fuel_type
  if (!j2735_v2x_msgs__msg__FuelType__are_equal(
      &(lhs->fuel_type), &(rhs->fuel_type)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__VehicleClassification__copy(
  const j2735_v2x_msgs__msg__VehicleClassification * input,
  j2735_v2x_msgs__msg__VehicleClassification * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // key_type
  if (!j2735_v2x_msgs__msg__BasicVehicleClass__copy(
      &(input->key_type), &(output->key_type)))
  {
    return false;
  }
  // role
  if (!j2735_v2x_msgs__msg__BasicVehicleRole__copy(
      &(input->role), &(output->role)))
  {
    return false;
  }
  // iso3833
  output->iso3833 = input->iso3833;
  // hpms_type
  if (!j2735_v2x_msgs__msg__VehicleType__copy(
      &(input->hpms_type), &(output->hpms_type)))
  {
    return false;
  }
  // vehicle_type
  if (!j2735_v2x_msgs__msg__ITISVehicleGroupAffected__copy(
      &(input->vehicle_type), &(output->vehicle_type)))
  {
    return false;
  }
  // response_equip
  if (!j2735_v2x_msgs__msg__ITISIncidentResponseEquipment__copy(
      &(input->response_equip), &(output->response_equip)))
  {
    return false;
  }
  // responder_type
  if (!j2735_v2x_msgs__msg__ITISResponderGroupAffected__copy(
      &(input->responder_type), &(output->responder_type)))
  {
    return false;
  }
  // fuel_type
  if (!j2735_v2x_msgs__msg__FuelType__copy(
      &(input->fuel_type), &(output->fuel_type)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__VehicleClassification *
j2735_v2x_msgs__msg__VehicleClassification__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleClassification * msg = (j2735_v2x_msgs__msg__VehicleClassification *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__VehicleClassification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__VehicleClassification));
  bool success = j2735_v2x_msgs__msg__VehicleClassification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__VehicleClassification__destroy(j2735_v2x_msgs__msg__VehicleClassification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__VehicleClassification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__VehicleClassification__Sequence__init(j2735_v2x_msgs__msg__VehicleClassification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleClassification * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__VehicleClassification *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__VehicleClassification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__VehicleClassification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__VehicleClassification__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__VehicleClassification__Sequence__fini(j2735_v2x_msgs__msg__VehicleClassification__Sequence * array)
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
      j2735_v2x_msgs__msg__VehicleClassification__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__VehicleClassification__Sequence *
j2735_v2x_msgs__msg__VehicleClassification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__VehicleClassification__Sequence * array = (j2735_v2x_msgs__msg__VehicleClassification__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__VehicleClassification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__VehicleClassification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__VehicleClassification__Sequence__destroy(j2735_v2x_msgs__msg__VehicleClassification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__VehicleClassification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__VehicleClassification__Sequence__are_equal(const j2735_v2x_msgs__msg__VehicleClassification__Sequence * lhs, const j2735_v2x_msgs__msg__VehicleClassification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__VehicleClassification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__VehicleClassification__Sequence__copy(
  const j2735_v2x_msgs__msg__VehicleClassification__Sequence * input,
  j2735_v2x_msgs__msg__VehicleClassification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__VehicleClassification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    j2735_v2x_msgs__msg__VehicleClassification * data =
      (j2735_v2x_msgs__msg__VehicleClassification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__VehicleClassification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__VehicleClassification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__VehicleClassification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
