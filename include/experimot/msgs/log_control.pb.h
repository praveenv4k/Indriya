// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: log_control.proto

#ifndef PROTOBUF_log_5fcontrol_2eproto__INCLUDED
#define PROTOBUF_log_5fcontrol_2eproto__INCLUDED

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
void protobuf_AddDesc_log_5fcontrol_2eproto();
void protobuf_AssignDesc_log_5fcontrol_2eproto();
void protobuf_ShutdownFile_log_5fcontrol_2eproto();

class LogControl;

// ===================================================================

class LogControl : public ::google::protobuf::Message {
 public:
  LogControl();
  virtual ~LogControl();

  LogControl(const LogControl& from);

  inline LogControl& operator=(const LogControl& from) {
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
  static const LogControl& default_instance();

  void Swap(LogControl* other);

  // implements Message ----------------------------------------------

  inline LogControl* New() const { return New(NULL); }

  LogControl* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LogControl& from);
  void MergeFrom(const LogControl& from);
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
  void InternalSwap(LogControl* other);
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

  // optional bool start = 1;
  bool has_start() const;
  void clear_start();
  static const int kStartFieldNumber = 1;
  bool start() const;
  void set_start(bool value);

  // optional bool stop = 2;
  bool has_stop() const;
  void clear_stop();
  static const int kStopFieldNumber = 2;
  bool stop() const;
  void set_stop(bool value);

  // optional bool paused = 3;
  bool has_paused() const;
  void clear_paused();
  static const int kPausedFieldNumber = 3;
  bool paused() const;
  void set_paused(bool value);

  // optional string base_path = 4;
  bool has_base_path() const;
  void clear_base_path();
  static const int kBasePathFieldNumber = 4;
  const ::std::string& base_path() const;
  void set_base_path(const ::std::string& value);
  void set_base_path(const char* value);
  void set_base_path(const char* value, size_t size);
  ::std::string* mutable_base_path();
  ::std::string* release_base_path();
  void set_allocated_base_path(::std::string* base_path);

  // optional string encoding = 5;
  bool has_encoding() const;
  void clear_encoding();
  static const int kEncodingFieldNumber = 5;
  const ::std::string& encoding() const;
  void set_encoding(const ::std::string& value);
  void set_encoding(const char* value);
  void set_encoding(const char* value, size_t size);
  ::std::string* mutable_encoding();
  ::std::string* release_encoding();
  void set_allocated_encoding(::std::string* encoding);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.LogControl)
 private:
  inline void set_has_start();
  inline void clear_has_start();
  inline void set_has_stop();
  inline void clear_has_stop();
  inline void set_has_paused();
  inline void clear_has_paused();
  inline void set_has_base_path();
  inline void clear_has_base_path();
  inline void set_has_encoding();
  inline void clear_has_encoding();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr base_path_;
  ::google::protobuf::internal::ArenaStringPtr encoding_;
  bool start_;
  bool stop_;
  bool paused_;
  friend void  protobuf_AddDesc_log_5fcontrol_2eproto();
  friend void protobuf_AssignDesc_log_5fcontrol_2eproto();
  friend void protobuf_ShutdownFile_log_5fcontrol_2eproto();

  void InitAsDefaultInstance();
  static LogControl* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LogControl

// optional bool start = 1;
inline bool LogControl::has_start() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LogControl::set_has_start() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LogControl::clear_has_start() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LogControl::clear_start() {
  start_ = false;
  clear_has_start();
}
inline bool LogControl::start() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.LogControl.start)
  return start_;
}
inline void LogControl::set_start(bool value) {
  set_has_start();
  start_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.LogControl.start)
}

// optional bool stop = 2;
inline bool LogControl::has_stop() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void LogControl::set_has_stop() {
  _has_bits_[0] |= 0x00000002u;
}
inline void LogControl::clear_has_stop() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void LogControl::clear_stop() {
  stop_ = false;
  clear_has_stop();
}
inline bool LogControl::stop() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.LogControl.stop)
  return stop_;
}
inline void LogControl::set_stop(bool value) {
  set_has_stop();
  stop_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.LogControl.stop)
}

// optional bool paused = 3;
inline bool LogControl::has_paused() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void LogControl::set_has_paused() {
  _has_bits_[0] |= 0x00000004u;
}
inline void LogControl::clear_has_paused() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void LogControl::clear_paused() {
  paused_ = false;
  clear_has_paused();
}
inline bool LogControl::paused() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.LogControl.paused)
  return paused_;
}
inline void LogControl::set_paused(bool value) {
  set_has_paused();
  paused_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.LogControl.paused)
}

// optional string base_path = 4;
inline bool LogControl::has_base_path() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void LogControl::set_has_base_path() {
  _has_bits_[0] |= 0x00000008u;
}
inline void LogControl::clear_has_base_path() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void LogControl::clear_base_path() {
  base_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_base_path();
}
inline const ::std::string& LogControl::base_path() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.LogControl.base_path)
  return base_path_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogControl::set_base_path(const ::std::string& value) {
  set_has_base_path();
  base_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.LogControl.base_path)
}
inline void LogControl::set_base_path(const char* value) {
  set_has_base_path();
  base_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.LogControl.base_path)
}
inline void LogControl::set_base_path(const char* value, size_t size) {
  set_has_base_path();
  base_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.LogControl.base_path)
}
inline ::std::string* LogControl::mutable_base_path() {
  set_has_base_path();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.LogControl.base_path)
  return base_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogControl::release_base_path() {
  clear_has_base_path();
  return base_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogControl::set_allocated_base_path(::std::string* base_path) {
  if (base_path != NULL) {
    set_has_base_path();
  } else {
    clear_has_base_path();
  }
  base_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), base_path);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.LogControl.base_path)
}

// optional string encoding = 5;
inline bool LogControl::has_encoding() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void LogControl::set_has_encoding() {
  _has_bits_[0] |= 0x00000010u;
}
inline void LogControl::clear_has_encoding() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void LogControl::clear_encoding() {
  encoding_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_encoding();
}
inline const ::std::string& LogControl::encoding() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.LogControl.encoding)
  return encoding_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogControl::set_encoding(const ::std::string& value) {
  set_has_encoding();
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.LogControl.encoding)
}
inline void LogControl::set_encoding(const char* value) {
  set_has_encoding();
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.LogControl.encoding)
}
inline void LogControl::set_encoding(const char* value, size_t size) {
  set_has_encoding();
  encoding_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.LogControl.encoding)
}
inline ::std::string* LogControl::mutable_encoding() {
  set_has_encoding();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.LogControl.encoding)
  return encoding_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LogControl::release_encoding() {
  clear_has_encoding();
  return encoding_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LogControl::set_allocated_encoding(::std::string* encoding) {
  if (encoding != NULL) {
    set_has_encoding();
  } else {
    clear_has_encoding();
  }
  encoding_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encoding);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.LogControl.encoding)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::LogControl> LogControlPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::LogControl const> ConstLogControlPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_log_5fcontrol_2eproto__INCLUDED
