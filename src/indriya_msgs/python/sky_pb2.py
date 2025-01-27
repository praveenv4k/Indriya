# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: sky.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import color_pb2 as color__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='sky.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\tsky.proto\x12\x11Indriya.Core.Msgs\x1a\x0b\x63olor.proto\"\xbc\x01\n\x03Sky\x12\x0c\n\x04time\x18\x01 \x01(\x01\x12\x0f\n\x07sunrise\x18\x02 \x01(\x01\x12\x0e\n\x06sunset\x18\x03 \x01(\x01\x12\x12\n\nwind_speed\x18\x04 \x01(\x01\x12\x16\n\x0ewind_direction\x18\x05 \x01(\x01\x12/\n\rcloud_ambient\x18\x06 \x01(\x0b\x32\x18.Indriya.Core.Msgs.Color\x12\x10\n\x08humidity\x18\x07 \x01(\x01\x12\x17\n\x0fmean_cloud_size\x18\x08 \x01(\x01')
  ,
  dependencies=[color__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_SKY = _descriptor.Descriptor(
  name='Sky',
  full_name='Indriya.Core.Msgs.Sky',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='time', full_name='Indriya.Core.Msgs.Sky.time', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sunrise', full_name='Indriya.Core.Msgs.Sky.sunrise', index=1,
      number=2, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sunset', full_name='Indriya.Core.Msgs.Sky.sunset', index=2,
      number=3, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='wind_speed', full_name='Indriya.Core.Msgs.Sky.wind_speed', index=3,
      number=4, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='wind_direction', full_name='Indriya.Core.Msgs.Sky.wind_direction', index=4,
      number=5, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='cloud_ambient', full_name='Indriya.Core.Msgs.Sky.cloud_ambient', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='humidity', full_name='Indriya.Core.Msgs.Sky.humidity', index=6,
      number=7, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mean_cloud_size', full_name='Indriya.Core.Msgs.Sky.mean_cloud_size', index=7,
      number=8, type=1, cpp_type=5, label=1,
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
  serialized_start=46,
  serialized_end=234,
)

_SKY.fields_by_name['cloud_ambient'].message_type = color__pb2._COLOR
DESCRIPTOR.message_types_by_name['Sky'] = _SKY

Sky = _reflection.GeneratedProtocolMessageType('Sky', (_message.Message,), dict(
  DESCRIPTOR = _SKY,
  __module__ = 'sky_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Sky)
  ))
_sym_db.RegisterMessage(Sky)


# @@protoc_insertion_point(module_scope)
