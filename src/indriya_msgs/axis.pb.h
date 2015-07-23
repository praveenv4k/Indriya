// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: axis.proto

#ifndef PROTOBUF_axis_2eproto__INCLUDED
#define PROTOBUF_axis_2eproto__INCLUDED

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

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_axis_2eproto();
void protobuf_AssignDesc_axis_2eproto();
void protobuf_ShutdownFile_axis_2eproto();

class Axis;

// ===================================================================

class Axis : public ::google::protobuf::Message {
 public:
  Axis();
  virtual ~Axis();

  Axis(const Axis& from);

  inline Axis& operator=(const Axis& from) {
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
  static const Axis& default_instance();

  void Swap(Axis* other);

  // implements Message ----------------------------------------------

  inline Axis* New() const { return New(NULL); }

  Axis* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Axis& from);
  void MergeFrom(const Axis& from);
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
  void InternalSwap(Axis* other);
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

  // required .Indriya.Core.Msgs.Vector3d xyz = 1;
  bool has_xyz() const;
  void clear_xyz();
  static const int kXyzFieldNumber = 1;
  const ::Indriya::Core::Msgs::Vector3d& xyz() const;
  ::Indriya::Core::Msgs::Vector3d* mutable_xyz();
  ::Indriya::Core::Msgs::Vector3d* release_xyz();
  void set_allocated_xyz(::Indriya::Core::Msgs::Vector3d* xyz);

  // required double limit_lower = 2;
  bool has_limit_lower() const;
  void clear_limit_lower();
  static const int kLimitLowerFieldNumber = 2;
  double limit_lower() const;
  void set_limit_lower(double value);

  // required double limit_upper = 3;
  bool has_limit_upper() const;
  void clear_limit_upper();
  static const int kLimitUpperFieldNumber = 3;
  double limit_upper() const;
  void set_limit_upper(double value);

  // required double limit_effort = 4;
  bool has_limit_effort() const;
  void clear_limit_effort();
  static const int kLimitEffortFieldNumber = 4;
  double limit_effort() const;
  void set_limit_effort(double value);

  // required double limit_velocity = 5;
  bool has_limit_velocity() const;
  void clear_limit_velocity();
  static const int kLimitVelocityFieldNumber = 5;
  double limit_velocity() const;
  void set_limit_velocity(double value);

  // required double damping = 6;
  bool has_damping() const;
  void clear_damping();
  static const int kDampingFieldNumber = 6;
  double damping() const;
  void set_damping(double value);

  // required double friction = 7;
  bool has_friction() const;
  void clear_friction();
  static const int kFrictionFieldNumber = 7;
  double friction() const;
  void set_friction(double value);

  // required bool use_parent_model_frame = 8;
  bool has_use_parent_model_frame() const;
  void clear_use_parent_model_frame();
  static const int kUseParentModelFrameFieldNumber = 8;
  bool use_parent_model_frame() const;
  void set_use_parent_model_frame(bool value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Axis)
 private:
  inline void set_has_xyz();
  inline void clear_has_xyz();
  inline void set_has_limit_lower();
  inline void clear_has_limit_lower();
  inline void set_has_limit_upper();
  inline void clear_has_limit_upper();
  inline void set_has_limit_effort();
  inline void clear_has_limit_effort();
  inline void set_has_limit_velocity();
  inline void clear_has_limit_velocity();
  inline void set_has_damping();
  inline void clear_has_damping();
  inline void set_has_friction();
  inline void clear_has_friction();
  inline void set_has_use_parent_model_frame();
  inline void clear_has_use_parent_model_frame();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Indriya::Core::Msgs::Vector3d* xyz_;
  double limit_lower_;
  double limit_upper_;
  double limit_effort_;
  double limit_velocity_;
  double damping_;
  double friction_;
  bool use_parent_model_frame_;
  friend void  protobuf_AddDesc_axis_2eproto();
  friend void protobuf_AssignDesc_axis_2eproto();
  friend void protobuf_ShutdownFile_axis_2eproto();

