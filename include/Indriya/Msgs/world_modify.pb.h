// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: world_modify.proto

#ifndef PROTOBUF_world_5fmodify_2eproto__INCLUDED
#define PROTOBUF_world_5fmodify_2eproto__INCLUDED

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
#include <google/protobuf/unknown_field_set.h>
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_world_5fmodify_2eproto();
void protobuf_AssignDesc_world_5fmodify_2eproto();
void protobuf_ShutdownFile_world_5fmodify_2eproto();

class WorldModify;

// ===================================================================

class WorldModify : public ::google::protobuf::Message {
 public:
  WorldModify();
  virtual ~WorldModify();

  WorldModify(const WorldModify& from);

  inline WorldModify& operator=(const WorldModify& from) {
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
  static const WorldModify& default_instance();

  void Swap(WorldModify* other);

  // implements Message ----------------------------------------------

  inline WorldModify* New() const { return New(NULL); }

  WorldModify* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WorldModify& from);
  void MergeFrom(const WorldModify& from);
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
  void InternalSwap(WorldModify* other);
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

  // required string world_name = 1;
  bool has_world_name() const;
  void clear_world_name();
  static const int kWorldNameFieldNumber = 1;
  const ::std::string& world_name() const;
  void set_world_name(const ::std::string& value);
  void set_world_name(const char* value);
  void set_world_name(const char* value, size_t size);
  ::std::string* mutable_world_name();
  ::std::string* release_world_name();
  void set_allocated_world_name(::std::string* world_name);

  // optional bool remove = 2;
  bool has_remove() const;
  void clear_remove();
  static const int kRemoveFieldNumber = 2;
  bool remove() const;
  void set_remove(bool value);

  // optional bool create = 3;
  bool has_create() const;
  void clear_create();
  static const int kCreateFieldNumber = 3;
  bool create() const;
  void set_create(bool value);

  // optional bool cloned = 4;
  bool has_cloned() const;
  void clear_cloned();
  static const int kClonedFieldNumber = 4;
  bool cloned() const;
  void set_cloned(bool value);

  // optional string cloned_uri = 5;
  bool has_cloned_uri() const;
  void clear_cloned_uri();
  static const int kClonedUriFieldNumber = 5;
  const ::std::string& cloned_uri() const;
  void set_cloned_uri(const ::std::string& value);
  void set_cloned_uri(const char* value);
  void set_cloned_uri(const char* value, size_t size);
  ::std::string* mutable_cloned_uri();
  ::std::string* release_cloned_uri();
  void set_allocated_cloned_uri(::std::string* cloned_uri);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.WorldModify)
 private:
  inline void set_has_world_name();
  inline void clear_has_world_name();
  inline void set_has_remove();
  inline void clear_has_remove();
  inline void set_has_create();
  inline void clear_has_create();
  inline void set_has_cloned();
  inline void clear_has_cloned();
  inline void set_has_cloned_uri();
  inline void clear_has_cloned_uri();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr world_name_;
  ::google::protobuf::internal::ArenaStringPtr cloned_uri_;
  bool remove_;
  bool create_;
  bool cloned_;
  friend void  protobuf_AddDesc_world_5fmodify_2eproto();
  friend void protobuf_AssignDesc_world_5fmodify_2eproto();
  friend void protobuf_ShutdownFile_world_5fmodify_2eproto();

  void InitAsDefaultInstance();
  static WorldModify* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WorldModify

// required string world_name = 1;
inline bool WorldModify::has_world_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldModify::set_has_world_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldModify::clear_has_world_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldModify::clear_world_name() {
  world_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_world_name();
}
inline const ::std::string& WorldModify::world_name() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WorldModify.world_name)
  return world_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WorldModify::set_world_name(const ::std::string& value) {
  set_has_world_name();
  world_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WorldModify.world_name)
}
inline void WorldModify::set_world_name(const char* value) {
  set_has_world_name();
  world_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.WorldModify.world_name)
}
inline void WorldModify::set_world_name(const char* value, size_t size) {
  set_has_world_name();
  world_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.WorldModify.world_name)
}
inline ::std::string* WorldModify::mutable_world_name() {
  set_has_world_name();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.WorldModify.world_name)
  return world_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WorldModify::release_world_name() {
  clear_has_world_name();
  return world_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WorldModify::set_allocated_world_name(::std::string* world_name) {
  if (world_name != NULL) {
    set_has_world_name();
  } else {
    clear_has_world_name();
  }
  world_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), world_name);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.WorldModify.world_name)
}

// optional bool remove = 2;
inline bool WorldModify::has_remove() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldModify::set_has_remove() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldModify::clear_has_remove() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldModify::clear_remove() {
  remove_ = false;
  clear_has_remove();
}
inline bool WorldModify::remove() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WorldModify.remove)
  return remove_;
}
inline void WorldModify::set_remove(bool value) {
  set_has_remove();
  remove_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WorldModify.remove)
}

// optional bool create = 3;
inline bool WorldModify::has_create() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldModify::set_has_create() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldModify::clear_has_create() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldModify::clear_create() {
  create_ = false;
  clear_has_create();
}
inline bool WorldModify::create() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WorldModify.create)
  return create_;
}
inline void WorldModify::set_create(bool value) {
  set_has_create();
  create_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WorldModify.create)
}

// optional bool cloned = 4;
inline bool WorldModify::has_cloned() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WorldModify::set_has_cloned() {
  _has_bits_[0] |= 0x00000008u;
}
inline void WorldModify::clear_has_cloned() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void WorldModify::clear_cloned() {
  cloned_ = false;
  clear_has_cloned();
}
inline bool WorldModify::cloned() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WorldModify.cloned)
  return cloned_;
}
inline void WorldModify::set_cloned(bool value) {
  set_has_cloned();
  cloned_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WorldModify.cloned)
}

// optional string cloned_uri = 5;
inline bool WorldModify::has_cloned_uri() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WorldModify::set_has_cloned_uri() {
  _has_bits_[0] |= 0x00000010u;
}
inline void WorldModify::clear_has_cloned_uri() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void WorldModify::clear_cloned_uri() {
  cloned_uri_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_cloned_uri();
}
inline const ::std::string& WorldModify::cloned_uri() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WorldModify.cloned_uri)
  return cloned_uri_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WorldModify::set_cloned_uri(const ::std::string& value) {
  set_has_cloned_uri();
  cloned_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.WorldModify.cloned_uri)
}
inline void WorldModify::set_cloned_uri(const char* value) {
  set_has_cloned_uri();
  cloned_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.WorldModify.cloned_uri)
}
inline void WorldModify::set_cloned_uri(const char* value, size_t size) {
  set_has_cloned_uri();
  cloned_uri_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.WorldModify.cloned_uri)
}
inline ::std::string* WorldModify::mutable_cloned_uri() {
  set_has_cloned_uri();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.WorldModify.cloned_uri)
  return cloned_uri_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* WorldModify::release_cloned_uri() {
  clear_has_cloned_uri();
  return cloned_uri_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void WorldModify::set_allocated_cloned_uri(::std::string* cloned_uri) {
  if (cloned_uri != NULL) {
    set_has_cloned_uri();
  } else {
    clear_has_cloned_uri();
  }
  cloned_uri_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cloned_uri);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.WorldModify.cloned_uri)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::WorldModify> WorldModifyPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::WorldModify const> ConstWorldModifyPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_world_5fmodify_2eproto__INCLUDED
