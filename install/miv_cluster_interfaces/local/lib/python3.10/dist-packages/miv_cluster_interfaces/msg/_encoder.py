# generated from rosidl_generator_py/resource/_idl.py.em
# with input from miv_cluster_interfaces:msg/Encoder.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Encoder(type):
    """Metaclass of message 'Encoder'."""

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
                'miv_cluster_interfaces.msg.Encoder')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__encoder
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__encoder
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__encoder
            cls._TYPE_SUPPORT = module.type_support_msg__msg__encoder
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__encoder

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Encoder(metaclass=Metaclass_Encoder):
    """Message class 'Encoder'."""

    __slots__ = [
        '_x_target',
        '_y_target',
        '_z_target',
        '_encoder_switch',
    ]

    _fields_and_field_types = {
        'x_target': 'float',
        'y_target': 'float',
        'z_target': 'float',
        'encoder_switch': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x_target = kwargs.get('x_target', float())
        self.y_target = kwargs.get('y_target', float())
        self.z_target = kwargs.get('z_target', float())
        self.encoder_switch = kwargs.get('encoder_switch', str())

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
        if self.x_target != other.x_target:
            return False
        if self.y_target != other.y_target:
            return False
        if self.z_target != other.z_target:
            return False
        if self.encoder_switch != other.encoder_switch:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x_target(self):
        """Message field 'x_target'."""
        return self._x_target

    @x_target.setter
    def x_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_target = value

    @builtins.property
    def y_target(self):
        """Message field 'y_target'."""
        return self._y_target

    @y_target.setter
    def y_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_target = value

    @builtins.property
    def z_target(self):
        """Message field 'z_target'."""
        return self._z_target

    @z_target.setter
    def z_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_target = value

    @builtins.property
    def encoder_switch(self):
        """Message field 'encoder_switch'."""
        return self._encoder_switch

    @encoder_switch.setter
    def encoder_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'encoder_switch' field must be of type 'str'"
        self._encoder_switch = value
