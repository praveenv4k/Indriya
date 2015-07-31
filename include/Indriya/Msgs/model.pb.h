// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: model.proto

#ifndef PROTOBUF_model_2eproto__INCLUDED
#define PROTOBUF_model_2eproto__INCLUDED

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
#include "joint.pb.h"
#include "link.pb.h"
#include "pose.pb.h"
#include "visual.pb.h"
#include "vector3d.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_model_2eproto();
void protobuf_AssignDesc_model_2eproto();
void protobuf_ShutdownFile_model_2eproto();

class Model;

// ===================================================================

class Model : public ::google::protobuf::Message {
 public:
  Model();
  virtual ~Model();

  Model(const Model& from);

  inline Model& operator=(const Model& from) {
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
  static const Model& default_instance();

  void Swap(Model* other);

  // implements Message ----------------------------------------------

  inline Model* New() const { return New(NULL); }

  Model* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Model& from);
  void MergeFrom(const Model& from);
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
  void InternalSwap(Model* other);
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

  // required string name = 1;
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

  // optional bool is_static = 3;
  bool has_is_static() const;
  void clear_is_static();
  static const int kIsStaticFieldNumber = 3;
  bool is_static() const;
  void set_is_static(bool value);

  // optional .Indriya.Core.Msgs.Pose pose = 4;
  bool has_pose() const;
  void clear_pose();
  static const int kPoseFieldNumber = 4;
  const ::Indriya::Core::Msgs::Pose& pose() const;
  ::Indriya::Core::Msgs::Pose* mutable_pose();
  ::Indriya::Core::Msgs::Pose* release_pose();
  void set_allocated_pose(::Indriya::Core::Msgs::Pose* pose);

  // repeated .Indriya.Core.Msgs.Joint joint = 5;
  int joint_size() const;
  void clear_joint();
  static const int kJointFieldNumber = 5;
  const ::Indriya::Core::Msgs::Joint& joint(int index) const;
  ::Indriya::Core::Msgs::Joint* mutable_joint(int index);
  ::Indriya::Core::Msgs::Joint* add_joint();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Joint >&
      joint() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Joint >*
      mutable_joint();

  // repeated .Indriya.Core.Msgs.Link link = 6;
  int link_size() const;
  void clear_link();
  static const int kLinkFieldNumber = 6;
  const ::Indriya::Core::Msgs::Link& link(int index) const;
  ::Indriya::Core::Msgs::Link* mutable_link(int index);
  ::Indriya::Core::Msgs::Link* add_link();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Link >&
      link() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Link >*
      mutable_link();

  // optional bool deleted = 7;
  bool has_deleted() const;
  void clear_deleted();
  static const int kDeletedFieldNumber = 7;
  bool deleted() const;
  void set_deleted(bool value);

  // repeated .Indriya.Core.Msgs.Visual visual = 8;
  int visual_size() const;
  void clear_visual();
  static const int kVisualFieldNumber = 8;
  const ::Indriya::Core::Msgs::Visual& visual(int index) const;
  ::Indriya::Core::Msgs::Visual* mutable_visual(int index);
  ::Indriya::Core::Msgs::Visual* add_visual();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >&
      visual() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >*
      mutable_visual();

  // optional .Indriya.Core.Msgs.Vector3d scale = 9;
  bool has_scale() const;
  void clear_scale();
  static const int kScaleFieldNumber = 9;
  const ::Indriya::Core::Msgs::Vector3d& scale() const;
  ::Indriya::Core::Msgs::Vector3d* mutable_scale();
  ::Indriya::Core::Msgs::Vector3d* release_scale();
  void set_allocated_scale(::Indriya::Core::Msgs::Vector3d* scale);

  // optional bool self_collide = 10;
  bool has_self_collide() const;
  void clear_self_collide();
  static const int kSelfCollideFieldNumber = 10;
  bool self_collide() const;
  void set_self_collide(bool value);

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.Model)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_is_static();
  inline void clear_has_is_static();
  inline void set_has_pose();
  inline void clear_has_pose();
  inline void set_has_deleted();
  inline void clear_has_deleted();
  inline void set_has_scale();
  inline void clear_has_scale();
  inline void set_has_self_collide();
  inline void clear_has_self_collide();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::Indriya::Core::Msgs::Pose* pose_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Joint > joint_;
  ::google::protobuf::uint32 id_;
  bool is_static_;
  bool deleted_;
  bool self_collide_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Link > link_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual > visual_;
  ::Indriya::Core::Msgs::Vector3d* scale_;
  friend void  protobuf_AddDesc_model_2eproto();
  friend void protobuf_AssignDesc_model_2eproto();
  friend void protobuf_ShutdownFile_model_2eproto();

  void InitAsDefaultInstance();
  static Model* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Model

// required string name = 1;
inline bool Model::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Model::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Model::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Model::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Model::name() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Model::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Model.name)
}
inline void Model::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Indriya.Core.Msgs.Model.name)
}
inline void Model::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Indriya.Core.Msgs.Model.name)
}
inline ::std::string* Model::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Model.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Model::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Model::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Model.name)
}

// optional uint32 id = 2;
inline bool Model::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Model::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Model::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Model::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Model::id() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.id)
  return id_;
}
inline void Model::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Model.id)
}

// optional bool is_static = 3;
inline bool Model::has_is_static() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Model::set_has_is_static() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Model::clear_has_is_static() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Model::clear_is_static() {
  is_static_ = false;
  clear_has_is_static();
}
inline bool Model::is_static() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.is_static)
  return is_static_;
}
inline void Model::set_is_static(bool value) {
  set_has_is_static();
  is_static_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Model.is_static)
}

