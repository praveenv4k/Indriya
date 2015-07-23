// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose_stamped.proto

#ifndef PROTOBUF_pose_5fstamped_2eproto__INCLUDED
#define PROTOBUF_pose_5fstamped_2eproto__INCLUDED

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
#include "time.pb.h"
#include "pose.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_pose_5fstamped_2eproto();
void protobuf_AssignDesc_pose_5fstamped_2eproto();
void protobuf_ShutdownFile_pose_5fstamped_2eproto();

class PoseStamped;

// ===================================================================

class PoseStamped : public ::google::protobuf::Message {
 public:
  PoseStamped();
  virtual ~PoseStamped();

  PoseStamped(const PoseStamped& from);

  inline PoseStamped& operator=(const PoseStamped& from) {
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
  static const PoseStamped& default_instance();

  void Swap(PoseStamped* other);

  // implements Message ----------------------------------------------

  inline PoseStamped* New() const { return New(NULL); }

  PoseStamped* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PoseStamped& from);
  void MergeFrom(const PoseStamped& from);
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
  void InternalSwap(PoseStamped* other);
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

  // required .Indriya.Core.Msgs.Time time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  const ::Indriya::Core::Msgs::Time& time() const;
  ::Indriya::Core::Msgs::Time* mutable_time();
  ::Indriya::Core::Msgs::Time* release_time();
  void set_allocated_time(::Indriya::Core::Msgs::Time* time);

  // required .Indriya.Core.Msgs.Pose pose = 2;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 2;
  const ::Indriya::Core::Msgs::Pose& pose() const;
  ::Indriya::Core::Msgs::Pose* mutable_pose();
  ::Indriya::Core::Msgs::Pose* release_pose();
  void set_allocated_pose(::Indriya::Core::Msgs::Pose* pose);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.PoseStamped)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_pose();
  inline void clear_has_pose();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::Indriya::Core::Msgs::Time* time_;
  ::Indriya::Core::Msgs::Pose* pose_;
  friend void  protobuf_AddDesc_pose_5fstamped_2eproto();
  friend void protobuf_AssignDesc_pose_5fstamped_2eproto();
  friend void protobuf_ShutdownFile_pose_5fstamped_2eproto();

  void InitAsDefaultInstance();
  static PoseStamped* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PoseStamped

// required .Indriya.Core.Msgs.Time time = 1;
inline bool PoseStamped::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PoseStamped::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PoseStamped::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PoseStamped::clear_time() {
  if (time_ != NULL) time_->::Indriya::Core::Msgs::Time::Clear();
  clear_has_time();
}
inline const ::Indriya::Core::Msgs::Time& PoseStamped::time() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.PoseStamped.time)
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::Indriya::Core::Msgs::Time* PoseStamped::mutable_time() {
  set_has_time();
  if (time_ == NULL) {
    time_ = new ::Indriya::Core::Msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.PoseStamped.time)
  return time_;
}
inline ::Indriya::Core::Msgs::Time* PoseStamped::release_time() {
  clear_has_time();
  ::Indriya::Core::Msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
inline void PoseStamped::set_allocated_time(::Indriya::Core::Msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.PoseStamped.time)
}

// required .Indriya.Core.Msgs.Pose pose = 2;
inline bool PoseStamped::has_pose() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PoseStamped::set_has_pose() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PoseStamped::clear_has_pose() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PoseStamped::clear_pose() {
  if (pose_ != NULL) pose_->::Indriya::Core::Msgs::Pose::Clear();
  clear_has_pose();
}
inline const ::Indriya::Core::Msgs::Pose& PoseStamped::pose() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.PoseStamped.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::Indriya::Core::Msgs::Pose* PoseStamped::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) {
    pose_ = new ::Indriya::Core::Msgs::Pose;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.PoseStamped.pose)
  return pose_;
}
inline ::Indriya::Core::Msgs::Pose* PoseStamped::release_pose() {
  clear_has_pose();
  ::Indriya::Core::Msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void PoseStamped::set_allocated_pose(::Indriya::Core::Msgs::Pose* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.PoseStamped.pose)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::PoseStamped> PoseStampedPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::PoseStamped const> ConstPoseStampedPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pose_5fstamped_2eproto__INCLUDED