  void InitAsDefaultInstance();
  static Axis* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Axis

// required .Indriya.Core.Msgs.Vector3d xyz = 1;
inline bool Axis::has_xyz() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Axis::set_has_xyz() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Axis::clear_has_xyz() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Axis::clear_xyz() {
  if (xyz_ != NULL) xyz_->::Indriya::Core::Msgs::Vector3d::Clear();
  clear_has_xyz();
}
inline const ::Indriya::Core::Msgs::Vector3d& Axis::xyz() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.xyz)
  return xyz_ != NULL ? *xyz_ : *default_instance_->xyz_;
}
inline ::Indriya::Core::Msgs::Vector3d* Axis::mutable_xyz() {
  set_has_xyz();
  if (xyz_ == NULL) {
    xyz_ = new ::Indriya::Core::Msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Axis.xyz)
  return xyz_;
}
inline ::Indriya::Core::Msgs::Vector3d* Axis::release_xyz() {
  clear_has_xyz();
  ::Indriya::Core::Msgs::Vector3d* temp = xyz_;
  xyz_ = NULL;
  return temp;
}
inline void Axis::set_allocated_xyz(::Indriya::Core::Msgs::Vector3d* xyz) {
  delete xyz_;
  xyz_ = xyz;
  if (xyz) {
    set_has_xyz();
  } else {
    clear_has_xyz();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Axis.xyz)
}

// required double limit_lower = 2;
inline bool Axis::has_limit_lower() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Axis::set_has_limit_lower() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Axis::clear_has_limit_lower() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Axis::clear_limit_lower() {
  limit_lower_ = 0;
  clear_has_limit_lower();
}
inline double Axis::limit_lower() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.limit_lower)
  return limit_lower_;
}
inline void Axis::set_limit_lower(double value) {
  set_has_limit_lower();
  limit_lower_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Axis.limit_lower)
}

// required double limit_upper = 3;
inline bool Axis::has_limit_upper() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Axis::set_has_limit_upper() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Axis::clear_has_limit_upper() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Axis::clear_limit_upper() {
  limit_upper_ = 0;
  clear_has_limit_upper();
}
inline double Axis::limit_upper() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.limit_upper)
  return limit_upper_;
}
inline void Axis::set_limit_upper(double value) {
  set_has_limit_upper();
  limit_upper_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Axis.limit_upper)
}

// required double limit_effort = 4;
inline bool Axis::has_limit_effort() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Axis::set_has_limit_effort() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Axis::clear_has_limit_effort() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Axis::clear_limit_effort() {
  limit_effort_ = 0;
  clear_has_limit_effort();
}
inline double Axis::limit_effort() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.limit_effort)
  return limit_effort_;
}
inline void Axis::set_limit_effort(double value) {
  set_has_limit_effort();
  limit_effort_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Axis.limit_effort)
}

// required double limit_velocity = 5;
inline bool Axis::has_limit_velocity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Axis::set_has_limit_velocity() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Axis::clear_has_limit_velocity() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Axis::clear_limit_velocity() {
  limit_velocity_ = 0;
  clear_has_limit_velocity();
}
inline double Axis::limit_velocity() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.limit_velocity)
  return limit_velocity_;
}
inline void Axis::set_limit_velocity(double value) {
  set_has_limit_velocity();
  limit_velocity_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Axis.limit_velocity)
}

// required double damping = 6;
inline bool Axis::has_damping() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void Axis::set_has_damping() {
  _has_bits_[0] |= 0x00000020u;
}
inline void Axis::clear_has_damping() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void Axis::clear_damping() {
  damping_ = 0;
  clear_has_damping();
}
inline double Axis::damping() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.damping)
  return damping_;
}
inline void Axis::set_damping(double value) {
  set_has_damping();
  damping_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Axis.damping)
}

// required double friction = 7;
inline bool Axis::has_friction() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Axis::set_has_friction() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Axis::clear_has_friction() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Axis::clear_friction() {
  friction_ = 0;
  clear_has_friction();
}
inline double Axis::friction() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.friction)
  return friction_;
}
inline void Axis::set_friction(double value) {
  set_has_friction();
  friction_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Axis.friction)
}

// required bool use_parent_model_frame = 8;
inline bool Axis::has_use_parent_model_frame() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void Axis::set_has_use_parent_model_frame() {
  _has_bits_[0] |= 0x00000080u;
}
inline void Axis::clear_has_use_parent_model_frame() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void Axis::clear_use_parent_model_frame() {
  use_parent_model_frame_ = false;
  clear_has_use_parent_model_frame();
}
inline bool Axis::use_parent_model_frame() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Axis.use_parent_model_frame)
  return use_parent_model_frame_;
}
inline void Axis::set_use_parent_model_frame(bool value) {
  set_has_use_parent_model_frame();
  use_parent_model_frame_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Axis.use_parent_model_frame)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::Axis> AxisPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::Axis const> ConstAxisPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_axis_2eproto__INCLUDED
