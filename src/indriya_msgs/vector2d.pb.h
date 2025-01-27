// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vector2d.proto

#ifndef PROTOBUF_vector2d_2eproto__INCLUDED
#define PROTOBUF_vector2d_2eproto__INCLUDED

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
void protobuf_AddDesc_vector2d_2eproto();
void protobuf_AssignDesc_vector2d_2eproto();
void protobuf_ShutdownFile_vector2d_2eproto();

class Vector2d;

// ===================================================================

class Vector2d : public ::google::protobuf::Message {
 public:
  Vector2d();
  virtual ~Vector2d();

  Vector2d(const Vector2d& from);

  inline Vector2d& operator=(const Vector2d& from) {
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
  static const Vector2d& default_instance();

  void Swap(Vector2d* other);

  // implements Message ----------------------------------------------

  inline Vector2d* New() const { return New(NULL); }

  Vector2d* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vector2d& from);
  void MergeFrom(const Vector2d& from);
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
  void InternalSwap(Vector2d* other);
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

  // required double x = 1;
  bool has_x() const;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // required double y = 2;
  bool has_y() const;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Vector2d)
 private:
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double x_;
  double y_;
  friend void  protobuf_AddDesc_vector2d_2eproto();
  friend void protobuf_AssignDesc_vector2d_2eproto();
  friend void protobuf_ShutdownFile_vector2d_2eproto();

  void InitAsDefaultInstance();
  static Vector2d* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Vector2d

// required double x = 1;
inline bool Vector2d::has_x() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Vector2d::set_has_x() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Vector2d::clear_has_x() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Vector2d::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline double Vector2d::x() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Vector2d.x)
  return x_;
}
inline void Vector2d::set_x(double value) {
  set_has_x();
  x_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Vector2d.x)
}

// required double y = 2;
inline bool Vector2d::has_y() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Vector2d::set_has_y() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Vector2d::clear_has_y() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Vector2d::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline double Vector2d::y() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Vector2d.y)
  return y_;
}
inline void Vector2d::set_y(double value) {
  set_has_y();
  y_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Vector2d.y)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::Vector2d> Vector2dPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::Vector2d const> ConstVector2dPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_vector2d_2eproto__INCLUDED
