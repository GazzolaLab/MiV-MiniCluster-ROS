// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from miv_cluster_interfaces:msg/Encoder.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "miv_cluster_interfaces/msg/detail/encoder__struct.h"
#include "miv_cluster_interfaces/msg/detail/encoder__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool miv_cluster_interfaces__msg__encoder__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("miv_cluster_interfaces.msg._encoder.Encoder", full_classname_dest, 43) == 0);
  }
  miv_cluster_interfaces__msg__Encoder * ros_message = _ros_message;
  {  // x_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "z_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z_target = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // encoder_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "encoder_switch");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->encoder_switch, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * miv_cluster_interfaces__msg__encoder__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Encoder */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("miv_cluster_interfaces.msg._encoder");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Encoder");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  miv_cluster_interfaces__msg__Encoder * ros_message = (miv_cluster_interfaces__msg__Encoder *)raw_ros_message;
  {  // x_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // encoder_switch
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->encoder_switch.data,
      strlen(ros_message->encoder_switch.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "encoder_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
