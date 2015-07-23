// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: material.proto

#ifndef PROTOBUF_material_2eproto__INCLUDED
#define PROTOBUF_material_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "color.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_material_2eproto();
void protobuf_AssignDesc_material_2eproto();
void protobuf_ShutdownFile_material_2eproto();

class Material;
class Material_Script;

enum Material_ShaderType {
  Material_ShaderType_VERTEX = 1,
  Material_ShaderType_PIXEL = 2,
  Material_ShaderType_NORMAL_MAP_OBJECT_SPACE = 3,
  Material_ShaderType_NORMAL_MAP_TANGENT_SPACE = 4
};
bool Material_ShaderType_IsValid(int value);
const Material_ShaderType Material_ShaderType_ShaderType_MIN = Material_ShaderType_VERTEX;
const Material_ShaderType Material_ShaderType_ShaderType_MAX = Material_ShaderType_NORMAL_MAP_TANGENT_SPACE;
const int Material_ShaderType_ShaderType_ARRAYSIZE = Material_ShaderType_ShaderType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Material_ShaderType_descriptor();
inline const ::std::string& Material_ShaderType_Name(Material_ShaderType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Material_ShaderType_descriptor(), value);
}
inline bool Material_ShaderType_Parse(
    const ::std::string& name, Material_ShaderType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Material_ShaderType>(
    Material_ShaderType_descriptor(), name, value);
}
// ===================================================================

class Material_Script : public ::google::protobuf::Message {
 public:
  Material_Script();
  virtual ~Material_Script();

  Material_Script(const Material_Script& from);

