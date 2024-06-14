// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/msg/detail/encoder__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `encoder_switch`
#include "rosidl_runtime_c/string_functions.h"

bool
miv_cluster_interfaces__msg__Encoder__init(miv_cluster_interfaces__msg__Encoder * msg)
{
  if (!msg) {
    return false;
  }
  // x_target
  // y_target
  // z_target
  // encoder_switch
  if (!rosidl_runtime_c__String__init(&msg->encoder_switch)) {
    miv_cluster_interfaces__msg__Encoder__fini(msg);
    return false;
  }
  return true;
}

void
miv_cluster_interfaces__msg__Encoder__fini(miv_cluster_interfaces__msg__Encoder * msg)
{
  if (!msg) {
    return;
  }
  // x_target
  // y_target
  // z_target
  // encoder_switch
  rosidl_runtime_c__String__fini(&msg->encoder_switch);
}

bool
miv_cluster_interfaces__msg__Encoder__are_equal(const miv_cluster_interfaces__msg__Encoder * lhs, const miv_cluster_interfaces__msg__Encoder * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_target
  if (lhs->x_target != rhs->x_target) {
    return false;
  }
  // y_target
  if (lhs->y_target != rhs->y_target) {
    return false;
  }
  // z_target
  if (lhs->z_target != rhs->z_target) {
    return false;
  }
  // encoder_switch
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->encoder_switch), &(rhs->encoder_switch)))
  {
    return false;
  }
  return true;
}

bool
miv_cluster_interfaces__msg__Encoder__copy(
  const miv_cluster_interfaces__msg__Encoder * input,
  miv_cluster_interfaces__msg__Encoder * output)
{
  if (!input || !output) {
    return false;
  }
  // x_target
  output->x_target = input->x_target;
  // y_target
  output->y_target = input->y_target;
  // z_target
  output->z_target = input->z_target;
  // encoder_switch
  if (!rosidl_runtime_c__String__copy(
      &(input->encoder_switch), &(output->encoder_switch)))
  {
    return false;
  }
  return true;
}

miv_cluster_interfaces__msg__Encoder *
miv_cluster_interfaces__msg__Encoder__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__msg__Encoder * msg = (miv_cluster_interfaces__msg__Encoder *)allocator.allocate(sizeof(miv_cluster_interfaces__msg__Encoder), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(miv_cluster_interfaces__msg__Encoder));
  bool success = miv_cluster_interfaces__msg__Encoder__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
miv_cluster_interfaces__msg__Encoder__destroy(miv_cluster_interfaces__msg__Encoder * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    miv_cluster_interfaces__msg__Encoder__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
miv_cluster_interfaces__msg__Encoder__Sequence__init(miv_cluster_interfaces__msg__Encoder__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__msg__Encoder * data = NULL;

  if (size) {
    data = (miv_cluster_interfaces__msg__Encoder *)allocator.zero_allocate(size, sizeof(miv_cluster_interfaces__msg__Encoder), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = miv_cluster_interfaces__msg__Encoder__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        miv_cluster_interfaces__msg__Encoder__fini(&data[i - 1]);
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
miv_cluster_interfaces__msg__Encoder__Sequence__fini(miv_cluster_interfaces__msg__Encoder__Sequence * array)
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
      miv_cluster_interfaces__msg__Encoder__fini(&array->data[i]);
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

miv_cluster_interfaces__msg__Encoder__Sequence *
miv_cluster_interfaces__msg__Encoder__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__msg__Encoder__Sequence * array = (miv_cluster_interfaces__msg__Encoder__Sequence *)allocator.allocate(sizeof(miv_cluster_interfaces__msg__Encoder__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = miv_cluster_interfaces__msg__Encoder__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
miv_cluster_interfaces__msg__Encoder__Sequence__destroy(miv_cluster_interfaces__msg__Encoder__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    miv_cluster_interfaces__msg__Encoder__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
miv_cluster_interfaces__msg__Encoder__Sequence__are_equal(const miv_cluster_interfaces__msg__Encoder__Sequence * lhs, const miv_cluster_interfaces__msg__Encoder__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!miv_cluster_interfaces__msg__Encoder__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
miv_cluster_interfaces__msg__Encoder__Sequence__copy(
  const miv_cluster_interfaces__msg__Encoder__Sequence * input,
  miv_cluster_interfaces__msg__Encoder__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(miv_cluster_interfaces__msg__Encoder);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    miv_cluster_interfaces__msg__Encoder * data =
      (miv_cluster_interfaces__msg__Encoder *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!miv_cluster_interfaces__msg__Encoder__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          miv_cluster_interfaces__msg__Encoder__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!miv_cluster_interfaces__msg__Encoder__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
