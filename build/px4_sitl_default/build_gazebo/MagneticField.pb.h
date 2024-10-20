// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MagneticField.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MagneticField_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MagneticField_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "vector3d.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MagneticField_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MagneticField_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MagneticField_2eproto;
namespace sensor_msgs {
namespace msgs {
class MagneticField;
class MagneticFieldDefaultTypeInternal;
extern MagneticFieldDefaultTypeInternal _MagneticField_default_instance_;
}  // namespace msgs
}  // namespace sensor_msgs
PROTOBUF_NAMESPACE_OPEN
template<> ::sensor_msgs::msgs::MagneticField* Arena::CreateMaybeMessage<::sensor_msgs::msgs::MagneticField>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sensor_msgs {
namespace msgs {

// ===================================================================

class MagneticField PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sensor_msgs.msgs.MagneticField) */ {
 public:
  inline MagneticField() : MagneticField(nullptr) {};
  virtual ~MagneticField();

  MagneticField(const MagneticField& from);
  MagneticField(MagneticField&& from) noexcept
    : MagneticField() {
    *this = ::std::move(from);
  }

  inline MagneticField& operator=(const MagneticField& from) {
    CopyFrom(from);
    return *this;
  }
  inline MagneticField& operator=(MagneticField&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const MagneticField& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MagneticField* internal_default_instance() {
    return reinterpret_cast<const MagneticField*>(
               &_MagneticField_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MagneticField& a, MagneticField& b) {
    a.Swap(&b);
  }
  inline void Swap(MagneticField* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MagneticField* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MagneticField* New() const final {
    return CreateMaybeMessage<MagneticField>(nullptr);
  }

  MagneticField* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MagneticField>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const MagneticField& from);
  void MergeFrom(const MagneticField& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(MagneticField* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sensor_msgs.msgs.MagneticField";
  }
  protected:
  explicit MagneticField(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_MagneticField_2eproto);
    return ::descriptor_table_MagneticField_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMagneticFieldCovarianceFieldNumber = 3,
    kMagneticFieldFieldNumber = 2,
    kTimeUsecFieldNumber = 1,
  };
  // repeated float magnetic_field_covariance = 3 [packed = true];
  int magnetic_field_covariance_size() const;
  private:
  int _internal_magnetic_field_covariance_size() const;
  public:
  void clear_magnetic_field_covariance();
  private:
  float _internal_magnetic_field_covariance(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_magnetic_field_covariance() const;
  void _internal_add_magnetic_field_covariance(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_magnetic_field_covariance();
  public:
  float magnetic_field_covariance(int index) const;
  void set_magnetic_field_covariance(int index, float value);
  void add_magnetic_field_covariance(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      magnetic_field_covariance() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_magnetic_field_covariance();

  // required .gazebo.msgs.Vector3d magnetic_field = 2;
  bool has_magnetic_field() const;
  private:
  bool _internal_has_magnetic_field() const;
  public:
  void clear_magnetic_field();
  const ::gazebo::msgs::Vector3d& magnetic_field() const;
  ::gazebo::msgs::Vector3d* release_magnetic_field();
  ::gazebo::msgs::Vector3d* mutable_magnetic_field();
  void set_allocated_magnetic_field(::gazebo::msgs::Vector3d* magnetic_field);
  private:
  const ::gazebo::msgs::Vector3d& _internal_magnetic_field() const;
  ::gazebo::msgs::Vector3d* _internal_mutable_magnetic_field();
  public:
  void unsafe_arena_set_allocated_magnetic_field(
      ::gazebo::msgs::Vector3d* magnetic_field);
  ::gazebo::msgs::Vector3d* unsafe_arena_release_magnetic_field();

  // required int64 time_usec = 1;
  bool has_time_usec() const;
  private:
  bool _internal_has_time_usec() const;
  public:
  void clear_time_usec();
  ::PROTOBUF_NAMESPACE_ID::int64 time_usec() const;
  void set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_time_usec() const;
  void _internal_set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:sensor_msgs.msgs.MagneticField)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > magnetic_field_covariance_;
  mutable std::atomic<int> _magnetic_field_covariance_cached_byte_size_;
  ::gazebo::msgs::Vector3d* magnetic_field_;
  ::PROTOBUF_NAMESPACE_ID::int64 time_usec_;
  friend struct ::TableStruct_MagneticField_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MagneticField

// required int64 time_usec = 1;
inline bool MagneticField::_internal_has_time_usec() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool MagneticField::has_time_usec() const {
  return _internal_has_time_usec();
}
inline void MagneticField::clear_time_usec() {
  time_usec_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MagneticField::_internal_time_usec() const {
  return time_usec_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 MagneticField::time_usec() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.MagneticField.time_usec)
  return _internal_time_usec();
}
inline void MagneticField::_internal_set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000002u;
  time_usec_ = value;
}
inline void MagneticField::set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_time_usec(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.MagneticField.time_usec)
}

// required .gazebo.msgs.Vector3d magnetic_field = 2;
inline bool MagneticField::_internal_has_magnetic_field() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || magnetic_field_ != nullptr);
  return value;
}
inline bool MagneticField::has_magnetic_field() const {
  return _internal_has_magnetic_field();
}
inline const ::gazebo::msgs::Vector3d& MagneticField::_internal_magnetic_field() const {
  const ::gazebo::msgs::Vector3d* p = magnetic_field_;
  return p != nullptr ? *p : *reinterpret_cast<const ::gazebo::msgs::Vector3d*>(
      &::gazebo::msgs::_Vector3d_default_instance_);
}
inline const ::gazebo::msgs::Vector3d& MagneticField::magnetic_field() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.MagneticField.magnetic_field)
  return _internal_magnetic_field();
}
inline void MagneticField::unsafe_arena_set_allocated_magnetic_field(
    ::gazebo::msgs::Vector3d* magnetic_field) {
  if (GetArena() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(magnetic_field_);
  }
  magnetic_field_ = magnetic_field;
  if (magnetic_field) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:sensor_msgs.msgs.MagneticField.magnetic_field)
}
inline ::gazebo::msgs::Vector3d* MagneticField::release_magnetic_field() {
  auto temp = unsafe_arena_release_magnetic_field();
  if (GetArena() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::gazebo::msgs::Vector3d* MagneticField::unsafe_arena_release_magnetic_field() {
  // @@protoc_insertion_point(field_release:sensor_msgs.msgs.MagneticField.magnetic_field)
  _has_bits_[0] &= ~0x00000001u;
  ::gazebo::msgs::Vector3d* temp = magnetic_field_;
  magnetic_field_ = nullptr;
  return temp;
}
inline ::gazebo::msgs::Vector3d* MagneticField::_internal_mutable_magnetic_field() {
  _has_bits_[0] |= 0x00000001u;
  if (magnetic_field_ == nullptr) {
    auto* p = CreateMaybeMessage<::gazebo::msgs::Vector3d>(GetArena());
    magnetic_field_ = p;
  }
  return magnetic_field_;
}
inline ::gazebo::msgs::Vector3d* MagneticField::mutable_magnetic_field() {
  // @@protoc_insertion_point(field_mutable:sensor_msgs.msgs.MagneticField.magnetic_field)
  return _internal_mutable_magnetic_field();
}
inline void MagneticField::set_allocated_magnetic_field(::gazebo::msgs::Vector3d* magnetic_field) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArena();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(magnetic_field_);
  }
  if (magnetic_field) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
      reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(magnetic_field)->GetArena();
    if (message_arena != submessage_arena) {
      magnetic_field = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, magnetic_field, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  magnetic_field_ = magnetic_field;
  // @@protoc_insertion_point(field_set_allocated:sensor_msgs.msgs.MagneticField.magnetic_field)
}

// repeated float magnetic_field_covariance = 3 [packed = true];
inline int MagneticField::_internal_magnetic_field_covariance_size() const {
  return magnetic_field_covariance_.size();
}
inline int MagneticField::magnetic_field_covariance_size() const {
  return _internal_magnetic_field_covariance_size();
}
inline void MagneticField::clear_magnetic_field_covariance() {
  magnetic_field_covariance_.Clear();
}
inline float MagneticField::_internal_magnetic_field_covariance(int index) const {
  return magnetic_field_covariance_.Get(index);
}
inline float MagneticField::magnetic_field_covariance(int index) const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.MagneticField.magnetic_field_covariance)
  return _internal_magnetic_field_covariance(index);
}
inline void MagneticField::set_magnetic_field_covariance(int index, float value) {
  magnetic_field_covariance_.Set(index, value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.MagneticField.magnetic_field_covariance)
}
inline void MagneticField::_internal_add_magnetic_field_covariance(float value) {
  magnetic_field_covariance_.Add(value);
}
inline void MagneticField::add_magnetic_field_covariance(float value) {
  _internal_add_magnetic_field_covariance(value);
  // @@protoc_insertion_point(field_add:sensor_msgs.msgs.MagneticField.magnetic_field_covariance)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
MagneticField::_internal_magnetic_field_covariance() const {
  return magnetic_field_covariance_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
MagneticField::magnetic_field_covariance() const {
  // @@protoc_insertion_point(field_list:sensor_msgs.msgs.MagneticField.magnetic_field_covariance)
  return _internal_magnetic_field_covariance();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
MagneticField::_internal_mutable_magnetic_field_covariance() {
  return &magnetic_field_covariance_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
MagneticField::mutable_magnetic_field_covariance() {
  // @@protoc_insertion_point(field_mutable_list:sensor_msgs.msgs.MagneticField.magnetic_field_covariance)
  return _internal_mutable_magnetic_field_covariance();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MagneticField_2eproto
