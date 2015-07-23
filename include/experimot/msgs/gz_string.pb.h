// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz_string.proto

#ifndef PROTOBUF_gz_5fstring_2eproto__INCLUDED
#define PROTOBUF_gz_5fstring_2eproto__INCLUDED

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
void protobuf_AddDesc_gz_5fstring_2eproto();
void protobuf_AssignDesc_gz_5fstring_2eproto();
void protobuf_ShutdownFile_gz_5fstring_2eproto();

class GzString;

// ===================================================================

class GzString : public ::google::protobuf::Message {
 public:
  GzString();
  virtual ~GzString();

  GzString(const GzString& from);

  inline GzString& operator=(const GzString& from) {
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
  static const GzString& default_instance();

  void Swap(GzString* other);

  // implements Message ----------------------------------------------

  inline GzString* New() const { return New(NULL); }

  GzString* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GzString& from);
  void MergeFrom(const GzString& from);
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
  void InternalSwap(GzString* other);
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

  // required string data = 1;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 1;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  void set_data(const char* value);
  void set_data(const char* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.GzString)
 private:
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  friend void  protobuf_AddDesc_gz_5fstring_2eproto();
  friend void protobuf_AssignDesc_gz_5fstring_2eproto();
  friend void protobuf_ShutdownFile_gz_5fstring_2eproto();

  void InitAsDefaultInstance();
  static GzString* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GzString

// required string data = 1;
inline bool GzString::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GzString::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GzString::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GzString::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data();
}
inline const ::std::string& GzString::data() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.GzString.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GzString::set_data(const ::std::string& value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.GzString.data)
}
inline void GzString::set_data(const char* value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.GzString.data)
}
inline void GzString::set_data(const char* value, size_t size) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.GzString.data)
}
inline ::std::string* GzString::mutable_data() {
  set_has_data();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.GzString.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GzString::release_data() {
  clear_has_data();
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GzString::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    set_has_data();
  } else {
    clear_has_data();
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.GzString.data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::GzString> GzStringPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::GzString const> ConstGzStringPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gz_5fstring_2eproto__INCLUDED
