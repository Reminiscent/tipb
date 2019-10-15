// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: checksum.proto

#include "checksum.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
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
namespace tipb {
class ChecksumRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ChecksumRequest>
      _instance;
} _ChecksumRequest_default_instance_;
class ChecksumResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ChecksumResponse>
      _instance;
} _ChecksumResponse_default_instance_;
}  // namespace tipb
namespace protobuf_checksum_2eproto {
void InitDefaultsChecksumRequestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tipb::_ChecksumRequest_default_instance_;
    new (ptr) ::tipb::ChecksumRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tipb::ChecksumRequest::InitAsDefaultInstance();
}

void InitDefaultsChecksumRequest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsChecksumRequestImpl);
}

void InitDefaultsChecksumResponseImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::tipb::_ChecksumResponse_default_instance_;
    new (ptr) ::tipb::ChecksumResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tipb::ChecksumResponse::InitAsDefaultInstance();
}

void InitDefaultsChecksumResponse() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsChecksumResponseImpl);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumRequest, start_ts_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumRequest, scan_on_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumRequest, algorithm_),
  0,
  1,
  2,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumResponse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumResponse, checksum_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumResponse, total_kvs_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tipb::ChecksumResponse, total_bytes_),
  0,
  1,
  2,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, sizeof(::tipb::ChecksumRequest)},
  { 11, 19, sizeof(::tipb::ChecksumResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tipb::_ChecksumRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tipb::_ChecksumResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "checksum.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016checksum.proto\022\004tipb\"v\n\017ChecksumReques"
      "t\022\020\n\010start_ts\030\001 \001(\004\022%\n\007scan_on\030\002 \001(\0162\024.t"
      "ipb.ChecksumScanOn\022*\n\talgorithm\030\003 \001(\0162\027."
      "tipb.ChecksumAlgorithm\"L\n\020ChecksumRespon"
      "se\022\020\n\010checksum\030\001 \001(\004\022\021\n\ttotal_kvs\030\002 \001(\004\022"
      "\023\n\013total_bytes\030\003 \001(\004*&\n\016ChecksumScanOn\022\t"
      "\n\005Table\020\000\022\t\n\005Index\020\001*\"\n\021ChecksumAlgorith"
      "m\022\r\n\tCrc64_Xor\020\000B\031\n\025com.pingcap.tidb.tip"
      "bP\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 323);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "checksum.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_checksum_2eproto
namespace tipb {
const ::google::protobuf::EnumDescriptor* ChecksumScanOn_descriptor() {
  protobuf_checksum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_checksum_2eproto::file_level_enum_descriptors[0];
}
bool ChecksumScanOn_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ChecksumAlgorithm_descriptor() {
  protobuf_checksum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_checksum_2eproto::file_level_enum_descriptors[1];
}
bool ChecksumAlgorithm_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void ChecksumRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChecksumRequest::kStartTsFieldNumber;
const int ChecksumRequest::kScanOnFieldNumber;
const int ChecksumRequest::kAlgorithmFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChecksumRequest::ChecksumRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_checksum_2eproto::InitDefaultsChecksumRequest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tipb.ChecksumRequest)
}
ChecksumRequest::ChecksumRequest(const ChecksumRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&start_ts_, &from.start_ts_,
    static_cast<size_t>(reinterpret_cast<char*>(&algorithm_) -
    reinterpret_cast<char*>(&start_ts_)) + sizeof(algorithm_));
  // @@protoc_insertion_point(copy_constructor:tipb.ChecksumRequest)
}

void ChecksumRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&start_ts_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&algorithm_) -
      reinterpret_cast<char*>(&start_ts_)) + sizeof(algorithm_));
}

ChecksumRequest::~ChecksumRequest() {
  // @@protoc_insertion_point(destructor:tipb.ChecksumRequest)
  SharedDtor();
}

void ChecksumRequest::SharedDtor() {
}

void ChecksumRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChecksumRequest::descriptor() {
  ::protobuf_checksum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_checksum_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ChecksumRequest& ChecksumRequest::default_instance() {
  ::protobuf_checksum_2eproto::InitDefaultsChecksumRequest();
  return *internal_default_instance();
}

ChecksumRequest* ChecksumRequest::New(::google::protobuf::Arena* arena) const {
  ChecksumRequest* n = new ChecksumRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChecksumRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:tipb.ChecksumRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    ::memset(&start_ts_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&algorithm_) -
        reinterpret_cast<char*>(&start_ts_)) + sizeof(algorithm_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChecksumRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tipb.ChecksumRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 start_ts = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_start_ts();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &start_ts_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .tipb.ChecksumScanOn scan_on = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::tipb::ChecksumScanOn_IsValid(value)) {
            set_scan_on(static_cast< ::tipb::ChecksumScanOn >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .tipb.ChecksumAlgorithm algorithm = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::tipb::ChecksumAlgorithm_IsValid(value)) {
            set_algorithm(static_cast< ::tipb::ChecksumAlgorithm >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                3, static_cast< ::google::protobuf::uint64>(value));
          }
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
  // @@protoc_insertion_point(parse_success:tipb.ChecksumRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tipb.ChecksumRequest)
  return false;
#undef DO_
}

void ChecksumRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tipb.ChecksumRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 start_ts = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->start_ts(), output);
  }

  // optional .tipb.ChecksumScanOn scan_on = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->scan_on(), output);
  }

  // optional .tipb.ChecksumAlgorithm algorithm = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->algorithm(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tipb.ChecksumRequest)
}

::google::protobuf::uint8* ChecksumRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tipb.ChecksumRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 start_ts = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->start_ts(), target);
  }

  // optional .tipb.ChecksumScanOn scan_on = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->scan_on(), target);
  }

  // optional .tipb.ChecksumAlgorithm algorithm = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->algorithm(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tipb.ChecksumRequest)
  return target;
}

