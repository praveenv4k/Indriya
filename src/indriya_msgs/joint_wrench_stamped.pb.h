// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: joint_wrench_stamped.proto

#ifndef PROTOBUF_joint_5fwrench_5fstamped_2eproto__INCLUDED
#define PROTOBUF_joint_5fwrench_5fstamped_2eproto__INCLUDED

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
#include "joint_wrench.pb.h"
#include "time.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_joint_5fwrench_5fstamped_2eproto();
void protobuf_AssignDesc_joint_5fwrench_5fstamped_2eproto();
void protobuf_ShutdownFile_joint_5fwrench_5fstamped_2eproto();

class ForceTorque;

// ===================================================================

class ForceTorque : public ::google::protobuf::Message {
 public:
  ForceTorque();
  virtual ~ForceTorque();

  ForceTorque(const ForceTorque& from);

  inline ForceTorque& operator=(const ForceTorque& from) {
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
  static const ForceTorque& default_instance();

  void Swap(ForceTorque* other);

  // implements Message ----------------------------------------------

  inline ForceTorque* New() const { return New(NULL); }

  ForceTorque* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ForceTorque& from);
  void MergeFrom(const ForceTorque& from);
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
  void InternalSwap(ForceTorque* other);
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

  // repeated .Indriya.Core.Msgs.JointWrench wrench = 1;
  int wrench_size() const;
  void clear_wrench();
  static const int kWrenchFieldNumber = 1;
  const ::Indriya::Core::Msgs::JointWrench& wrench(int index) const;
  ::Indriya::Core::Msgs::JointWrench* mutable_wrench(int index);
  ::Indriya::Core::Msgs::JointWrench* add_wrench();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::JointWrench >&
      wrench() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::JointWrench >*
      mutable_wrench();

  // required .Indriya.Core.Msgs.Time time = 2;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 2;
  const ::Indriya::Core::Msgs::Time& time() const;
  ::Indriya::Core::Msgs::Time* mutable_time();
  ::Indriya::Core::Msgs::Time* release_time();
  void set_allocated_time(::Indriya::Core::Msgs::Time* time);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.ForceTorque)
 private:
  inline void set_has_time();
  inline void clear_has_time();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::JointWrench > wrench_;
  ::Indriya::Core::Msgs::Time* time_;
  friend void  protobuf_AddDesc_joint_5fwrench_5fstamped_2eproto();
  friend void protobuf_AssignDesc_joint_5fwrench_5fstamped_2eproto();
  friend void protobuf_ShutdownFile_joint_5fwrench_5fstamped_2eproto();

  void InitAsDefaultInstance();
  static ForceTorque* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ForceTorque

// repeated .Indriya.Core.Msgs.JointWrench wrench = 1;
inline int ForceTorque::wrench_size() const {
  return wrench_.size();
}
inline void ForceTorque::clear_wrench() {
  wrench_.Clear();
}
inline const ::Indriya::Core::Msgs::JointWrench& ForceTorque::wrench(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.ForceTorque.wrench)
  return wrench_.Get(index);
}
inline ::Indriya::Core::Msgs::JointWrench* ForceTorque::mutable_wrench(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.ForceTorque.wrench)
  return wrench_.Mutable(index);
}
inline ::Indriya::Core::Msgs::JointWrench* ForceTorque::add_wrench() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.ForceTorque.wrench)
  return wrench_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::JointWrench >&
ForceTorque::wrench() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.ForceTorque.wrench)
  return wrench_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::JointWrench >*
ForceTorque::mutable_wrench() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.ForceTorque.wrench)
  return &wrench_;
}

// required .Indriya.Core.Msgs.Time time = 2;
inline bool ForceTorque::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ForceTorque::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ForceTorque::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ForceTorque::clear_time() {
  if (time_ != NULL) time_->::Indriya::Core::Msgs::Time::Clear();
  clear_has_time();
}
inline const ::Indriya::Core::Msgs::Time& ForceTorque::time() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.ForceTorque.time)
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::Indriya::Core::Msgs::Time* ForceTorque::mutable_time() {
  set_has_time();
  if (time_ == NULL) {
    time_ = new ::Indriya::Core::Msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.ForceTorque.time)
  return time_;
}
inline ::Indriya::Core::Msgs::Time* ForceTorque::release_time() {
  clear_has_time();
  ::Indriya::Core::Msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
inline void ForceTorque::set_allocated_time(::Indriya::Core::Msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.ForceTorque.time)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::ForceTorque> ForceTorquePtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::ForceTorque const> ConstForceTorquePtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_joint_5fwrench_5fstamped_2eproto__INCLUDED