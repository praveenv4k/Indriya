# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: boxgeom.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import vector3d_pb2 as vector3d__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='boxgeom.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\rboxgeom.proto\x12\x11Indriya.Core.Msgs\x1a\x0evector3d.proto\"4\n\x07\x42oxGeom\x12)\n\x04size\x18\x01 \x02(\x0b\x32\x1b.Indriya.Core.Msgs.Vector3d')
  ,
  dependencies=[vector3d__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_BOXGEOM = _descriptor.Descriptor(
  name='BoxGeom',
  full_name='Indriya.Core.Msgs.BoxGeom',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='size', full_name='Indriya.Core.Msgs.BoxGeom.size', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
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
  serialized_start=52,
  serialized_end=104,
)

_BOXGEOM.fields_by_name['size'].message_type = vector3d__pb2._VECTOR3D
DESCRIPTOR.message_types_by_name['BoxGeom'] = _BOXGEOM

BoxGeom = _reflection.GeneratedProtocolMessageType('BoxGeom', (_message.Message,), dict(
  DESCRIPTOR = _BOXGEOM,
  __module__ = 'boxgeom_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.BoxGeom)
  ))
_sym_db.RegisterMessage(BoxGeom)


# @@protoc_insertion_point(module_scope)
