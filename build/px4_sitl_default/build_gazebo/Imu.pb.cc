// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Imu.proto

#include "Imu.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_quaternion_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Quaternion_quaternion_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_vector3d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vector3d_vector3d_2eproto;
namespace sensor_msgs {
namespace msgs {
class ImuDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Imu> _instance;
} _Imu_default_instance_;
}  // namespace msgs
}  // namespace sensor_msgs
static void InitDefaultsscc_info_Imu_Imu_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sensor_msgs::msgs::_Imu_default_instance_;
    new (ptr) ::sensor_msgs::msgs::Imu();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sensor_msgs::msgs::Imu::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Imu_Imu_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_Imu_Imu_2eproto}, {
      &scc_info_Quaternion_quaternion_2eproto.base,
      &scc_info_Vector3d_vector3d_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Imu_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Imu_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Imu_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Imu_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, orientation_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, orientation_covariance_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, angular_velocity_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, angular_velocity_covariance_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, linear_acceleration_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, linear_acceleration_covariance_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, time_usec_),
  PROTOBUF_FIELD_OFFSET(::sensor_msgs::msgs::Imu, seq_),
  0,
  ~0u,
  1,
  ~0u,
  2,
  ~0u,
  3,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 13, sizeof(::sensor_msgs::msgs::Imu)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::sensor_msgs::msgs::_Imu_default_instance_),
};

const char descriptor_table_protodef_Imu_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\tImu.proto\022\020sensor_msgs.msgs\032\020quaternio"
  "n.proto\032\016vector3d.proto\"\261\002\n\003Imu\022,\n\013orien"
  "tation\030\001 \002(\0132\027.gazebo.msgs.Quaternion\022\"\n"
  "\026orientation_covariance\030\002 \003(\002B\002\020\001\022/\n\020ang"
  "ular_velocity\030\003 \002(\0132\025.gazebo.msgs.Vector"
  "3d\022\'\n\033angular_velocity_covariance\030\004 \003(\002B"
  "\002\020\001\0222\n\023linear_acceleration\030\005 \002(\0132\025.gazeb"
  "o.msgs.Vector3d\022*\n\036linear_acceleration_c"
  "ovariance\030\006 \003(\002B\002\020\001\022\021\n\ttime_usec\030\007 \002(\003\022\013"
  "\n\003seq\030\010 \002(\003"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Imu_2eproto_deps[2] = {
  &::descriptor_table_quaternion_2eproto,
  &::descriptor_table_vector3d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Imu_2eproto_sccs[1] = {
  &scc_info_Imu_Imu_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Imu_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Imu_2eproto = {
  false, false, descriptor_table_protodef_Imu_2eproto, "Imu.proto", 371,
  &descriptor_table_Imu_2eproto_once, descriptor_table_Imu_2eproto_sccs, descriptor_table_Imu_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_Imu_2eproto::offsets,
  file_level_metadata_Imu_2eproto, 1, file_level_enum_descriptors_Imu_2eproto, file_level_service_descriptors_Imu_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Imu_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Imu_2eproto)), true);
