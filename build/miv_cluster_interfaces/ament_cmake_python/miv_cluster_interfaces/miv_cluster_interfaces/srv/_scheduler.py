# generated from rosidl_generator_py/resource/_idl.py.em
# with input from miv_cluster_interfaces:srv/Scheduler.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'mea_list'
# Member 'recordtime_list'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Scheduler_Request(type):
    """Metaclass of message 'Scheduler_Request'."""

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
                'miv_cluster_interfaces.srv.Scheduler_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__scheduler__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__scheduler__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__scheduler__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__scheduler__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__scheduler__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Scheduler_Request(metaclass=Metaclass_Scheduler_Request):
    """Message class 'Scheduler_Request'."""

    __slots__ = [
        '_mea_list',
        '_recordtime_list',
    ]

    _fields_and_field_types = {
        'mea_list': 'sequence<int32>',
        'recordtime_list': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mea_list = array.array('i', kwargs.get('mea_list', []))
        self.recordtime_list = array.array('f', kwargs.get('recordtime_list', []))

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
        if self.mea_list != other.mea_list:
            return False
        if self.recordtime_list != other.recordtime_list:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mea_list(self):
        """Message field 'mea_list'."""
        return self._mea_list

    @mea_list.setter
    def mea_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'mea_list' array.array() must have the type code of 'i'"
            self._mea_list = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'mea_list' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._mea_list = array.array('i', value)

    @builtins.property
    def recordtime_list(self):
        """Message field 'recordtime_list'."""
        return self._recordtime_list

    @recordtime_list.setter
    def recordtime_list(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'recordtime_list' array.array() must have the type code of 'f'"
            self._recordtime_list = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'recordtime_list' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._recordtime_list = array.array('f', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Scheduler_Response(type):
    """Metaclass of message 'Scheduler_Response'."""

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
                'miv_cluster_interfaces.srv.Scheduler_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__scheduler__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__scheduler__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__scheduler__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__scheduler__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__scheduler__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Scheduler_Response(metaclass=Metaclass_Scheduler_Response):
    """Message class 'Scheduler_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', str())

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
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status' field must be of type 'str'"
        self._status = value


class Metaclass_Scheduler(type):
    """Metaclass of service 'Scheduler'."""

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
                'miv_cluster_interfaces.srv.Scheduler')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__scheduler

            from miv_cluster_interfaces.srv import _scheduler
            if _scheduler.Metaclass_Scheduler_Request._TYPE_SUPPORT is None:
                _scheduler.Metaclass_Scheduler_Request.__import_type_support__()
            if _scheduler.Metaclass_Scheduler_Response._TYPE_SUPPORT is None:
                _scheduler.Metaclass_Scheduler_Response.__import_type_support__()


class Scheduler(metaclass=Metaclass_Scheduler):
    from miv_cluster_interfaces.srv._scheduler import Scheduler_Request as Request
    from miv_cluster_interfaces.srv._scheduler import Scheduler_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
