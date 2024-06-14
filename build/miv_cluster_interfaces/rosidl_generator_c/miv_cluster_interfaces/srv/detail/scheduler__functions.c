// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from miv_cluster_interfaces:srv/Scheduler.idl
// generated code does not contain a copyright notice
#include "miv_cluster_interfaces/srv/detail/scheduler__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mea_list`
// Member `recordtime_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
miv_cluster_interfaces__srv__Scheduler_Request__init(miv_cluster_interfaces__srv__Scheduler_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mea_list
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->mea_list, 0)) {
    miv_cluster_interfaces__srv__Scheduler_Request__fini(msg);
    return false;
  }
  // recordtime_list
  if (!rosidl_runtime_c__float__Sequence__init(&msg->recordtime_list, 0)) {
    miv_cluster_interfaces__srv__Scheduler_Request__fini(msg);
    return false;
  }
  return true;
}

void
miv_cluster_interfaces__srv__Scheduler_Request__fini(miv_cluster_interfaces__srv__Scheduler_Request * msg)
{
  if (!msg) {
    return;
  }
  // mea_list
  rosidl_runtime_c__int32__Sequence__fini(&msg->mea_list);
  // recordtime_list
  rosidl_runtime_c__float__Sequence__fini(&msg->recordtime_list);
}

bool
miv_cluster_interfaces__srv__Scheduler_Request__are_equal(const miv_cluster_interfaces__srv__Scheduler_Request * lhs, const miv_cluster_interfaces__srv__Scheduler_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mea_list
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->mea_list), &(rhs->mea_list)))
  {
    return false;
  }
  // recordtime_list
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->recordtime_list), &(rhs->recordtime_list)))
  {
    return false;
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Scheduler_Request__copy(
  const miv_cluster_interfaces__srv__Scheduler_Request * input,
  miv_cluster_interfaces__srv__Scheduler_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mea_list
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->mea_list), &(output->mea_list)))
  {
    return false;
  }
  // recordtime_list
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->recordtime_list), &(output->recordtime_list)))
  {
    return false;
  }
  return true;
}

miv_cluster_interfaces__srv__Scheduler_Request *
miv_cluster_interfaces__srv__Scheduler_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Scheduler_Request * msg = (miv_cluster_interfaces__srv__Scheduler_Request *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Scheduler_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(miv_cluster_interfaces__srv__Scheduler_Request));
  bool success = miv_cluster_interfaces__srv__Scheduler_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
