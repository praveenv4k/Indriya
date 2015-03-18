// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: joint_value_map.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "joint_value_map.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace experimot {
namespace msgs {

namespace {

const ::google::protobuf::Descriptor* JointValueMap_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  JointValueMap_reflection_ = NULL;
const ::google::protobuf::Descriptor* JointValueMap_MapFieldEntry_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_joint_5fvalue_5fmap_2eproto() {
  protobuf_AddDesc_joint_5fvalue_5fmap_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "joint_value_map.proto");
  GOOGLE_CHECK(file != NULL);
  JointValueMap_descriptor_ = file->message_type(0);
  static const int JointValueMap_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(JointValueMap, map_field_),
  };
  JointValueMap_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      JointValueMap_descriptor_,
      JointValueMap::default_instance_,
      JointValueMap_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(JointValueMap, _has_bits_[0]),
      -1,
      -1,
      sizeof(JointValueMap),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(JointValueMap, _internal_metadata_),
      -1);
  JointValueMap_MapFieldEntry_descriptor_ = JointValueMap_descriptor_->nested_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_joint_5fvalue_5fmap_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      JointValueMap_descriptor_, &JointValueMap::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        JointValueMap_MapFieldEntry_descriptor_,
        ::google::protobuf::internal::MapEntry<
            ::google::protobuf::int32,
            double,
            ::google::protobuf::internal::WireFormatLite::TYPE_INT32,
            ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE,
            0>::CreateDefaultInstance(
                JointValueMap_MapFieldEntry_descriptor_));
}

}  // namespace

void protobuf_ShutdownFile_joint_5fvalue_5fmap_2eproto() {
  delete JointValueMap::default_instance_;
  delete JointValueMap_reflection_;
}

void protobuf_AddDesc_joint_5fvalue_5fmap_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025joint_value_map.proto\022\016experimot.msgs\""
    "\200\001\n\rJointValueMap\022>\n\tmap_field\030\001 \003(\0132+.e"
    "xperimot.msgs.JointValueMap.MapFieldEntr"
    "y\032/\n\rMapFieldEntry\022\013\n\003key\030\001 \001(\005\022\r\n\005value"
    "\030\002 \001(\001:\0028\001", 170);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "joint_value_map.proto", &protobuf_RegisterTypes);
  JointValueMap::default_instance_ = new JointValueMap();
  JointValueMap::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_joint_5fvalue_5fmap_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_joint_5fvalue_5fmap_2eproto {
  StaticDescriptorInitializer_joint_5fvalue_5fmap_2eproto() {
    protobuf_AddDesc_joint_5fvalue_5fmap_2eproto();
  }
} static_descriptor_initializer_joint_5fvalue_5fmap_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int JointValueMap::kMapFieldFieldNumber;
#endif  // !_MSC_VER

JointValueMap::JointValueMap()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:experimot.msgs.JointValueMap)
}

void JointValueMap::InitAsDefaultInstance() {
}

JointValueMap::JointValueMap(const JointValueMap& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:experimot.msgs.JointValueMap)
}

void JointValueMap::SharedCtor() {
  _cached_size_ = 0;
  map_field_.SetAssignDescriptorCallback(
      protobuf_AssignDescriptorsOnce);
  map_field_.SetEntryDescriptor(
      &::experimot::msgs::JointValueMap_MapFieldEntry_descriptor_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

JointValueMap::~JointValueMap() {
  // @@protoc_insertion_point(destructor:experimot.msgs.JointValueMap)
  SharedDtor();
}

void JointValueMap::SharedDtor() {
  if (this != default_instance_) {
  }
}

void JointValueMap::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* JointValueMap::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return JointValueMap_descriptor_;
}

const JointValueMap& JointValueMap::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_joint_5fvalue_5fmap_2eproto();
  return *default_instance_;
}

JointValueMap* JointValueMap::default_instance_ = NULL;

JointValueMap* JointValueMap::New(::google::protobuf::Arena* arena) const {
  JointValueMap* n = new JointValueMap;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void JointValueMap::Clear() {
  map_field_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool JointValueMap::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:experimot.msgs.JointValueMap)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // map<int32, double> map_field = 1;
      case 1: {
        if (tag == 10) {
         parse_map_field:
          ::google::protobuf::scoped_ptr<JointValueMap_MapFieldEntry> entry(map_field_.NewEntry());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, entry.get()));
          (*mutable_map_field())[entry->key()] = *entry->mutable_value();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_map_field;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:experimot.msgs.JointValueMap)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:experimot.msgs.JointValueMap)
  return false;
#undef DO_
}

void JointValueMap::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:experimot.msgs.JointValueMap)
  // map<int32, double> map_field = 1;
  {
    ::google::protobuf::scoped_ptr<JointValueMap_MapFieldEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::int32, double >::const_iterator
        it = map_field().begin(); it != map_field().end(); ++it) {
      entry.reset(map_field_.NewEntryWrapper(it->first, it->second));
      ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
          1, *entry, output);
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:experimot.msgs.JointValueMap)
}

::google::protobuf::uint8* JointValueMap::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:experimot.msgs.JointValueMap)
  // map<int32, double> map_field = 1;
  {
    ::google::protobuf::scoped_ptr<JointValueMap_MapFieldEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::int32, double >::const_iterator
        it = map_field().begin(); it != map_field().end(); ++it) {
      entry.reset(map_field_.NewEntryWrapper(it->first, it->second));
      target = ::google::protobuf::internal::WireFormatLite::
          WriteMessageNoVirtualToArray(
              1, *entry, target);
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:experimot.msgs.JointValueMap)
  return target;
}

int JointValueMap::ByteSize() const {
  int total_size = 0;

  // map<int32, double> map_field = 1;
  total_size += 1 * this->map_field_size();
  {
    ::google::protobuf::scoped_ptr<JointValueMap_MapFieldEntry> entry;
    for (::google::protobuf::Map< ::google::protobuf::int32, double >::const_iterator
        it = map_field().begin(); it != map_field().end(); ++it) {
      entry.reset(map_field_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void JointValueMap::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const JointValueMap* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const JointValueMap*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void JointValueMap::MergeFrom(const JointValueMap& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  map_field_.MergeFrom(from.map_field_);
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void JointValueMap::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void JointValueMap::CopyFrom(const JointValueMap& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool JointValueMap::IsInitialized() const {

  return true;
}

void JointValueMap::Swap(JointValueMap* other) {
  if (other == this) return;
  InternalSwap(other);
}
void JointValueMap::InternalSwap(JointValueMap* other) {
  map_field_.Swap(&other->map_field_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata JointValueMap::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = JointValueMap_descriptor_;
  metadata.reflection = JointValueMap_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// JointValueMap

// map<int32, double> map_field = 1;
 int JointValueMap::map_field_size() const {
  return map_field_.size();
}
 void JointValueMap::clear_map_field() {
  map_field_.Clear();
}
 const ::google::protobuf::Map< ::google::protobuf::int32, double >&
JointValueMap::map_field() const {
  // @@protoc_insertion_point(field_map:experimot.msgs.JointValueMap.map_field)
  return map_field_.GetMap();
}
 ::google::protobuf::Map< ::google::protobuf::int32, double >*
JointValueMap::mutable_map_field() {
  // @@protoc_insertion_point(field_mutable_map:experimot.msgs.JointValueMap.map_field)
  return map_field_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace experimot

EX_REGISTER_STATIC_MSG("experimot.msgs.JointValueMap", JointValueMap)
// @@protoc_insertion_point(global_scope)
