# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gui.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import gui_camera_pb2 as gui__camera__pb2
import plugin_pb2 as plugin__pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='gui.proto',
  package='experimot.msgs',
  #syntax='proto2',
  serialized_pb=_b('\n\tgui.proto\x12\x0e\x65xperimot.msgs\x1a\x10gui_camera.proto\x1a\x0cplugin.proto\"l\n\x03GUI\x12\x12\n\nfullscreen\x18\x01 \x01(\x08\x12)\n\x06\x63\x61mera\x18\x02 \x01(\x0b\x32\x19.experimot.msgs.GUICamera\x12&\n\x06plugin\x18\x03 \x03(\x0b\x32\x16.experimot.msgs.Plugin')
  ,
  dependencies=[gui__camera__pb2.DESCRIPTOR,plugin__pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_GUI = _descriptor.Descriptor(
  name='GUI',
  full_name='experimot.msgs.GUI',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='fullscreen', full_name='experimot.msgs.GUI.fullscreen', index=0,
      number=1, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='camera', full_name='experimot.msgs.GUI.camera', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='plugin', full_name='experimot.msgs.GUI.plugin', index=2,
      number=3, type=11, cpp_type=10, label=3,
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
  serialized_start=61,
  serialized_end=169,
)

_GUI.fields_by_name['camera'].message_type = gui__camera__pb2._GUICAMERA
_GUI.fields_by_name['plugin'].message_type = plugin__pb2._PLUGIN
DESCRIPTOR.message_types_by_name['GUI'] = _GUI

GUI = _reflection.GeneratedProtocolMessageType('GUI', (_message.Message,), dict(
  DESCRIPTOR = _GUI,
  __module__ = 'gui_pb2'
  # @@protoc_insertion_point(class_scope:experimot.msgs.GUI)
  ))
_sym_db.RegisterMessage(GUI)


# @@protoc_insertion_point(module_scope)
