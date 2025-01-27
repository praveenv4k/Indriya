// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: jointvaluemap.proto

#ifndef PROTOBUF_jointvaluemap_2eproto__INCLUDED
#define PROTOBUF_jointvaluemap_2eproto__INCLUDED

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
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace experimot {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_jointvaluemap_2eproto();
void protobuf_AssignDesc_jointvaluemap_2eproto();
void protobuf_ShutdownFile_jointvaluemap_2eproto();

class JointValueMap;

// ===================================================================

class JointValueMap : public ::google::protobuf::Message {
 public:
  JointValueMap();
  virtual ~JointValueMap();

  JointValueMap(const JointValueMap& from);

  inline JointValueMap& operator=(const JointValueMap& from) {
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
  static const JointValueMap& default_instance();

  void Swap(JointValueMap* other);

  // implements Message ----------------------------------------------

  inline JointValueMap* New() const { return New(NULL); }

  JointValueMap* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const JointValueMap& from);
  void MergeFrom(const JointValueMap& from);
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
  void InternalSwap(JointValueMap* other);
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

  // map<int32, double> map_field = 1;
  int map_field_size() const;
  void clear_map_field();
  static const int kMapFieldFieldNumber = 1;
  const ::google::protobuf::Map< ::google::protobuf::int32, double >&
      map_field() const;
  ::google::protobuf::Map< ::google::protobuf::int32, double >*
      mutable_map_field();

  // @@protoc_insertion_point(class_scope:experimot.msgs.JointValueMap)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::google::protobuf::int32, double,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE,
      0 >
      JointValueMap_MapFieldEntry;
  ::google::protobuf::internal::MapField<
      ::google::protobuf::int32, double,
      ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
      ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE,
      0 > map_field_;
  friend void  protobuf_AddDesc_jointvaluemap_2eproto();
  friend void protobuf_AssignDesc_jointvaluemap_2eproto();
  friend void protobuf_ShutdownFile_jointvaluemap_2eproto();

  void InitAsDefaultInstance();
  static JointValueMap* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// JointValueMap

// map<int32, double> map_field = 1;
inline int JointValueMap::map_field_size() const {
  return map_field_.size();
}
inline void JointValueMap::clear_map_field() {
  map_field_.Clear();
}
inline const ::google::protobuf::Map< ::google::protobuf::int32, double >&
JointValueMap::map_field() const {
  // @@protoc_insertion_point(field_map:experimot.msgs.JointValueMap.map_field)
  return map_field_.GetMap();
}
inline ::google::protobuf::Map< ::google::protobuf::int32, double >*
JointValueMap::mutable_map_field() {
  // @@protoc_insertion_point(field_mutable_map:experimot.msgs.JointValueMap.map_field)
  return map_field_.MutableMap();
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<experimot::msgs::JointValueMap> JointValueMapPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace experimot

typedef const boost::shared_ptr<experimot::msgs::JointValueMap const> ConstJointValueMapPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_jointvaluemap_2eproto__INCLUDED
