# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: link.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import inertial_pb2 as inertial__pb2
import collision_pb2 as collision__pb2
import visual_pb2 as visual__pb2
import sensor_pb2 as sensor__pb2
import projector_pb2 as projector__pb2
import pose_pb2 as pose__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='link.proto',
  package='Indriya.Core.Msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\nlink.proto\x12\x11Indriya.Core.Msgs\x1a\x0einertial.proto\x1a\x0f\x63ollision.proto\x1a\x0cvisual.proto\x1a\x0csensor.proto\x1a\x0fprojector.proto\x1a\npose.proto\"\x8c\x03\n\x04Link\x12\n\n\x02id\x18\x01 \x01(\r\x12\x0c\n\x04name\x18\x02 \x02(\t\x12\x14\n\x0cself_collide\x18\x03 \x01(\x08\x12\x0f\n\x07gravity\x18\x04 \x01(\x08\x12\x11\n\tkinematic\x18\x05 \x01(\x08\x12\x0f\n\x07\x65nabled\x18\x06 \x01(\x08\x12-\n\x08inertial\x18\x07 \x01(\x0b\x32\x1b.Indriya.Core.Msgs.Inertial\x12%\n\x04pose\x18\x08 \x01(\x0b\x32\x17.Indriya.Core.Msgs.Pose\x12)\n\x06visual\x18\t \x03(\x0b\x32\x19.Indriya.Core.Msgs.Visual\x12/\n\tcollision\x18\n \x03(\x0b\x32\x1c.Indriya.Core.Msgs.Collision\x12)\n\x06sensor\x18\x0b \x03(\x0b\x32\x19.Indriya.Core.Msgs.Sensor\x12/\n\tprojector\x18\x0c \x03(\x0b\x32\x1c.Indriya.Core.Msgs.Projector\x12\x11\n\tcanonical\x18\r \x01(\x08')
  ,
  dependencies=[inertial__pb2.DESCRIPTOR,collision__pb2.DESCRIPTOR,visual__pb2.DESCRIPTOR,sensor__pb2.DESCRIPTOR,projector__pb2.DESCRIPTOR,pose__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_LINK = _descriptor.Descriptor(
  name='Link',
  full_name='Indriya.Core.Msgs.Link',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='Indriya.Core.Msgs.Link.id', index=0,
      number=1, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='name', full_name='Indriya.Core.Msgs.Link.name', index=1,
      number=2, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='self_collide', full_name='Indriya.Core.Msgs.Link.self_collide', index=2,
      number=3, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gravity', full_name='Indriya.Core.Msgs.Link.gravity', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='kinematic', full_name='Indriya.Core.Msgs.Link.kinematic', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='enabled', full_name='Indriya.Core.Msgs.Link.enabled', index=5,
      number=6, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='inertial', full_name='Indriya.Core.Msgs.Link.inertial', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pose', full_name='Indriya.Core.Msgs.Link.pose', index=7,
      number=8, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='visual', full_name='Indriya.Core.Msgs.Link.visual', index=8,
      number=9, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='collision', full_name='Indriya.Core.Msgs.Link.collision', index=9,
      number=10, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='sensor', full_name='Indriya.Core.Msgs.Link.sensor', index=10,
      number=11, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='projector', full_name='Indriya.Core.Msgs.Link.projector', index=11,
      number=12, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='canonical', full_name='Indriya.Core.Msgs.Link.canonical', index=12,
      number=13, type=8, cpp_type=7, label=1,
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
  serialized_start=124,
  serialized_end=520,
)

_LINK.fields_by_name['inertial'].message_type = inertial__pb2._INERTIAL
_LINK.fields_by_name['pose'].message_type = pose__pb2._POSE
_LINK.fields_by_name['visual'].message_type = visual__pb2._VISUAL
_LINK.fields_by_name['collision'].message_type = collision__pb2._COLLISION
_LINK.fields_by_name['sensor'].message_type = sensor__pb2._SENSOR
_LINK.fields_by_name['projector'].message_type = projector__pb2._PROJECTOR
DESCRIPTOR.message_types_by_name['Link'] = _LINK

Link = _reflection.GeneratedProtocolMessageType('Link', (_message.Message,), dict(
  DESCRIPTOR = _LINK,
  __module__ = 'link_pb2'
  # @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Link)
  ))
_sym_db.RegisterMessage(Link)


# @@protoc_insertion_point(module_scope)