// optional .Indriya.Core.Msgs.Pose pose = 4;
inline bool Model::has_pose() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Model::set_has_pose() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Model::clear_has_pose() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Model::clear_pose() {
  if (pose_ != NULL) pose_->::Indriya::Core::Msgs::Pose::Clear();
  clear_has_pose();
}
inline const ::Indriya::Core::Msgs::Pose& Model::pose() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.pose)
  return pose_ != NULL ? *pose_ : *default_instance_->pose_;
}
inline ::Indriya::Core::Msgs::Pose* Model::mutable_pose() {
  set_has_pose();
  if (pose_ == NULL) {
    pose_ = new ::Indriya::Core::Msgs::Pose;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Model.pose)
  return pose_;
}
inline ::Indriya::Core::Msgs::Pose* Model::release_pose() {
  clear_has_pose();
  ::Indriya::Core::Msgs::Pose* temp = pose_;
  pose_ = NULL;
  return temp;
}
inline void Model::set_allocated_pose(::Indriya::Core::Msgs::Pose* pose) {
  delete pose_;
  pose_ = pose;
  if (pose) {
    set_has_pose();
  } else {
    clear_has_pose();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Model.pose)
}

// repeated .Indriya.Core.Msgs.Joint joint = 5;
inline int Model::joint_size() const {
  return joint_.size();
}
inline void Model::clear_joint() {
  joint_.Clear();
}
inline const ::Indriya::Core::Msgs::Joint& Model::joint(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.joint)
  return joint_.Get(index);
}
inline ::Indriya::Core::Msgs::Joint* Model::mutable_joint(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Model.joint)
  return joint_.Mutable(index);
}
inline ::Indriya::Core::Msgs::Joint* Model::add_joint() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Model.joint)
  return joint_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Joint >&
Model::joint() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Model.joint)
  return joint_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Joint >*
Model::mutable_joint() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Model.joint)
  return &joint_;
}

// repeated .Indriya.Core.Msgs.Link link = 6;
inline int Model::link_size() const {
  return link_.size();
}
inline void Model::clear_link() {
  link_.Clear();
}
inline const ::Indriya::Core::Msgs::Link& Model::link(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.link)
  return link_.Get(index);
}
inline ::Indriya::Core::Msgs::Link* Model::mutable_link(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Model.link)
  return link_.Mutable(index);
}
inline ::Indriya::Core::Msgs::Link* Model::add_link() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Model.link)
  return link_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Link >&
Model::link() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Model.link)
  return link_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Link >*
Model::mutable_link() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Model.link)
  return &link_;
}

// optional bool deleted = 7;
inline bool Model::has_deleted() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void Model::set_has_deleted() {
  _has_bits_[0] |= 0x00000040u;
}
inline void Model::clear_has_deleted() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void Model::clear_deleted() {
  deleted_ = false;
  clear_has_deleted();
}
inline bool Model::deleted() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.deleted)
  return deleted_;
}
inline void Model::set_deleted(bool value) {
  set_has_deleted();
  deleted_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Model.deleted)
}

// repeated .Indriya.Core.Msgs.Visual visual = 8;
inline int Model::visual_size() const {
  return visual_.size();
}
inline void Model::clear_visual() {
  visual_.Clear();
}
inline const ::Indriya::Core::Msgs::Visual& Model::visual(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.visual)
  return visual_.Get(index);
}
inline ::Indriya::Core::Msgs::Visual* Model::mutable_visual(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Model.visual)
  return visual_.Mutable(index);
}
inline ::Indriya::Core::Msgs::Visual* Model::add_visual() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.Model.visual)
  return visual_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >&
Model::visual() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.Model.visual)
  return visual_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::Visual >*
Model::mutable_visual() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.Model.visual)
  return &visual_;
}

// optional .Indriya.Core.Msgs.Vector3d scale = 9;
inline bool Model::has_scale() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void Model::set_has_scale() {
  _has_bits_[0] |= 0x00000100u;
}
inline void Model::clear_has_scale() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void Model::clear_scale() {
  if (scale_ != NULL) scale_->::Indriya::Core::Msgs::Vector3d::Clear();
  clear_has_scale();
}
inline const ::Indriya::Core::Msgs::Vector3d& Model::scale() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.scale)
  return scale_ != NULL ? *scale_ : *default_instance_->scale_;
}
inline ::Indriya::Core::Msgs::Vector3d* Model::mutable_scale() {
  set_has_scale();
  if (scale_ == NULL) {
    scale_ = new ::Indriya::Core::Msgs::Vector3d;
  }
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.Model.scale)
  return scale_;
}
inline ::Indriya::Core::Msgs::Vector3d* Model::release_scale() {
  clear_has_scale();
  ::Indriya::Core::Msgs::Vector3d* temp = scale_;
  scale_ = NULL;
  return temp;
}
inline void Model::set_allocated_scale(::Indriya::Core::Msgs::Vector3d* scale) {
  delete scale_;
  scale_ = scale;
  if (scale) {
    set_has_scale();
  } else {
    clear_has_scale();
  }
  // @@protoc_insertion_point(field_set_allocated:Indriya.Core.Msgs.Model.scale)
}

// optional bool self_collide = 10;
inline bool Model::has_self_collide() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void Model::set_has_self_collide() {
  _has_bits_[0] |= 0x00000200u;
}
inline void Model::clear_has_self_collide() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void Model::clear_self_collide() {
  self_collide_ = false;
  clear_has_self_collide();
}
inline bool Model::self_collide() const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.Model.self_collide)
  return self_collide_;
}
inline void Model::set_self_collide(bool value) {
  set_has_self_collide();
  self_collide_ = value;
  // @@protoc_insertion_point(field_set:Indriya.Core.Msgs.Model.self_collide)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::Model> ModelPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::Model const> ConstModelPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_model_2eproto__INCLUDED