# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz_string_v.proto

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
  name='gz_string_v.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x11gz_string_v.proto\x12\x11Indriya.Core.Msgs\"\x1a\n\nGzString_V\x12\x0c\n\x04\x64\x61ta\x18\x01 \x03(\t')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_GZSTRING_V = _descriptor.Descriptor(
  name='GzString_V',
  full_name='Indriya.Core.Msgs.GzString_V',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='data', full_name='Indriya.Core.Msgs.GzString_V.data', index=0,
      number=1, type=9, cpp_type=9, label=3,
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
  #syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=40,
  serialized_end=66,
)

DESCRIPTOR.message_types_by_name['GzString_V'] = _GZSTRING_V

GzString_V = _reflection.GeneratedProtocolMessageType('GzString_V', (_message.Message,), dict(
  DESCRIPTOR = _GZSTRING_V,
  __module__ = 'gz_string_v_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.GzString_V)
  ))
_sym_db.RegisterMessage(GzString_V)


# @@protoc_insertion_point(module_scope)
