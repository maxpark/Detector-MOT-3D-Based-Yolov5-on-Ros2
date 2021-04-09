// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: track_frame.proto

#include "proto/track_frame.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_track_5fframe_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_track_5fframe_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Person;
}  // namespace protobuf_track_5fframe_2eproto
namespace probf {
class PersonDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Person>
      _instance;
} _Person_default_instance_;
class TrackFrameDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<TrackFrame>
      _instance;
} _TrackFrame_default_instance_;
}  // namespace probf
namespace protobuf_track_5fframe_2eproto {
static void InitDefaultsPerson() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::probf::_Person_default_instance_;
    new (ptr) ::probf::Person();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::probf::Person::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Person =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPerson}, {}};

static void InitDefaultsTrackFrame() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::probf::_TrackFrame_default_instance_;
    new (ptr) ::probf::TrackFrame();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::probf::TrackFrame::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_TrackFrame =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsTrackFrame}, {
      &protobuf_track_5fframe_2eproto::scc_info_Person.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Person.base);
  ::google::protobuf::internal::InitSCC(&scc_info_TrackFrame.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::Person, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::Person, px_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::Person, py_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::Person, vx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::Person, vy_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::Person, sx_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::Person, sy_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::TrackFrame, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::TrackFrame, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::TrackFrame, sec_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::TrackFrame, nsec_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::probf::TrackFrame, person_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::probf::Person)},
  { 11, -1, sizeof(::probf::TrackFrame)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::probf::_Person_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::probf::_TrackFrame_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "track_frame.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021track_frame.proto\022\005probf\"P\n\006Person\022\n\n\002"
      "px\030\001 \001(\001\022\n\n\002py\030\002 \001(\001\022\n\n\002vx\030\003 \001(\001\022\n\n\002vy\030\004"
      " \001(\001\022\n\n\002sx\030\005 \001(\001\022\n\n\002sy\030\006 \001(\001\"R\n\nTrackFra"
      "me\022\n\n\002id\030\001 \001(\005\022\013\n\003sec\030\002 \001(\005\022\014\n\004nsec\030\003 \001("
      "\005\022\035\n\006person\030\004 \003(\0132\r.probf.Personb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 200);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "track_frame.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_track_5fframe_2eproto
namespace probf {

// ===================================================================

void Person::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Person::kPxFieldNumber;
const int Person::kPyFieldNumber;
const int Person::kVxFieldNumber;
const int Person::kVyFieldNumber;
const int Person::kSxFieldNumber;
const int Person::kSyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Person::Person()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_track_5fframe_2eproto::scc_info_Person.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:probf.Person)
}
Person::Person(const Person& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&px_, &from.px_,
    static_cast<size_t>(reinterpret_cast<char*>(&sy_) -
    reinterpret_cast<char*>(&px_)) + sizeof(sy_));
  // @@protoc_insertion_point(copy_constructor:probf.Person)
}

void Person::SharedCtor() {
  ::memset(&px_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sy_) -
      reinterpret_cast<char*>(&px_)) + sizeof(sy_));
}

Person::~Person() {
  // @@protoc_insertion_point(destructor:probf.Person)
  SharedDtor();
}

void Person::SharedDtor() {
}

void Person::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Person::descriptor() {
  ::protobuf_track_5fframe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_track_5fframe_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Person& Person::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_track_5fframe_2eproto::scc_info_Person.base);
  return *internal_default_instance();
}


void Person::Clear() {
// @@protoc_insertion_point(message_clear_start:probf.Person)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&px_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sy_) -
      reinterpret_cast<char*>(&px_)) + sizeof(sy_));
  _internal_metadata_.Clear();
}

bool Person::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:probf.Person)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // double px = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u /* 9 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &px_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double py = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &py_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vx = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double vy = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &vy_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double sx = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sx_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double sy = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &sy_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:probf.Person)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:probf.Person)
  return false;
#undef DO_
}

void Person::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:probf.Person)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double px = 1;
  if (this->px() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->px(), output);
  }

  // double py = 2;
  if (this->py() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->py(), output);
  }

  // double vx = 3;
  if (this->vx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->vx(), output);
  }

  // double vy = 4;
  if (this->vy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->vy(), output);
  }

  // double sx = 5;
  if (this->sx() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->sx(), output);
  }

  // double sy = 6;
  if (this->sy() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->sy(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:probf.Person)
}

::google::protobuf::uint8* Person::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:probf.Person)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // double px = 1;
  if (this->px() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->px(), target);
  }

  // double py = 2;
  if (this->py() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->py(), target);
  }

  // double vx = 3;
  if (this->vx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->vx(), target);
  }

  // double vy = 4;
  if (this->vy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->vy(), target);
  }

  // double sx = 5;
  if (this->sx() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->sx(), target);
  }

  // double sy = 6;
  if (this->sy() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->sy(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:probf.Person)
  return target;
}

size_t Person::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:probf.Person)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // double px = 1;
  if (this->px() != 0) {
    total_size += 1 + 8;
  }

  // double py = 2;
  if (this->py() != 0) {
    total_size += 1 + 8;
  }

  // double vx = 3;
  if (this->vx() != 0) {
    total_size += 1 + 8;
  }

  // double vy = 4;
  if (this->vy() != 0) {
    total_size += 1 + 8;
  }

  // double sx = 5;
  if (this->sx() != 0) {
    total_size += 1 + 8;
  }

  // double sy = 6;
  if (this->sy() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Person::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:probf.Person)
  GOOGLE_DCHECK_NE(&from, this);
  const Person* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Person>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:probf.Person)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:probf.Person)
    MergeFrom(*source);
  }
}