  inline Material_Script& operator=(const Material_Script& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Material_Script& default_instance();

  void Swap(Material_Script* other);

  // implements Message ----------------------------------------------

  inline Material_Script* New() const { return New(NULL); }

  Material_Script* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Material_Script& from);
  void MergeFrom(const Material_Script& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Material_Script* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string uri = 1;
  int uri_size() const;
  void clear_uri();
  static const int kUriFieldNumber = 1;
  const ::std::string& uri(int index) const;
  ::std::string* mutable_uri(int index);
  void set_uri(int index, const ::std::string& value);
  void set_uri(int index, const char* value);
  void set_uri(int index, const char* value, size_t size);
  ::std::string* add_uri();
  void add_uri(const ::std::string& value);
  void add_uri(const char* value);
  void add_uri(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& uri() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_uri();

  // required string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Material.Script)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> uri_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  friend void  protobuf_AddDesc_material_2eproto();
  friend void protobuf_AssignDesc_material_2eproto();
  friend void protobuf_ShutdownFile_material_2eproto();

  void InitAsDefaultInstance();
  static Material_Script* default_instance_;
};
// -------------------------------------------------------------------

class Material : public ::google::protobuf::Message {
 public:
  Material();
  virtual ~Material();

  Material(const Material& from);

  inline Material& operator=(const Material& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Material& default_instance();

  void Swap(Material* other);

  // implements Message ----------------------------------------------

  inline Material* New() const { return New(NULL); }

  Material* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Material& from);
  void MergeFrom(const Material& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Material* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Material_Script Script;

  typedef Material_ShaderType ShaderType;
  static const ShaderType VERTEX = Material_ShaderType_VERTEX;
  static const ShaderType PIXEL = Material_ShaderType_PIXEL;
  static const ShaderType NORMAL_MAP_OBJECT_SPACE = Material_ShaderType_NORMAL_MAP_OBJECT_SPACE;
  static const ShaderType NORMAL_MAP_TANGENT_SPACE = Material_ShaderType_NORMAL_MAP_TANGENT_SPACE;
  static inline bool ShaderType_IsValid(int value) {
    return Material_ShaderType_IsValid(value);
  }
  static const ShaderType ShaderType_MIN =
    Material_ShaderType_ShaderType_MIN;
  static const ShaderType ShaderType_MAX =
    Material_ShaderType_ShaderType_MAX;
  static const int ShaderType_ARRAYSIZE =
    Material_ShaderType_ShaderType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  ShaderType_descriptor() {
    return Material_ShaderType_descriptor();
  }
  static inline const ::std::string& ShaderType_Name(ShaderType value) {
    return Material_ShaderType_Name(value);
  }
  static inline bool ShaderType_Parse(const ::std::string& name,
      ShaderType* value) {
    return Material_ShaderType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .Indriya.Core.Msgs.Material.Script script = 1;
  bool has_script() const;
  void clear_script();
  static const int kScriptFieldNumber = 1;
  const ::Indriya::Core::Msgs::Material_Script& script() const;
  ::Indriya::Core::Msgs::Material_Script* mutable_script();
  ::Indriya::Core::Msgs::Material_Script* release_script();
  void set_allocated_script(::Indriya::Core::Msgs::Material_Script* script);

  // optional .Indriya.Core.Msgs.Material.ShaderType shader_type = 2;
  bool has_shader_type() const;
  void clear_shader_type();
  static const int kShaderTypeFieldNumber = 2;
  ::Indriya::Core::Msgs::Material_ShaderType shader_type() const;
  void set_shader_type(::Indriya::Core::Msgs::Material_ShaderType value);

  // optional string normal_map = 3;
  bool has_normal_map() const;
  void clear_normal_map();
  static const int kNormalMapFieldNumber = 3;
  const ::std::string& normal_map() const;
  void set_normal_map(const ::std::string& value);
  void set_normal_map(const char* value);
  void set_normal_map(const char* value, size_t size);
  ::std::string* mutable_normal_map();
  ::std::string* release_normal_map();
  void set_allocated_normal_map(::std::string* normal_map);

  // optional .Indriya.Core.Msgs.Color ambient = 4;
  bool has_ambient() const;
  void clear_ambient();
  static const int kAmbientFieldNumber = 4;
  const ::Indriya::Core::Msgs::Color& ambient() const;
  ::Indriya::Core::Msgs::Color* mutable_ambient();
  ::Indriya::Core::Msgs::Color* release_ambient();
  void set_allocated_ambient(::Indriya::Core::Msgs::Color* ambient);

  // optional .Indriya.Core.Msgs.Color diffuse = 5;
  bool has_diffuse() const;
  void clear_diffuse();
  static const int kDiffuseFieldNumber = 5;
  const ::Indriya::Core::Msgs::Color& diffuse() const;
  ::Indriya::Core::Msgs::Color* mutable_diffuse();
  ::Indriya::Core::Msgs::Color* release_diffuse();
  void set_allocated_diffuse(::Indriya::Core::Msgs::Color* diffuse);

  // optional .Indriya.Core.Msgs.Color specular = 6;
  bool has_specular() const;
  void clear_specular();
  static const int kSpecularFieldNumber = 6;
  const ::Indriya::Core::Msgs::Color& specular() const;
  ::Indriya::Core::Msgs::Color* mutable_specular();
  ::Indriya::Core::Msgs::Color* release_specular();
  void set_allocated_specular(::Indriya::Core::Msgs::Color* specular);

  // optional .Indriya.Core.Msgs.Color emissive = 7;
  bool has_emissive() const;
  void clear_emissive();
  static const int kEmissiveFieldNumber = 7;
  const ::Indriya::Core::Msgs::Color& emissive() const;
  ::Indriya::Core::Msgs::Color* mutable_emissive();
  ::Indriya::Core::Msgs::Color* release_emissive();
  void set_allocated_emissive(::Indriya::Core::Msgs::Color* emissive);

  // optional bool lighting = 8;
  bool has_lighting() const;
  void clear_lighting();
  static const int kLightingFieldNumber = 8;
  bool lighting() const;
  void set_lighting(bool value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Material)
 private:
  inline void set_has_script();
  inline void clear_has_script();
  inline void set_has_shader_type();
  inline void clear_has_shader_type();
  inline void set_has_normal_map();
  inline void clear_has_normal_map();
  inline void set_has_ambient();
  inline void clear_has_ambient();
  inline void set_has_diffuse();
  inline void clear_has_diffuse();
  inline void set_has_specular();
  inline void clear_has_specular();
  inline void set_has_emissive();
  inline void clear_has_emissive();
  inline void set_has_lighting();
  inline void clear_has_lighting();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Indriya::Core::Msgs::Material_Script* script_;
  ::google::protobuf::internal::ArenaStringPtr normal_map_;
  ::Indriya::Core::Msgs::Color* ambient_;
  ::Indriya::Core::Msgs::Color* diffuse_;
  int shader_type_;
  bool lighting_;
  ::Indriya::Core::Msgs::Color* specular_;
  ::Indriya::Core::Msgs::Color* emissive_;
  friend void  protobuf_AddDesc_material_2eproto();
  friend void protobuf_AssignDesc_material_2eproto();
  friend void protobuf_ShutdownFile_material_2eproto();

  void InitAsDefaultInstance();
  static Material* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Material_Script

// repeated string uri = 1;
inline int Material_Script::uri_size() const {
  return uri_.size();
}
inline void Material_Script::clear_uri() {
  uri_.Clear();
}
inline const ::std::string& Material_Script::uri(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.Script.uri)
  return uri_.Get(index);
}
inline ::std::string* Material_Script::mutable_uri(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.Script.uri)
  return uri_.Mutable(index);
}
inline void Material_Script::set_uri(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Material.Script.uri)
  uri_.Mutable(index)->assign(value);
}
inline void Material_Script::set_uri(int index, const char* value) {
  uri_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Material.Script.uri)
}
inline void Material_Script::set_uri(int index, const char* value, size_t size) {
  uri_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Material.Script.uri)
}
inline ::std::string* Material_Script::add_uri() {
  return uri_.Add();
}
inline void Material_Script::add_uri(const ::std::string& value) {
  uri_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Material.Script.uri)
}
inline void Material_Script::add_uri(const char* value) {
  uri_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:Indriya.Core.Msgs.Material.Script.uri)
}
inline void Material_Script::add_uri(const char* value, size_t size) {
  uri_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:Indriya.Core.Msgs.Material.Script.uri)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Material_Script::uri() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Material.Script.uri)
  return uri_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Material_Script::mutable_uri() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Material.Script.uri)
  return &uri_;
}