namespace sensor_msgs {
namespace msgs {

// ===================================================================

void Imu::InitAsDefaultInstance() {
  ::sensor_msgs::msgs::_Imu_default_instance_._instance.get_mutable()->orientation_ = const_cast< ::gazebo::msgs::Quaternion*>(
      ::gazebo::msgs::Quaternion::internal_default_instance());
  ::sensor_msgs::msgs::_Imu_default_instance_._instance.get_mutable()->angular_velocity_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
  ::sensor_msgs::msgs::_Imu_default_instance_._instance.get_mutable()->linear_acceleration_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
}
class Imu::_Internal {
 public:
  using HasBits = decltype(std::declval<Imu>()._has_bits_);
  static const ::gazebo::msgs::Quaternion& orientation(const Imu* msg);
  static void set_has_orientation(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Vector3d& angular_velocity(const Imu* msg);
  static void set_has_angular_velocity(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::gazebo::msgs::Vector3d& linear_acceleration(const Imu* msg);
  static void set_has_linear_acceleration(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_time_usec(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_seq(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000001f) ^ 0x0000001f) != 0;
  }
};

const ::gazebo::msgs::Quaternion&
Imu::_Internal::orientation(const Imu* msg) {
  return *msg->orientation_;
}
const ::gazebo::msgs::Vector3d&
Imu::_Internal::angular_velocity(const Imu* msg) {
  return *msg->angular_velocity_;
}
const ::gazebo::msgs::Vector3d&
Imu::_Internal::linear_acceleration(const Imu* msg) {
  return *msg->linear_acceleration_;
}
void Imu::clear_orientation() {
  if (orientation_ != nullptr) orientation_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void Imu::clear_angular_velocity() {
  if (angular_velocity_ != nullptr) angular_velocity_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void Imu::clear_linear_acceleration() {
  if (linear_acceleration_ != nullptr) linear_acceleration_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
Imu::Imu(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  orientation_covariance_(arena),
  angular_velocity_covariance_(arena),
  linear_acceleration_covariance_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:sensor_msgs.msgs.Imu)
}
Imu::Imu(const Imu& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      orientation_covariance_(from.orientation_covariance_),
      angular_velocity_covariance_(from.angular_velocity_covariance_),
      linear_acceleration_covariance_(from.linear_acceleration_covariance_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_orientation()) {
    orientation_ = new ::gazebo::msgs::Quaternion(*from.orientation_);
  } else {
    orientation_ = nullptr;
  }
  if (from._internal_has_angular_velocity()) {
    angular_velocity_ = new ::gazebo::msgs::Vector3d(*from.angular_velocity_);
  } else {
    angular_velocity_ = nullptr;
  }
  if (from._internal_has_linear_acceleration()) {
    linear_acceleration_ = new ::gazebo::msgs::Vector3d(*from.linear_acceleration_);
  } else {
    linear_acceleration_ = nullptr;
  }
  ::memcpy(&time_usec_, &from.time_usec_,
    static_cast<size_t>(reinterpret_cast<char*>(&seq_) -
    reinterpret_cast<char*>(&time_usec_)) + sizeof(seq_));
  // @@protoc_insertion_point(copy_constructor:sensor_msgs.msgs.Imu)
}

void Imu::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Imu_Imu_2eproto.base);
  ::memset(&orientation_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&seq_) -
      reinterpret_cast<char*>(&orientation_)) + sizeof(seq_));
}

Imu::~Imu() {
  // @@protoc_insertion_point(destructor:sensor_msgs.msgs.Imu)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Imu::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete orientation_;
  if (this != internal_default_instance()) delete angular_velocity_;
  if (this != internal_default_instance()) delete linear_acceleration_;
}

void Imu::ArenaDtor(void* object) {
  Imu* _this = reinterpret_cast< Imu* >(object);
  (void)_this;
}
void Imu::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Imu::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Imu& Imu::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Imu_Imu_2eproto.base);
  return *internal_default_instance();
}


