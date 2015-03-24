// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: meshgeom.proto

#ifndef PROTOBUF_meshgeom_2eproto__INCLUDED
#define PROTOBUF_meshgeom_2eproto__INCLUDED

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
#include "vector3d.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace experimot {
namespace msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_meshgeom_2eproto();
void protobuf_AssignDesc_meshgeom_2eproto();
void protobuf_ShutdownFile_meshgeom_2eproto();

class MeshGeom;

// ===================================================================

class MeshGeom : public ::google::protobuf::Message {
 public:
  MeshGeom();
  virtual ~MeshGeom();

  MeshGeom(const MeshGeom& from);

  inline MeshGeom& operator=(const MeshGeom& from) {
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
  static const MeshGeom& default_instance();

  void Swap(MeshGeom* other);

  // implements Message ----------------------------------------------

  inline MeshGeom* New() const { return New(NULL); }

  MeshGeom* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MeshGeom& from);
  void MergeFrom(const MeshGeom& from);
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
  void InternalSwap(MeshGeom* other);
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

  // required string filename = 1;
  bool has_filename() const;
  void clear_filename();
  static const int kFilenameFieldNumber = 1;
  const ::std::string& filename() const;
  void set_filename(const ::std::string& value);
  void set_filename(const char* value);
  void set_filename(const char* value, size_t size);
  ::std::string* mutable_filename();
  ::std::string* release_filename();
  void set_allocated_filename(::std::string* filename);

  // optional .experimot.msgs.Vector3d scale = 2;
  bool has_scale() const;
  void clear_scale();
  static const int kScaleFieldNumber = 2;
  const ::experimot::msgs::Vector3d& scale() const;
  ::experimot::msgs::Vector3d* mutable_scale();
  ::experimot::msgs::Vector3d* release_scale();
  void set_allocated_scale(::experimot::msgs::Vector3d* scale);

  // optional string submesh = 3;
  bool has_submesh() const;
  void clear_submesh();
  static const int kSubmeshFieldNumber = 3;
  const ::std::string& submesh() const;
  void set_submesh(const ::std::string& value);
  void set_submesh(const char* value);
  void set_submesh(const char* value, size_t size);
  ::std::string* mutable_submesh();
  ::std::string* release_submesh();
  void set_allocated_submesh(::std::string* submesh);

  // optional bool center_submesh = 4;
  bool has_center_submesh() const;
  void clear_center_submesh();
  static const int kCenterSubmeshFieldNumber = 4;
  bool center_submesh() const;
  void set_center_submesh(bool value);

  // @@protoc_insertion_point(class_scope:experimot.msgs.MeshGeom)
 private:
  inline void set_has_filename();
  inline void clear_has_filename();
  inline void set_has_scale();
  inline void clear_has_scale();
  inline void set_has_submesh();
  inline void clear_has_submesh();
  inline void set_has_center_submesh();
  inline void clear_has_center_submesh();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr filename_;
  ::experimot::msgs::Vector3d* scale_;
  ::google::protobuf::internal::ArenaStringPtr submesh_;
  bool center_submesh_;
  friend void  protobuf_AddDesc_meshgeom_2eproto();
  friend void protobuf_AssignDesc_meshgeom_2eproto();
  friend void protobuf_ShutdownFile_meshgeom_2eproto();

  void InitAsDefaultInstance();
  static MeshGeom* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MeshGeom

// required string filename = 1;
inline bool MeshGeom::has_filename() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MeshGeom::set_has_filename() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MeshGeom::clear_has_filename() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MeshGeom::clear_filename() {
  filename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_filename();
}
inline const ::std::string& MeshGeom::filename() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.MeshGeom.filename)
  return filename_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MeshGeom::set_filename(const ::std::string& value) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:experimot.msgs.MeshGeom.filename)
}
inline void MeshGeom::set_filename(const char* value) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:experimot.msgs.MeshGeom.filename)
}
inline void MeshGeom::set_filename(const char* value, size_t size) {
  set_has_filename();
  filename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:experimot.msgs.MeshGeom.filename)
}
inline ::std::string* MeshGeom::mutable_filename() {
  set_has_filename();
  // @@protoc_insertion_point(field_mutable:experimot.msgs.MeshGeom.filename)
  return filename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MeshGeom::release_filename() {
  clear_has_filename();
  return filename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MeshGeom::set_allocated_filename(::std::string* filename) {
  if (filename != NULL) {
    set_has_filename();
  } else {
    clear_has_filename();
  }
  filename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), filename);
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.MeshGeom.filename)
}

