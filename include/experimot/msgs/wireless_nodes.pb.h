// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: wireless_nodes.proto

#ifndef PROTOBUF_wireless_5fnodes_2eproto__INCLUDED
#define PROTOBUF_wireless_5fnodes_2eproto__INCLUDED

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
#include "wireless_node.pb.h"
#include <boost/shared_ptr.hpp>
#include "MsgFactory.h"
// @@protoc_insertion_point(includes)

namespace Indriya {
namespace Core {
namespace Msgs {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_wireless_5fnodes_2eproto();
void protobuf_AssignDesc_wireless_5fnodes_2eproto();
void protobuf_ShutdownFile_wireless_5fnodes_2eproto();

class WirelessNodes;

// ===================================================================

class WirelessNodes : public ::google::protobuf::Message {
 public:
  WirelessNodes();
  virtual ~WirelessNodes();

  WirelessNodes(const WirelessNodes& from);

  inline WirelessNodes& operator=(const WirelessNodes& from) {
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
  static const WirelessNodes& default_instance();

  void Swap(WirelessNodes* other);

  // implements Message ----------------------------------------------

  inline WirelessNodes* New() const { return New(NULL); }

  WirelessNodes* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WirelessNodes& from);
  void MergeFrom(const WirelessNodes& from);
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
  void InternalSwap(WirelessNodes* other);
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

  // repeated .Indriya.Core.Msgs.WirelessNode node = 1;
  int node_size() const;
  void clear_node();
  static const int kNodeFieldNumber = 1;
  const ::Indriya::Core::Msgs::WirelessNode& node(int index) const;
  ::Indriya::Core::Msgs::WirelessNode* mutable_node(int index);
  ::Indriya::Core::Msgs::WirelessNode* add_node();
  const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::WirelessNode >&
      node() const;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::WirelessNode >*
      mutable_node();

  // @@protoc_insertion_point(class_scope:Indriya.Core.Msgs.WirelessNodes)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::WirelessNode > node_;
  friend void  protobuf_AddDesc_wireless_5fnodes_2eproto();
  friend void protobuf_AssignDesc_wireless_5fnodes_2eproto();
  friend void protobuf_ShutdownFile_wireless_5fnodes_2eproto();

  void InitAsDefaultInstance();
  static WirelessNodes* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// WirelessNodes

// repeated .Indriya.Core.Msgs.WirelessNode node = 1;
inline int WirelessNodes::node_size() const {
  return node_.size();
}
inline void WirelessNodes::clear_node() {
  node_.Clear();
}
inline const ::Indriya::Core::Msgs::WirelessNode& WirelessNodes::node(int index) const {
  // @@protoc_insertion_point(field_get:Indriya.Core.Msgs.WirelessNodes.node)
  return node_.Get(index);
}
inline ::Indriya::Core::Msgs::WirelessNode* WirelessNodes::mutable_node(int index) {
  // @@protoc_insertion_point(field_mutable:Indriya.Core.Msgs.WirelessNodes.node)
  return node_.Mutable(index);
}
inline ::Indriya::Core::Msgs::WirelessNode* WirelessNodes::add_node() {
  // @@protoc_insertion_point(field_add:Indriya.Core.Msgs.WirelessNodes.node)
  return node_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::WirelessNode >&
WirelessNodes::node() const {
  // @@protoc_insertion_point(field_list:Indriya.Core.Msgs.WirelessNodes.node)
  return node_;
}
inline ::google::protobuf::RepeatedPtrField< ::Indriya::Core::Msgs::WirelessNode >*
WirelessNodes::mutable_node() {
  // @@protoc_insertion_point(field_mutable_list:Indriya.Core.Msgs.WirelessNodes.node)
  return &node_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

typedef boost::shared_ptr<Indriya::Core::Msgs::WirelessNodes> WirelessNodesPtr;
// @@protoc_insertion_point(namespace_scope)

}  // namespace Msgs
}  // namespace Core
}  // namespace Indriya

typedef const boost::shared_ptr<Indriya::Core::Msgs::WirelessNodes const> ConstWirelessNodesPtr;
// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_wireless_5fnodes_2eproto__INCLUDED
