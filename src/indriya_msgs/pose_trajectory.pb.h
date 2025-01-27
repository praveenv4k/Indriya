// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose_trajectory.proto

#ifndef PROTOBUF_pose_5ftrajectory_2eproto__INCLUDED
#define PROTOBUF_pose_5ftrajectory_2eproto__INCLUDED

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
#include "pose_stamped.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_pose_5ftrajectory_2eproto();
void protobuf_AssignDesc_pose_5ftrajectory_2eproto();
void protobuf_ShutdownFile_pose_5ftrajectory_2eproto();

class PoseTrajectory;

// ===================================================================

class PoseTrajectory : public ::google::protobuf::Message {
 public:
  PoseTrajectory();
  virtual ~PoseTrajectory();

  PoseTrajectory(const PoseTrajectory& from);

  inline PoseTrajectory& operator=(const PoseTrajectory& from) {
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
  static const PoseTrajectory& default_instance();

  void Swap(PoseTrajectory* other);

  // implements Message ----------------------------------------------

  inline PoseTrajectory* New() const { return New(NULL); }

  PoseTrajectory* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PoseTrajectory& from);
  void MergeFrom(const PoseTrajectory& from);
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
  void InternalSwap(PoseTrajectory* other);
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

  // optional string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional uint32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::uint32 id() const;
  void set_id(::google::protobuf::uint32 value);

  // repeated .Indriya.Core.Msgs.PoseStamped pose_stamped = 3;
  int pose_stamped_size() const;
  void clear_pose_stamped();
  static const int kPoseStampedFieldNumber = 3;
  const ::Indriya::Core::Msgs::PoseStamped& pose_stamped(int index) const;
  ::Indriya::Core::Msgs::PoseStamped* mutable_pose_stamped(int index);
  ::Indriya::Core::Msgs::PoseStamped* add_pose_stamped();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::PoseStamped >&
      pose_stamped() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::PoseStamped >*
      mutable_pose_stamped();

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.PoseTrajectory)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::PoseStamped > pose_stamped_;
  ::google::protobuf::uint32 id_;
  friend void  protobuf_AddDesc_pose_5ftrajectory_2eproto();
  friend void protobuf_AssignDesc_pose_5ftrajectory_2eproto();
  friend void protobuf_ShutdownFile_pose_5ftrajectory_2eproto();

  void InitAsDefaultInstance();
  static PoseTrajectory* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PoseTrajectory

// optional string name = 1;
inline bool PoseTrajectory::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PoseTrajectory::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PoseTrajectory::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PoseTrajectory::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& PoseTrajectory::name() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.PoseTrajectory.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PoseTrajectory::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.PoseTrajectory.name)
}
inline void PoseTrajectory::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.PoseTrajectory.name)
}
inline void PoseTrajectory::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.PoseTrajectory.name)
}
inline ::std::string* PoseTrajectory::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.PoseTrajectory.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PoseTrajectory::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PoseTrajectory::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.PoseTrajectory.name)
}

// optional uint32 id = 2;
inline bool PoseTrajectory::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PoseTrajectory::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PoseTrajectory::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PoseTrajectory::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 PoseTrajectory::id() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.PoseTrajectory.id)
  return id_;
}
inline void PoseTrajectory::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.PoseTrajectory.id)
}

// repeated .Indriya.Core.Msgs.PoseStamped pose_stamped = 3;
inline int PoseTrajectory::pose_stamped_size() const {
  return pose_stamped_.size();
}
inline void PoseTrajectory::clear_pose_stamped() {
  pose_stamped_.Clear();
}
inline const ::Indriya::Core::Msgs::PoseStamped& PoseTrajectory::pose_stamped(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_.Get(index);
}
inline ::Indriya::Core::Msgs::PoseStamped* PoseTrajectory::mutable_pose_stamped(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_.Mutable(index);
}
inline ::Indriya::Core::Msgs::PoseStamped* PoseTrajectory::add_pose_stamped() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::PoseStamped >&
PoseTrajectory::pose_stamped() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.PoseTrajectory.pose_stamped)
  return pose_stamped_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::PoseStamped >*
PoseTrajectory::mutable_pose_stamped() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.PoseTrajectory.pose_stamped)
  return &pose_stamped_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::PoseTrajectory> PoseTrajectoryPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::PoseTrajectory const> ConstPoseTrajectoryPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pose_5ftrajectory_2eproto__INCLUDED