// optional .experimot.msgs.Vector3d scale = 2;
inline bool MeshGeom::has_scale() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MeshGeom::set_has_scale() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MeshGeom::clear_has_scale() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MeshGeom::clear_scale() {
  if (scale_ != NULL) scale_->::experimot::msgs::Vector3d::Clear();
  clear_has_scale();
}
inline const ::experimot::msgs::Vector3d& MeshGeom::scale() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.MeshGeom.scale)
  return scale_ != NULL ? *scale_ : *default_instance_->scale_;
}
inline ::experimot::msgs::Vector3d* MeshGeom::mutable_scale() {
  set_has_scale();
  if (scale_ == NULL) {
    scale_ = new ::experimot::msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:experimot.msgs.MeshGeom.scale)
  return scale_;
}
inline ::experimot::msgs::Vector3d* MeshGeom::release_scale() {
  clear_has_scale();
  ::experimot::msgs::Vector3d* temp = scale_;
  scale_ = NULL;
  return temp;
}
inline void MeshGeom::set_allocated_scale(::experimot::msgs::Vector3d* scale) {
  delete scale_;
  scale_ = scale;
  if (scale) {
    set_has_scale();
  } else {
    clear_has_scale();
  }
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.MeshGeom.scale)
}

// optional string submesh = 3;
inline bool MeshGeom::has_submesh() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MeshGeom::set_has_submesh() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MeshGeom::clear_has_submesh() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MeshGeom::clear_submesh() {
  submesh_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_submesh();
}
inline const ::std::string& MeshGeom::submesh() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.MeshGeom.submesh)
  return submesh_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MeshGeom::set_submesh(const ::std::string& value) {
  set_has_submesh();
  submesh_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:experimot.msgs.MeshGeom.submesh)
}
inline void MeshGeom::set_submesh(const char* value) {
  set_has_submesh();
  submesh_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:experimot.msgs.MeshGeom.submesh)
}
inline void MeshGeom::set_submesh(const char* value, size_t size) {
  set_has_submesh();
  submesh_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:experimot.msgs.MeshGeom.submesh)
}
inline ::std::string* MeshGeom::mutable_submesh() {
  set_has_submesh();
  // @@protoc_insertion_point(field_mutable:experimot.msgs.MeshGeom.submesh)
  return submesh_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MeshGeom::release_submesh() {
  clear_has_submesh();
  return submesh_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MeshGeom::set_allocated_submesh(::std::string* submesh) {
  if (submesh != NULL) {
    set_has_submesh();
  } else {
    clear_has_submesh();
  }
  submesh_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), submesh);
  // @@protoc_insertion_point(field_set_allocated:experimot.msgs.MeshGeom.submesh)
}

// optional bool center_submesh = 4;
inline bool MeshGeom::has_center_submesh() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MeshGeom::set_has_center_submesh() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MeshGeom::clear_has_center_submesh() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MeshGeom::clear_center_submesh() {
  center_submesh_ = false;
  clear_has_center_submesh();
}
inline bool MeshGeom::center_submesh() const {
  // @@protoc_insertion_point(field_get:experimot.msgs.MeshGeom.center_submesh)
  return center_submesh_;
}
inline void MeshGeom::set_center_submesh(bool value) {
  set_has_center_submesh();
  center_submesh_ = value;
  // @@protoc_insertion_point(field_set:experimot.msgs.MeshGeom.center_submesh)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<experimot::msgs::MeshGeom> MeshGeomPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace experimot

typedef const boost::shared_ptr<experimot::msgs::MeshGeom const> ConstMeshGeomPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_meshgeom_2eproto__INCLUDED