// required string name = 2;
inline bool Material_Script::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Material_Script::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Material_Script::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Material_Script::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Material_Script::name() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.Script.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Material_Script::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Material.Script.name)
}
inline void Material_Script::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Material.Script.name)
}
inline void Material_Script::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Material.Script.name)
}
inline ::std::string* Material_Script::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.Script.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Material_Script::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Material_Script::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Material.Script.name)
}

// -------------------------------------------------------------------

// Material

// optional .Indriya.Core.Msgs.Material.Script script = 1;
inline bool Material::has_script() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Material::set_has_script() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Material::clear_has_script() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Material::clear_script() {
  if (script_ != NULL) script_->::Indriya::Core::Msgs::Material_Script::Clear();
  clear_has_script();
}
inline const ::Indriya::Core::Msgs::Material_Script& Material::script() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.script)
  return script_ != NULL ? *script_ : *default_instance_->script_;
}
inline ::Indriya::Core::Msgs::Material_Script* Material::mutable_script() {
  set_has_script();
  if (script_ == NULL) {
    script_ = new ::Indriya::Core::Msgs::Material_Script;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.script)
  return script_;
}
inline ::Indriya::Core::Msgs::Material_Script* Material::release_script() {
  clear_has_script();
  ::Indriya::Core::Msgs::Material_Script* temp = script_;
  script_ = NULL;
  return temp;
}
inline void Material::set_allocated_script(::Indriya::Core::Msgs::Material_Script* script) {
  delete script_;
  script_ = script;
  if (script) {
    set_has_script();
  } else {
    clear_has_script();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Material.script)
}

