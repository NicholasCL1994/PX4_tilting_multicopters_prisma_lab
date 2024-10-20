// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Force.proto

#include "Force.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_vector3d_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Vector3d_vector3d_2eproto;
namespace physics_msgs {
namespace msgs {
class ForceDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Force> _instance;
} _Force_default_instance_;
}  // namespace msgs
}  // namespace physics_msgs
static void InitDefaultsscc_info_Force_Force_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::physics_msgs::msgs::_Force_default_instance_;
    new (ptr) ::physics_msgs::msgs::Force();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::physics_msgs::msgs::Force::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Force_Force_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Force_Force_2eproto}, {
      &scc_info_Vector3d_vector3d_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Force_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Force_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Force_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_Force_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::physics_msgs::msgs::Force, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::physics_msgs::msgs::Force, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::physics_msgs::msgs::Force, center_),
  PROTOBUF_FIELD_OFFSET(::physics_msgs::msgs::Force, force_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::physics_msgs::msgs::Force)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::physics_msgs::msgs::_Force_default_instance_),
};

const char descriptor_table_protodef_Force_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Force.proto\022\021physics_msgs.msgs\032\016vector"
  "3d.proto\"T\n\005Force\022%\n\006center\030\001 \002(\0132\025.gaze"
  "bo.msgs.Vector3d\022$\n\005force\030\002 \002(\0132\025.gazebo"
  ".msgs.Vector3d"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_Force_2eproto_deps[1] = {
  &::descriptor_table_vector3d_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_Force_2eproto_sccs[1] = {
  &scc_info_Force_Force_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Force_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Force_2eproto = {
  false, false, descriptor_table_protodef_Force_2eproto, "Force.proto", 134,
  &descriptor_table_Force_2eproto_once, descriptor_table_Force_2eproto_sccs, descriptor_table_Force_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_Force_2eproto::offsets,
  file_level_metadata_Force_2eproto, 1, file_level_enum_descriptors_Force_2eproto, file_level_service_descriptors_Force_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_Force_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_Force_2eproto)), true);
namespace physics_msgs {
namespace msgs {

// ===================================================================

void Force::InitAsDefaultInstance() {
  ::physics_msgs::msgs::_Force_default_instance_._instance.get_mutable()->center_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
  ::physics_msgs::msgs::_Force_default_instance_._instance.get_mutable()->force_ = const_cast< ::gazebo::msgs::Vector3d*>(
      ::gazebo::msgs::Vector3d::internal_default_instance());
}
class Force::_Internal {
 public:
  using HasBits = decltype(std::declval<Force>()._has_bits_);
  static const ::gazebo::msgs::Vector3d& center(const Force* msg);
  static void set_has_center(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::gazebo::msgs::Vector3d& force(const Force* msg);
  static void set_has_force(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

const ::gazebo::msgs::Vector3d&
Force::_Internal::center(const Force* msg) {
  return *msg->center_;
}
const ::gazebo::msgs::Vector3d&
Force::_Internal::force(const Force* msg) {
  return *msg->force_;
}
void Force::clear_center() {
  if (center_ != nullptr) center_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void Force::clear_force() {
  if (force_ != nullptr) force_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
Force::Force(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:physics_msgs.msgs.Force)
}
Force::Force(const Force& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_center()) {
    center_ = new ::gazebo::msgs::Vector3d(*from.center_);
  } else {
    center_ = nullptr;
  }
  if (from._internal_has_force()) {
    force_ = new ::gazebo::msgs::Vector3d(*from.force_);
  } else {
    force_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:physics_msgs.msgs.Force)
}

void Force::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Force_Force_2eproto.base);
  ::memset(&center_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&force_) -
      reinterpret_cast<char*>(&center_)) + sizeof(force_));
}

Force::~Force() {
  // @@protoc_insertion_point(destructor:physics_msgs.msgs.Force)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Force::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete center_;
  if (this != internal_default_instance()) delete force_;
}

void Force::ArenaDtor(void* object) {
  Force* _this = reinterpret_cast< Force* >(object);
  (void)_this;
}
void Force::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Force::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Force& Force::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Force_Force_2eproto.base);
  return *internal_default_instance();
}


void Force::Clear() {
// @@protoc_insertion_point(message_clear_start:physics_msgs.msgs.Force)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(center_ != nullptr);
      center_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(force_ != nullptr);
      force_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Force::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .gazebo.msgs.Vector3d center = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_center(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .gazebo.msgs.Vector3d force = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_force(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* Force::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:physics_msgs.msgs.Force)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .gazebo.msgs.Vector3d center = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::center(this), target, stream);
  }

  // required .gazebo.msgs.Vector3d force = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::force(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:physics_msgs.msgs.Force)
  return target;
}

size_t Force::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:physics_msgs.msgs.Force)
  size_t total_size = 0;

  if (_internal_has_center()) {
    // required .gazebo.msgs.Vector3d center = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *center_);
  }

  if (_internal_has_force()) {
    // required .gazebo.msgs.Vector3d force = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *force_);
  }

  return total_size;
}
size_t Force::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:physics_msgs.msgs.Force)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .gazebo.msgs.Vector3d center = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *center_);

    // required .gazebo.msgs.Vector3d force = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *force_);

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Force::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:physics_msgs.msgs.Force)
  GOOGLE_DCHECK_NE(&from, this);
  const Force* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Force>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:physics_msgs.msgs.Force)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:physics_msgs.msgs.Force)
    MergeFrom(*source);
  }
}

void Force::MergeFrom(const Force& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:physics_msgs.msgs.Force)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_center()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_center());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_force()->::gazebo::msgs::Vector3d::MergeFrom(from._internal_force());
    }
  }
}

void Force::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:physics_msgs.msgs.Force)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Force::CopyFrom(const Force& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:physics_msgs.msgs.Force)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Force::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (_internal_has_center()) {
    if (!center_->IsInitialized()) return false;
  }
  if (_internal_has_force()) {
    if (!force_->IsInitialized()) return false;
  }
  return true;
}

void Force::InternalSwap(Force* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Force, force_)
      + sizeof(Force::force_)
      - PROTOBUF_FIELD_OFFSET(Force, center_)>(
          reinterpret_cast<char*>(&center_),
          reinterpret_cast<char*>(&other->center_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Force::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace physics_msgs
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::physics_msgs::msgs::Force* Arena::CreateMaybeMessage< ::physics_msgs::msgs::Force >(Arena* arena) {
  return Arena::CreateMessageInternal< ::physics_msgs::msgs::Force >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
