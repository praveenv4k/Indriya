# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: vector2d.proto

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
  name='vector2d.proto',
  package='experimot.msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x0evector2d.proto\x12\x0e\x65xperimot.msgs\" \n\x08Vector2d\x12\t\n\x01x\x18\x01 \x02(\x01\x12\t\n\x01y\x18\x02 \x02(\x01')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_VECTOR2D = _descriptor.Descriptor(
  name='Vector2d',
  full_name='experimot.msgs.Vector2d',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='x', full_name='experimot.msgs.Vector2d.x', index=0,
      number=1, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='y', full_name='experimot.msgs.Vector2d.y', index=1,
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
  #syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=34,
  serialized_end=66,
)

DESCRIPTOR.message_types_by_name['Vector2d'] = _VECTOR2D

Vector2d = _reflection.GeneratedProtocolMessageType('Vector2d', (_message.Message,), dict(
  DESCRIPTOR = _VECTOR2D,
  __module__ = 'vector2d_pb2'
  # @@protoc_insertion_point(class_scope:experimot.msgs.Vector2d)
  ))
_sym_db.RegisterMessage(Vector2d)


# @@protoc_insertion_point(module_scope)
