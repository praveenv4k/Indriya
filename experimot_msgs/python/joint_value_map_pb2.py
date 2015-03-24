# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: joint_value_map.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='joint_value_map.proto',
  package='experimot.msgs',
  serialized_pb=_b('\n\x15joint_value_map.proto\x12\x0e\x65xperimot.msgs\"\'\n\nJointValue\x12\n\n\x02id\x18\x01 \x02(\x05\x12\r\n\x05value\x18\x02 \x02(\x01\"C\n\x10JointValueVector\x12/\n\x0bJointValues\x18\x01 \x03(\x0b\x32\x1a.experimot.msgs.JointValue')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_JOINTVALUE = _descriptor.Descriptor(
  name='JointValue',
  full_name='experimot.msgs.JointValue',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='experimot.msgs.JointValue.id', index=0,
      number=1, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='value', full_name='experimot.msgs.JointValue.value', index=1,
      number=2, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=41,
  serialized_end=80,
)


_JOINTVALUEVECTOR = _descriptor.Descriptor(
  name='JointValueVector',
  full_name='experimot.msgs.JointValueVector',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='JointValues', full_name='experimot.msgs.JointValueVector.JointValues', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=82,
  serialized_end=149,
)

_JOINTVALUEVECTOR.fields_by_name['JointValues'].message_type = _JOINTVALUE
DESCRIPTOR.message_types_by_name['JointValue'] = _JOINTVALUE
DESCRIPTOR.message_types_by_name['JointValueVector'] = _JOINTVALUEVECTOR

JointValue = _reflection.GeneratedProtocolMessageType('JointValue', (_message.Message,), dict(
  DESCRIPTOR = _JOINTVALUE,
  __module__ = 'joint_value_map_pb2'
  # @@protoc_insertion_point(class_scope:experimot.msgs.JointValue)
  ))
_sym_db.RegisterMessage(JointValue)

JointValueVector = _reflection.GeneratedProtocolMessageType('JointValueVector', (_message.Message,), dict(
  DESCRIPTOR = _JOINTVALUEVECTOR,
  __module__ = 'joint_value_map_pb2'
  # @@protoc_insertion_point(class_scope:experimot.msgs.JointValueVector)
  ))
_sym_db.RegisterMessage(JointValueVector)


# @@protoc_insertion_point(module_scope)