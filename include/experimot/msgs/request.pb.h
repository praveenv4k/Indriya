// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: request.proto

#ifndef PROTOBUF_request_2eproto__INCLUDED
#define PROTOBUF_request_2eproto__INCLUDED

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
void protobuf_AddDesc_request_2eproto();
void protobuf_AssignDesc_request_2eproto();
void protobuf_ShutdownFile_request_2eproto();

class Request;

// ===================================================================

class Request : public ::google::protobuf::Message {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
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
  static const Request& default_instance();

  void Swap(Request* other);

  // implements Message ----------------------------------------------

  inline Request* New() const { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
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
  void InternalSwap(Request* other);
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

  // required int32 id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // required string request = 2;
  bool has_request() const;
  void clear_request();
  static const int kRequestFieldNumber = 2;
  const ::std::string& request() const;
  void set_request(const ::std::string& value);
  void set_request(const char* value);
  void set_request(const char* value, size_t size);
  ::std::string* mutable_request();
  ::std::string* release_request();
  void set_allocated_request(::std::string* request);

  // optional string data = 3;
  bool has_data() const;
  void clear_data();
  static const int kDataFieldNumber = 3;
  const ::std::string& data() const;
  void set_data(const ::std::string& value);
  void set_data(const char* value);
  void set_data(const char* value, size_t size);
  ::std::string* mutable_data();
  ::std::string* release_data();
  void set_allocated_data(::std::string* data);

  // optional double dbl_data = 4;
  bool has_dbl_data() const;
  void clear_dbl_data();
  static const int kDblDataFieldNumber = 4;
  double dbl_data() const;
  void set_dbl_data(double value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Request)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_request();
  inline void clear_has_request();
  inline void set_has_data();
  inline void clear_has_data();
  inline void set_has_dbl_data();
  inline void clear_has_dbl_data();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr request_;
  ::google::protobuf::internal::ArenaStringPtr data_;
  double dbl_data_;
  ::google::protobuf::int32 id_;
  friend void  protobuf_AddDesc_request_2eproto();
  friend void protobuf_AssignDesc_request_2eproto();
  friend void protobuf_ShutdownFile_request_2eproto();

  void InitAsDefaultInstance();
  static Request* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Request

// required int32 id = 1;
inline bool Request::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Request::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Request::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Request::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Request::id() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Request.id)
  return id_;
}
inline void Request::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Request.id)
}

// required string request = 2;
inline bool Request::has_request() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Request::set_has_request() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Request::clear_has_request() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Request::clear_request() {
  request_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_request();
}
inline const ::std::string& Request::request() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Request.request)
  return request_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_request(const ::std::string& value) {
  set_has_request();
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Request.request)
}
inline void Request::set_request(const char* value) {
  set_has_request();
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Request.request)
}
inline void Request::set_request(const char* value, size_t size) {
  set_has_request();
  request_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Request.request)
}
inline ::std::string* Request::mutable_request() {
  set_has_request();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Request.request)
  return request_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_request() {
  clear_has_request();
  return request_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_request(::std::string* request) {
  if (request != NULL) {
    set_has_request();
  } else {
    clear_has_request();
  }
  request_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Request.request)
}

// optional string data = 3;
inline bool Request::has_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Request::set_has_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Request::clear_has_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Request::clear_data() {
  data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_data();
}
inline const ::std::string& Request::data() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Request.data)
  return data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_data(const ::std::string& value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Request.data)
}
inline void Request::set_data(const char* value) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Request.data)
}
inline void Request::set_data(const char* value, size_t size) {
  set_has_data();
  data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Request.data)
}
inline ::std::string* Request::mutable_data() {
  set_has_data();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Request.data)
  return data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_data() {
  clear_has_data();
  return data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_data(::std::string* data) {
  if (data != NULL) {
    set_has_data();
  } else {
    clear_has_data();
  }
  data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Request.data)
}

// optional double dbl_data = 4;
inline bool Request::has_dbl_data() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Request::set_has_dbl_data() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Request::clear_has_dbl_data() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Request::clear_dbl_data() {
  dbl_data_ = 0;
  clear_has_dbl_data();
}
inline double Request::dbl_data() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Request.dbl_data)
  return dbl_data_;
}
inline void Request::set_dbl_data(double value) {
  set_has_dbl_data();
  dbl_data_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Request.dbl_data)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::Request> RequestPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::Request const> ConstRequestPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_request_2eproto__INCLUDED