void Imu::Clear() {
// @@protoc_insertion_point(message_clear_start:sensor_msgs.msgs.Imu)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  orientation_covariance_.Clear();
  angular_velocity_covariance_.Clear();
  linear_acceleration_covariance_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(orientation_ != nullptr);
      orientation_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(angular_velocity_ != nullptr);
      angular_velocity_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(linear_acceleration_ != nullptr);
      linear_acceleration_->Clear();
    }
  }
  if (cached_has_bits & 0x00000018u) {
    ::memset(&time_usec_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&seq_) -
        reinterpret_cast<char*>(&time_usec_)) + sizeof(seq_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Imu::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Quaternion orientation = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_orientation(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float orientation_covariance = 2 [packed = true];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_orientation_covariance(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21) {
          _internal_add_orientation_covariance(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Vector3d angular_velocity = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_angular_velocity(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float angular_velocity_covariance = 4 [packed = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_angular_velocity_covariance(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37) {
          _internal_add_angular_velocity_covariance(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Vector3d linear_acceleration = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_linear_acceleration(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated float linear_acceleration_covariance = 6 [packed = true];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_linear_acceleration_covariance(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53) {
          _internal_add_linear_acceleration_covariance(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required int64 time_usec = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_time_usec(&has_bits);
          time_usec_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required int64 seq = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          _Internal::set_has_seq(&has_bits);
          seq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Imu::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sensor_msgs.msgs.Imu)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Quaternion orientation = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::orientation(this), target, stream);
  }

  // repeated float orientation_covariance = 2 [packed = true];
  if (this->_internal_orientation_covariance_size() > 0) {
    target = stream->WriteFixedPacked(2, _internal_orientation_covariance(), target);
  }

  // required .gazebo.msgs.Vector3d angular_velocity = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        3, _Internal::angular_velocity(this), target, stream);
  }

  // repeated float angular_velocity_covariance = 4 [packed = true];
  if (this->_internal_angular_velocity_covariance_size() > 0) {
    target = stream->WriteFixedPacked(4, _internal_angular_velocity_covariance(), target);
  }

  // required .gazebo.msgs.Vector3d linear_acceleration = 5;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::linear_acceleration(this), target, stream);
  }

  // repeated float linear_acceleration_covariance = 6 [packed = true];
  if (this->_internal_linear_acceleration_covariance_size() > 0) {
    target = stream->WriteFixedPacked(6, _internal_linear_acceleration_covariance(), target);
  }

  // required int64 time_usec = 7;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(7, this->_internal_time_usec(), target);
  }

  // required int64 seq = 8;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(8, this->_internal_seq(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sensor_msgs.msgs.Imu)
  return target;
}

size_t Imu::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:sensor_msgs.msgs.Imu)
  size_t total_size = 0;

  if (_internal_has_orientation()) {
    // required .gazebo.msgs.Quaternion orientation = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *orientation_);
  }

  if (_internal_has_angular_velocity()) {
    // required .gazebo.msgs.Vector3d angular_velocity = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *angular_velocity_);
  }

  if (_internal_has_linear_acceleration()) {
    // required .gazebo.msgs.Vector3d linear_acceleration = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *linear_acceleration_);
  }

  if (_internal_has_time_usec()) {
    // required int64 time_usec = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_time_usec());
  }

  if (_internal_has_seq()) {
    // required int64 seq = 8;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_seq());
  }

  return total_size;
}
size_t Imu::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sensor_msgs.msgs.Imu)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Quaternion orientation = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *orientation_);

    // required .gazebo.msgs.Vector3d angular_velocity = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *angular_velocity_);

    // required .gazebo.msgs.Vector3d linear_acceleration = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *linear_acceleration_);

    // required int64 time_usec = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_time_usec());

    // required int64 seq = 8;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_seq());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float orientation_covariance = 2 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_orientation_covariance_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _orientation_covariance_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float angular_velocity_covariance = 4 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_angular_velocity_covariance_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _angular_velocity_covariance_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated float linear_acceleration_covariance = 6 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_linear_acceleration_covariance_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<::PROTOBUF_NAMESPACE_ID::int32>(data_size));
    }
    int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(data_size);
    _linear_acceleration_covariance_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Imu::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sensor_msgs.msgs.Imu)
  GOOGLE_DCHECK_NE(&from, this);
  const Imu* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Imu>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sensor_msgs.msgs.Imu)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sensor_msgs.msgs.Imu)
    MergeFrom(*source);
  }
}

void Imu::MergeFrom(const Imu& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sensor_msgs.msgs.Imu)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  orientation_covariance_.MergeFrom(from.orientation_covariance_);
  angular_velocity_covariance_.MergeFrom(from.angular_velocity_covariance_);
  linear_acceleration_covariance_.MergeFrom(from.linear_acceleration_covariance_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_orientation()->::gazebo::msgs::Quaternion::MergeFrom(from._internal_orientation());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_angular_velocity()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_angular_velocity());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_linear_acceleration()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_linear_acceleration());
    }
    if (cached_has_bits & 0x00000008u) {
      time_usec_ = from.time_usec_;
    }
    if (cached_has_bits & 0x00000010u) {
      seq_ = from.seq_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Imu::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sensor_msgs.msgs.Imu)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Imu::CopyFrom(const Imu& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sensor_msgs.msgs.Imu)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Imu::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_orientation()) {
    if (!orientation_->IsInitialized()) return false;
  }
  if (_internal_has_angular_velocity()) {
    if (!angular_velocity_->IsInitialized()) return false;
  }
  if (_internal_has_linear_acceleration()) {
    if (!linear_acceleration_->IsInitialized()) return false;
  }
  return true;
}

void Imu::InternalSwap(Imu* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  orientation_covariance_.InternalSwap(&other->orientation_covariance_);
  angular_velocity_covariance_.InternalSwap(&other->angular_velocity_covariance_);
  linear_acceleration_covariance_.InternalSwap(&other->linear_acceleration_covariance_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Imu, seq_)
      + sizeof(Imu::seq_)
      - PROTOBUF_FIELD_OFFSET(Imu, orientation_)>(
          reinterpret_cast<char*>(&orientation_),
          reinterpret_cast<char*>(&other->orientation_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Imu::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace sensor_msgs
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sensor_msgs::msgs::Imu* Arena::CreateMaybeMessage< ::sensor_msgs::msgs::Imu >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sensor_msgs::msgs::Imu >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