miv_cluster_interfaces__srv__Scheduler_Request__destroy(miv_cluster_interfaces__srv__Scheduler_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    miv_cluster_interfaces__srv__Scheduler_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
miv_cluster_interfaces__srv__Scheduler_Request__Sequence__init(miv_cluster_interfaces__srv__Scheduler_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Scheduler_Request * data = NULL;

  if (size) {
    data = (miv_cluster_interfaces__srv__Scheduler_Request *)allocator.zero_allocate(size, sizeof(miv_cluster_interfaces__srv__Scheduler_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = miv_cluster_interfaces__srv__Scheduler_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        miv_cluster_interfaces__srv__Scheduler_Request__fini(&data[i - 1]);
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
miv_cluster_interfaces__srv__Scheduler_Request__Sequence__fini(miv_cluster_interfaces__srv__Scheduler_Request__Sequence * array)
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
      miv_cluster_interfaces__srv__Scheduler_Request__fini(&array->data[i]);
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

miv_cluster_interfaces__srv__Scheduler_Request__Sequence *
miv_cluster_interfaces__srv__Scheduler_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Scheduler_Request__Sequence * array = (miv_cluster_interfaces__srv__Scheduler_Request__Sequence *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Scheduler_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = miv_cluster_interfaces__srv__Scheduler_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
miv_cluster_interfaces__srv__Scheduler_Request__Sequence__destroy(miv_cluster_interfaces__srv__Scheduler_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    miv_cluster_interfaces__srv__Scheduler_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
miv_cluster_interfaces__srv__Scheduler_Request__Sequence__are_equal(const miv_cluster_interfaces__srv__Scheduler_Request__Sequence * lhs, const miv_cluster_interfaces__srv__Scheduler_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!miv_cluster_interfaces__srv__Scheduler_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Scheduler_Request__Sequence__copy(
  const miv_cluster_interfaces__srv__Scheduler_Request__Sequence * input,
  miv_cluster_interfaces__srv__Scheduler_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(miv_cluster_interfaces__srv__Scheduler_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    miv_cluster_interfaces__srv__Scheduler_Request * data =
      (miv_cluster_interfaces__srv__Scheduler_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!miv_cluster_interfaces__srv__Scheduler_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          miv_cluster_interfaces__srv__Scheduler_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!miv_cluster_interfaces__srv__Scheduler_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "rosidl_runtime_c/string_functions.h"

bool
miv_cluster_interfaces__srv__Scheduler_Response__init(miv_cluster_interfaces__srv__Scheduler_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    miv_cluster_interfaces__srv__Scheduler_Response__fini(msg);
    return false;
  }
  return true;
}

void
miv_cluster_interfaces__srv__Scheduler_Response__fini(miv_cluster_interfaces__srv__Scheduler_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
miv_cluster_interfaces__srv__Scheduler_Response__are_equal(const miv_cluster_interfaces__srv__Scheduler_Response * lhs, const miv_cluster_interfaces__srv__Scheduler_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Scheduler_Response__copy(
  const miv_cluster_interfaces__srv__Scheduler_Response * input,
  miv_cluster_interfaces__srv__Scheduler_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

miv_cluster_interfaces__srv__Scheduler_Response *
miv_cluster_interfaces__srv__Scheduler_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Scheduler_Response * msg = (miv_cluster_interfaces__srv__Scheduler_Response *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Scheduler_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(miv_cluster_interfaces__srv__Scheduler_Response));
  bool success = miv_cluster_interfaces__srv__Scheduler_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
miv_cluster_interfaces__srv__Scheduler_Response__destroy(miv_cluster_interfaces__srv__Scheduler_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    miv_cluster_interfaces__srv__Scheduler_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
miv_cluster_interfaces__srv__Scheduler_Response__Sequence__init(miv_cluster_interfaces__srv__Scheduler_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Scheduler_Response * data = NULL;

  if (size) {
    data = (miv_cluster_interfaces__srv__Scheduler_Response *)allocator.zero_allocate(size, sizeof(miv_cluster_interfaces__srv__Scheduler_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = miv_cluster_interfaces__srv__Scheduler_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        miv_cluster_interfaces__srv__Scheduler_Response__fini(&data[i - 1]);
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
miv_cluster_interfaces__srv__Scheduler_Response__Sequence__fini(miv_cluster_interfaces__srv__Scheduler_Response__Sequence * array)
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
      miv_cluster_interfaces__srv__Scheduler_Response__fini(&array->data[i]);
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

miv_cluster_interfaces__srv__Scheduler_Response__Sequence *
miv_cluster_interfaces__srv__Scheduler_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  miv_cluster_interfaces__srv__Scheduler_Response__Sequence * array = (miv_cluster_interfaces__srv__Scheduler_Response__Sequence *)allocator.allocate(sizeof(miv_cluster_interfaces__srv__Scheduler_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = miv_cluster_interfaces__srv__Scheduler_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
miv_cluster_interfaces__srv__Scheduler_Response__Sequence__destroy(miv_cluster_interfaces__srv__Scheduler_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    miv_cluster_interfaces__srv__Scheduler_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
miv_cluster_interfaces__srv__Scheduler_Response__Sequence__are_equal(const miv_cluster_interfaces__srv__Scheduler_Response__Sequence * lhs, const miv_cluster_interfaces__srv__Scheduler_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!miv_cluster_interfaces__srv__Scheduler_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
miv_cluster_interfaces__srv__Scheduler_Response__Sequence__copy(
  const miv_cluster_interfaces__srv__Scheduler_Response__Sequence * input,
  miv_cluster_interfaces__srv__Scheduler_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(miv_cluster_interfaces__srv__Scheduler_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    miv_cluster_interfaces__srv__Scheduler_Response * data =
      (miv_cluster_interfaces__srv__Scheduler_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!miv_cluster_interfaces__srv__Scheduler_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          miv_cluster_interfaces__srv__Scheduler_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!miv_cluster_interfaces__srv__Scheduler_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
