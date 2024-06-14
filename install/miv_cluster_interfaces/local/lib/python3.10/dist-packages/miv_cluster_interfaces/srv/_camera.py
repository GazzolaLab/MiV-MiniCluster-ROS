# generated from rosidl_generator_py/resource/_idl.py.em
# with input from miv_cluster_interfaces:srv/Camera.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Camera_Request(type):
    """Metaclass of message 'Camera_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('miv_cluster_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'miv_cluster_interfaces.srv.Camera_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera_Request(metaclass=Metaclass_Camera_Request):
    """Message class 'Camera_Request'."""

    __slots__ = [
        '_x1',
        '_y1',
        '_z1',
        '_calibration_flag',
        '_qrscan_flag',
        '_iteration',
    ]

    _fields_and_field_types = {
        'x1': 'float',
        'y1': 'float',
        'z1': 'float',
        'calibration_flag': 'boolean',
        'qrscan_flag': 'boolean',
        'iteration': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x1 = kwargs.get('x1', float())
        self.y1 = kwargs.get('y1', float())
        self.z1 = kwargs.get('z1', float())
        self.calibration_flag = kwargs.get('calibration_flag', bool())
        self.qrscan_flag = kwargs.get('qrscan_flag', bool())
        self.iteration = kwargs.get('iteration', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x1 != other.x1:
            return False
        if self.y1 != other.y1:
            return False
        if self.z1 != other.z1:
            return False
        if self.calibration_flag != other.calibration_flag:
            return False
        if self.qrscan_flag != other.qrscan_flag:
            return False
        if self.iteration != other.iteration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x1(self):
        """Message field 'x1'."""
        return self._x1

    @x1.setter
    def x1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x1 = value

    @builtins.property
    def y1(self):
        """Message field 'y1'."""
        return self._y1

    @y1.setter
    def y1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y1 = value

    @builtins.property
    def z1(self):
        """Message field 'z1'."""
        return self._z1

    @z1.setter
    def z1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z1 = value

    @builtins.property
    def calibration_flag(self):
        """Message field 'calibration_flag'."""
        return self._calibration_flag

    @calibration_flag.setter
    def calibration_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration_flag' field must be of type 'bool'"
        self._calibration_flag = value

    @builtins.property
    def qrscan_flag(self):
        """Message field 'qrscan_flag'."""
        return self._qrscan_flag

    @qrscan_flag.setter
    def qrscan_flag(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'qrscan_flag' field must be of type 'bool'"
        self._qrscan_flag = value

    @builtins.property
    def iteration(self):
        """Message field 'iteration'."""
        return self._iteration

    @iteration.setter
    def iteration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'iteration' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'iteration' field must be an integer in [-2147483648, 2147483647]"
        self._iteration = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Camera_Response(type):
    """Metaclass of message 'Camera_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('miv_cluster_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'miv_cluster_interfaces.srv.Camera_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__camera__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__camera__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__camera__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__camera__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__camera__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Camera_Response(metaclass=Metaclass_Camera_Response):
    """Message class 'Camera_Response'."""

    __slots__ = [
        '_x2',
        '_y2',
        '_z2',
    ]

    _fields_and_field_types = {
        'x2': 'float',
        'y2': 'float',
        'z2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x2 = kwargs.get('x2', float())
        self.y2 = kwargs.get('y2', float())
        self.z2 = kwargs.get('z2', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x2 != other.x2:
            return False
        if self.y2 != other.y2:
            return False
        if self.z2 != other.z2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x2(self):
        """Message field 'x2'."""
        return self._x2

    @x2.setter
    def x2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x2 = value

    @builtins.property
    def y2(self):
        """Message field 'y2'."""
        return self._y2

    @y2.setter
    def y2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y2 = value

    @builtins.property
    def z2(self):
        """Message field 'z2'."""
        return self._z2

    @z2.setter
    def z2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z2 = value


class Metaclass_Camera(type):
    """Metaclass of service 'Camera'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('miv_cluster_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'miv_cluster_interfaces.srv.Camera')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__camera

            from miv_cluster_interfaces.srv import _camera
            if _camera.Metaclass_Camera_Request._TYPE_SUPPORT is None:
                _camera.Metaclass_Camera_Request.__import_type_support__()
            if _camera.Metaclass_Camera_Response._TYPE_SUPPORT is None:
                _camera.Metaclass_Camera_Response.__import_type_support__()


class Camera(metaclass=Metaclass_Camera):
    from miv_cluster_interfaces.srv._camera import Camera_Request as Request
    from miv_cluster_interfaces.srv._camera import Camera_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