// optional .Indriya.Core.Msgs.Material.ShaderType shader_type = 2;
inline bool Material::has_shader_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Material::set_has_shader_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Material::clear_has_shader_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Material::clear_shader_type() {
  shader_type_ = 1;
  clear_has_shader_type();
}
inline ::Indriya::Core::Msgs::Material_ShaderType Material::shader_type() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.shader_type)
  return static_cast< ::Indriya::Core::Msgs::Material_ShaderType >(shader_type_);
}
inline void Material::set_shader_type(::Indriya::Core::Msgs::Material_ShaderType value) {
  assert(::Indriya::Core::Msgs::Material_ShaderType_IsValid(value));
  set_has_shader_type();
  shader_type_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Material.shader_type)
}

// optional string normal_map = 3;
inline bool Material::has_normal_map() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Material::set_has_normal_map() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Material::clear_has_normal_map() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Material::clear_normal_map() {
  normal_map_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_normal_map();
}
inline const ::std::string& Material::normal_map() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.normal_map)
  return normal_map_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Material::set_normal_map(const ::std::string& value) {
  set_has_normal_map();
  normal_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Material.normal_map)
}
inline void Material::set_normal_map(const char* value) {
  set_has_normal_map();
  normal_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Material.normal_map)
}
inline void Material::set_normal_map(const char* value, size_t size) {
  set_has_normal_map();
  normal_map_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Material.normal_map)
}
inline ::std::string* Material::mutable_normal_map() {
  set_has_normal_map();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.normal_map)
  return normal_map_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Material::release_normal_map() {
  clear_has_normal_map();
  return normal_map_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Material::set_allocated_normal_map(::std::string* normal_map) {
  if (normal_map != NULL) {
    set_has_normal_map();
  } else {
    clear_has_normal_map();
  }
  normal_map_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), normal_map);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Material.normal_map)
}

// optional .Indriya.Core.Msgs.Color ambient = 4;
inline bool Material::has_ambient() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Material::set_has_ambient() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Material::clear_has_ambient() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Material::clear_ambient() {
  if (ambient_ != NULL) ambient_->::Indriya::Core::Msgs::Color::Clear();
  clear_has_ambient();
}
inline const ::Indriya::Core::Msgs::Color& Material::ambient() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.ambient)
  return ambient_ != NULL ? *ambient_ : *default_instance_->ambient_;
}
inline ::Indriya::Core::Msgs::Color* Material::mutable_ambient() {
  set_has_ambient();
  if (ambient_ == NULL) {
    ambient_ = new ::Indriya::Core::Msgs::Color;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.ambient)
  return ambient_;
}
inline ::Indriya::Core::Msgs::Color* Material::release_ambient() {
  clear_has_ambient();
  ::Indriya::Core::Msgs::Color* temp = ambient_;
  ambient_ = NULL;
  return temp;
}
inline void Material::set_allocated_ambient(::Indriya::Core::Msgs::Color* ambient) {
  delete ambient_;
  ambient_ = ambient;
  if (ambient) {
    set_has_ambient();
  } else {
    clear_has_ambient();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Material.ambient)
}