size_t ChecksumRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tipb.ChecksumRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional uint64 start_ts = 1;
    if (has_start_ts()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->start_ts());
    }

    // optional .tipb.ChecksumScanOn scan_on = 2;
    if (has_scan_on()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->scan_on());
    }

    // optional .tipb.ChecksumAlgorithm algorithm = 3;
    if (has_algorithm()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->algorithm());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChecksumRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tipb.ChecksumRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const ChecksumRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ChecksumRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tipb.ChecksumRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tipb.ChecksumRequest)
    MergeFrom(*source);
  }
}

void ChecksumRequest::MergeFrom(const ChecksumRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tipb.ChecksumRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      start_ts_ = from.start_ts_;
    }
    if (cached_has_bits & 0x00000002u) {
      scan_on_ = from.scan_on_;
    }
    if (cached_has_bits & 0x00000004u) {
      algorithm_ = from.algorithm_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChecksumRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tipb.ChecksumRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChecksumRequest::CopyFrom(const ChecksumRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tipb.ChecksumRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChecksumRequest::IsInitialized() const {
  return true;
}

void ChecksumRequest::Swap(ChecksumRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChecksumRequest::InternalSwap(ChecksumRequest* other) {
  using std::swap;
  swap(start_ts_, other->start_ts_);
  swap(scan_on_, other->scan_on_);
  swap(algorithm_, other->algorithm_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChecksumRequest::GetMetadata() const {
  protobuf_checksum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_checksum_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ChecksumResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ChecksumResponse::kChecksumFieldNumber;
const int ChecksumResponse::kTotalKvsFieldNumber;
const int ChecksumResponse::kTotalBytesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ChecksumResponse::ChecksumResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_checksum_2eproto::InitDefaultsChecksumResponse();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tipb.ChecksumResponse)
}
ChecksumResponse::ChecksumResponse(const ChecksumResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&checksum_, &from.checksum_,
    static_cast<size_t>(reinterpret_cast<char*>(&total_bytes_) -
    reinterpret_cast<char*>(&checksum_)) + sizeof(total_bytes_));
  // @@protoc_insertion_point(copy_constructor:tipb.ChecksumResponse)
}

void ChecksumResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&checksum_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&total_bytes_) -
      reinterpret_cast<char*>(&checksum_)) + sizeof(total_bytes_));
}

ChecksumResponse::~ChecksumResponse() {
  // @@protoc_insertion_point(destructor:tipb.ChecksumResponse)
  SharedDtor();
}

void ChecksumResponse::SharedDtor() {
}

void ChecksumResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ChecksumResponse::descriptor() {
  ::protobuf_checksum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_checksum_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ChecksumResponse& ChecksumResponse::default_instance() {
  ::protobuf_checksum_2eproto::InitDefaultsChecksumResponse();
  return *internal_default_instance();
}

ChecksumResponse* ChecksumResponse::New(::google::protobuf::Arena* arena) const {
  ChecksumResponse* n = new ChecksumResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ChecksumResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:tipb.ChecksumResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 7u) {
    ::memset(&checksum_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&total_bytes_) -
        reinterpret_cast<char*>(&checksum_)) + sizeof(total_bytes_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ChecksumResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tipb.ChecksumResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 checksum = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_checksum();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &checksum_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 total_kvs = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_total_kvs();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &total_kvs_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional uint64 total_bytes = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_total_bytes();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &total_bytes_)));
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
  // @@protoc_insertion_point(parse_success:tipb.ChecksumResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tipb.ChecksumResponse)
  return false;
#undef DO_
}

void ChecksumResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tipb.ChecksumResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 checksum = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->checksum(), output);
  }

  // optional uint64 total_kvs = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->total_kvs(), output);
  }

  // optional uint64 total_bytes = 3;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->total_bytes(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tipb.ChecksumResponse)
}

::google::protobuf::uint8* ChecksumResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tipb.ChecksumResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint64 checksum = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->checksum(), target);
  }

  // optional uint64 total_kvs = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->total_kvs(), target);
  }

  // optional uint64 total_bytes = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->total_bytes(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tipb.ChecksumResponse)
  return target;
}

size_t ChecksumResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tipb.ChecksumResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 7u) {
    // optional uint64 checksum = 1;
    if (has_checksum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->checksum());
    }

    // optional uint64 total_kvs = 2;
    if (has_total_kvs()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->total_kvs());
    }

    // optional uint64 total_bytes = 3;
    if (has_total_bytes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->total_bytes());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ChecksumResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tipb.ChecksumResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const ChecksumResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ChecksumResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tipb.ChecksumResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tipb.ChecksumResponse)
    MergeFrom(*source);
  }
}

void ChecksumResponse::MergeFrom(const ChecksumResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tipb.ChecksumResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      checksum_ = from.checksum_;
    }
    if (cached_has_bits & 0x00000002u) {
      total_kvs_ = from.total_kvs_;
    }
    if (cached_has_bits & 0x00000004u) {
      total_bytes_ = from.total_bytes_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void ChecksumResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tipb.ChecksumResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ChecksumResponse::CopyFrom(const ChecksumResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tipb.ChecksumResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChecksumResponse::IsInitialized() const {
  return true;
}

void ChecksumResponse::Swap(ChecksumResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ChecksumResponse::InternalSwap(ChecksumResponse* other) {
  using std::swap;
  swap(checksum_, other->checksum_);
  swap(total_kvs_, other->total_kvs_);
  swap(total_bytes_, other->total_bytes_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ChecksumResponse::GetMetadata() const {
  protobuf_checksum_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_checksum_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tipb

// @@protoc_insertion_point(global_scope)
