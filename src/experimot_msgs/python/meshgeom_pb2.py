# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: meshgeom.proto

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
  name='meshgeom.proto',
  package='experimot.msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\x0emeshgeom.proto\x12\x0e\x65xperimot.msgs\x1a\x0evector3d.proto\"n\n\x08MeshGeom\x12\x10\n\x08\x66ilename\x18\x01 \x02(\t\x12\'\n\x05scale\x18\x02 \x01(\x0b\x32\x18.experimot.msgs.Vector3d\x12\x0f\n\x07submesh\x18\x03 \x01(\t\x12\x16\n\x0e\x63\x65nter_submesh\x18\x04 \x01(\x08')
  ,
  dependencies=[vector3d__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_MESHGEOM = _descriptor.Descriptor(
  name='MeshGeom',
  full_name='experimot.msgs.MeshGeom',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='filename', full_name='experimot.msgs.MeshGeom.filename', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='scale', full_name='experimot.msgs.MeshGeom.scale', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='submesh', full_name='experimot.msgs.MeshGeom.submesh', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='center_submesh', full_name='experimot.msgs.MeshGeom.center_submesh', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
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
  serialized_start=50,
  serialized_end=160,
)

_MESHGEOM.fields_by_name['scale'].message_type = vector3d__pb2._VECTOR3D
DESCRIPTOR.message_types_by_name['MeshGeom'] = _MESHGEOM

MeshGeom = _reflection.GeneratedProtocolMessageType('MeshGeom', (_message.Message,), dict(
  DESCRIPTOR = _MESHGEOM,
  __module__ = 'meshgeom_pb2'
  # @@protoc_insertion_point(class_scope:experimot.msgs.MeshGeom)
  ))
_sym_db.RegisterMessage(MeshGeom)


# @@protoc_insertion_point(module_scope)