void Person::MergeFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:probf.Person)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.px() != 0) {
    set_px(from.px());
  }
  if (from.py() != 0) {
    set_py(from.py());
  }
  if (from.vx() != 0) {
    set_vx(from.vx());
  }
  if (from.vy() != 0) {
    set_vy(from.vy());
  }
  if (from.sx() != 0) {
    set_sx(from.sx());
  }
  if (from.sy() != 0) {
    set_sy(from.sy());
  }
}

void Person::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:probf.Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Person::CopyFrom(const Person& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:probf.Person)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Person::IsInitialized() const {
  return true;
}

void Person::Swap(Person* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Person::InternalSwap(Person* other) {
  using std::swap;
  swap(px_, other->px_);
  swap(py_, other->py_);
  swap(vx_, other->vx_);
  swap(vy_, other->vy_);
  swap(sx_, other->sx_);
  swap(sy_, other->sy_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Person::GetMetadata() const {
  protobuf_track_5fframe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_track_5fframe_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void TrackFrame::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int TrackFrame::kIdFieldNumber;
const int TrackFrame::kSecFieldNumber;
const int TrackFrame::kNsecFieldNumber;
const int TrackFrame::kPersonFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

TrackFrame::TrackFrame()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_track_5fframe_2eproto::scc_info_TrackFrame.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:probf.TrackFrame)
}
TrackFrame::TrackFrame(const TrackFrame& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      person_(from.person_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&nsec_) -
    reinterpret_cast<char*>(&id_)) + sizeof(nsec_));
  // @@protoc_insertion_point(copy_constructor:probf.TrackFrame)
}

void TrackFrame::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nsec_) -
      reinterpret_cast<char*>(&id_)) + sizeof(nsec_));
}

TrackFrame::~TrackFrame() {
  // @@protoc_insertion_point(destructor:probf.TrackFrame)
  SharedDtor();
}

void TrackFrame::SharedDtor() {
}

void TrackFrame::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* TrackFrame::descriptor() {
  ::protobuf_track_5fframe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_track_5fframe_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const TrackFrame& TrackFrame::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_track_5fframe_2eproto::scc_info_TrackFrame.base);
  return *internal_default_instance();
}


void TrackFrame::Clear() {
// @@protoc_insertion_point(message_clear_start:probf.TrackFrame)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  person_.Clear();
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nsec_) -
      reinterpret_cast<char*>(&id_)) + sizeof(nsec_));
  _internal_metadata_.Clear();
}

bool TrackFrame::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:probf.TrackFrame)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 sec = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nsec = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nsec_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .probf.Person person = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_person()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:probf.TrackFrame)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:probf.TrackFrame)
  return false;
#undef DO_
}

void TrackFrame::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:probf.TrackFrame)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // int32 sec = 2;
  if (this->sec() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->sec(), output);
  }

  // int32 nsec = 3;
  if (this->nsec() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nsec(), output);
  }

  // repeated .probf.Person person = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->person_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4,
      this->person(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:probf.TrackFrame)
}

::google::protobuf::uint8* TrackFrame::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:probf.TrackFrame)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // int32 sec = 2;
  if (this->sec() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->sec(), target);
  }

  // int32 nsec = 3;
  if (this->nsec() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nsec(), target);
  }

  // repeated .probf.Person person = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->person_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->person(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:probf.TrackFrame)
  return target;
}

size_t TrackFrame::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:probf.TrackFrame)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .probf.Person person = 4;
  {
    unsigned int count = static_cast<unsigned int>(this->person_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->person(static_cast<int>(i)));
    }
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // int32 sec = 2;
  if (this->sec() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sec());
  }

  // int32 nsec = 3;
  if (this->nsec() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nsec());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrackFrame::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:probf.TrackFrame)
  GOOGLE_DCHECK_NE(&from, this);
  const TrackFrame* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const TrackFrame>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:probf.TrackFrame)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:probf.TrackFrame)
    MergeFrom(*source);
  }
}

void TrackFrame::MergeFrom(const TrackFrame& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:probf.TrackFrame)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  person_.MergeFrom(from.person_);
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.sec() != 0) {
    set_sec(from.sec());
  }
  if (from.nsec() != 0) {
    set_nsec(from.nsec());
  }
}

void TrackFrame::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:probf.TrackFrame)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TrackFrame::CopyFrom(const TrackFrame& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:probf.TrackFrame)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrackFrame::IsInitialized() const {
  return true;
}

void TrackFrame::Swap(TrackFrame* other) {
  if (other == this) return;
  InternalSwap(other);
}
void TrackFrame::InternalSwap(TrackFrame* other) {
  using std::swap;
  CastToBase(&person_)->InternalSwap(CastToBase(&other->person_));
  swap(id_, other->id_);
  swap(sec_, other->sec_);
  swap(nsec_, other->nsec_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata TrackFrame::GetMetadata() const {
  protobuf_track_5fframe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_track_5fframe_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace probf
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::probf::Person* Arena::CreateMaybeMessage< ::probf::Person >(Arena* arena) {
  return Arena::CreateInternal< ::probf::Person >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::probf::TrackFrame* Arena::CreateMaybeMessage< ::probf::TrackFrame >(Arena* arena) {
  return Arena::CreateInternal< ::probf::TrackFrame >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