// optional .Indriya.Core.Msgs.Color diffuse = 5;
inline bool Material::has_diffuse() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Material::set_has_diffuse() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Material::clear_has_diffuse() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Material::clear_diffuse() {
  if (diffuse_ != NULL) diffuse_->::Indriya::Core::Msgs::Color::Clear();
  clear_has_diffuse();
}
inline const ::Indriya::Core::Msgs::Color& Material::diffuse() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.diffuse)
  return diffuse_ != NULL ? *diffuse_ : *default_instance_->diffuse_;
}
inline ::Indriya::Core::Msgs::Color* Material::mutable_diffuse() {
  set_has_diffuse();
  if (diffuse_ == NULL) {
    diffuse_ = new ::Indriya::Core::Msgs::Color;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.diffuse)
  return diffuse_;
}
inline ::Indriya::Core::Msgs::Color* Material::release_diffuse() {
  clear_has_diffuse();
  ::Indriya::Core::Msgs::Color* temp = diffuse_;
  diffuse_ = NULL;
  return temp;
}
inline void Material::set_allocated_diffuse(::Indriya::Core::Msgs::Color* diffuse) {
  delete diffuse_;
  diffuse_ = diffuse;
  if (diffuse) {
    set_has_diffuse();
  } else {
    clear_has_diffuse();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Material.diffuse)
}

// optional .Indriya.Core.Msgs.Color specular = 6;
inline bool Material::has_specular() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Material::set_has_specular() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Material::clear_has_specular() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Material::clear_specular() {
  if (specular_ != NULL) specular_->::Indriya::Core::Msgs::Color::Clear();
  clear_has_specular();
}
inline const ::Indriya::Core::Msgs::Color& Material::specular() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.specular)
  return specular_ != NULL ? *specular_ : *default_instance_->specular_;
}
inline ::Indriya::Core::Msgs::Color* Material::mutable_specular() {
  set_has_specular();
  if (specular_ == NULL) {
    specular_ = new ::Indriya::Core::Msgs::Color;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.specular)
  return specular_;
}
inline ::Indriya::Core::Msgs::Color* Material::release_specular() {
  clear_has_specular();
  ::Indriya::Core::Msgs::Color* temp = specular_;
  specular_ = NULL;
  return temp;
}
inline void Material::set_allocated_specular(::Indriya::Core::Msgs::Color* specular) {
  delete specular_;
  specular_ = specular;
  if (specular) {
    set_has_specular();
  } else {
    clear_has_specular();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Material.specular)
}

// optional .Indriya.Core.Msgs.Color emissive = 7;
inline bool Material::has_emissive() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Material::set_has_emissive() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Material::clear_has_emissive() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Material::clear_emissive() {
  if (emissive_ != NULL) emissive_->::Indriya::Core::Msgs::Color::Clear();
  clear_has_emissive();
}
inline const ::Indriya::Core::Msgs::Color& Material::emissive() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.emissive)
  return emissive_ != NULL ? *emissive_ : *default_instance_->emissive_;
}
inline ::Indriya::Core::Msgs::Color* Material::mutable_emissive() {
  set_has_emissive();
  if (emissive_ == NULL) {
    emissive_ = new ::Indriya::Core::Msgs::Color;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Material.emissive)
  return emissive_;
}
inline ::Indriya::Core::Msgs::Color* Material::release_emissive() {
  clear_has_emissive();
  ::Indriya::Core::Msgs::Color* temp = emissive_;
  emissive_ = NULL;
  return temp;
}
inline void Material::set_allocated_emissive(::Indriya::Core::Msgs::Color* emissive) {
  delete emissive_;
  emissive_ = emissive;
  if (emissive) {
    set_has_emissive();
  } else {
    clear_has_emissive();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Material.emissive)
}

// optional bool lighting = 8;
inline bool Material::has_lighting() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Material::set_has_lighting() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Material::clear_has_lighting() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Material::clear_lighting() {
  lighting_ = false;
  clear_has_lighting();
}
inline bool Material::lighting() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Material.lighting)
  return lighting_;
}
inline void Material::set_lighting(bool value) {
  set_has_lighting();
  lighting_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Material.lighting)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::Material> MaterialPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::Indriya::Core::Msgs::Material_ShaderType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Indriya::Core::Msgs::Material_ShaderType>() {
  return ::Indriya::Core::Msgs::Material_ShaderType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

typedef const boost::shared_ptr<Indriya::Core::Msgs::Material const> ConstMaterialPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_material_2eproto__INCLUDED
