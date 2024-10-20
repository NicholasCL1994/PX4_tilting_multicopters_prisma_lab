// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Groundtruth.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Groundtruth_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Groundtruth_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Groundtruth_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Groundtruth_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Groundtruth_2eproto;
namespace sensor_msgs {
namespace msgs {
class Groundtruth;
class GroundtruthDefaultTypeInternal;
extern GroundtruthDefaultTypeInternal _Groundtruth_default_instance_;
}  // namespace msgs
}  // namespace sensor_msgs
PROTOBUF_NAMESPACE_OPEN
template<> ::sensor_msgs::msgs::Groundtruth* Arena::CreateMaybeMessage<::sensor_msgs::msgs::Groundtruth>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sensor_msgs {
namespace msgs {

// ===================================================================

class Groundtruth PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sensor_msgs.msgs.Groundtruth) */ {
 public:
  inline Groundtruth() : Groundtruth(nullptr) {};
  virtual ~Groundtruth();

  Groundtruth(const Groundtruth& from);
  Groundtruth(Groundtruth&& from) noexcept
    : Groundtruth() {
    *this = ::std::move(from);
  }

  inline Groundtruth& operator=(const Groundtruth& from) {
    CopyFrom(from);
    return *this;
  }
  inline Groundtruth& operator=(Groundtruth&& from) noexcept {
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
  static const Groundtruth& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Groundtruth* internal_default_instance() {
    return reinterpret_cast<const Groundtruth*>(
               &_Groundtruth_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Groundtruth& a, Groundtruth& b) {
    a.Swap(&b);
  }
  inline void Swap(Groundtruth* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Groundtruth* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Groundtruth* New() const final {
    return CreateMaybeMessage<Groundtruth>(nullptr);
  }

  Groundtruth* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Groundtruth>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Groundtruth& from);
  void MergeFrom(const Groundtruth& from);
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
  void InternalSwap(Groundtruth* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sensor_msgs.msgs.Groundtruth";
  }
  protected:
  explicit Groundtruth(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Groundtruth_2eproto);
    return ::descriptor_table_Groundtruth_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTimeUsecFieldNumber = 1,
    kLatitudeRadFieldNumber = 2,
    kLongitudeRadFieldNumber = 3,
    kAltitudeFieldNumber = 4,
    kVelocityEastFieldNumber = 5,
    kVelocityNorthFieldNumber = 6,
    kVelocityUpFieldNumber = 7,
    kAttitudeQWFieldNumber = 8,
    kAttitudeQXFieldNumber = 9,
    kAttitudeQYFieldNumber = 10,
    kAttitudeQZFieldNumber = 11,
  };
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

  // required double latitude_rad = 2;
  bool has_latitude_rad() const;
  private:
  bool _internal_has_latitude_rad() const;
  public:
  void clear_latitude_rad();
  double latitude_rad() const;
  void set_latitude_rad(double value);
  private:
  double _internal_latitude_rad() const;
  void _internal_set_latitude_rad(double value);
  public:

  // required double longitude_rad = 3;
  bool has_longitude_rad() const;
  private:
  bool _internal_has_longitude_rad() const;
  public:
  void clear_longitude_rad();
  double longitude_rad() const;
  void set_longitude_rad(double value);
  private:
  double _internal_longitude_rad() const;
  void _internal_set_longitude_rad(double value);
  public:

  // required double altitude = 4;
  bool has_altitude() const;
  private:
  bool _internal_has_altitude() const;
  public:
  void clear_altitude();
  double altitude() const;
  void set_altitude(double value);
  private:
  double _internal_altitude() const;
  void _internal_set_altitude(double value);
  public:

  // optional double velocity_east = 5;
  bool has_velocity_east() const;
  private:
  bool _internal_has_velocity_east() const;
  public:
  void clear_velocity_east();
  double velocity_east() const;
  void set_velocity_east(double value);
  private:
  double _internal_velocity_east() const;
  void _internal_set_velocity_east(double value);
  public:

  // optional double velocity_north = 6;
  bool has_velocity_north() const;
  private:
  bool _internal_has_velocity_north() const;
  public:
  void clear_velocity_north();
  double velocity_north() const;
  void set_velocity_north(double value);
  private:
  double _internal_velocity_north() const;
  void _internal_set_velocity_north(double value);
  public:

  // optional double velocity_up = 7;
  bool has_velocity_up() const;
  private:
  bool _internal_has_velocity_up() const;
  public:
  void clear_velocity_up();
  double velocity_up() const;
  void set_velocity_up(double value);
  private:
  double _internal_velocity_up() const;
  void _internal_set_velocity_up(double value);
  public:

  // optional double attitude_q_w = 8;
  bool has_attitude_q_w() const;
  private:
  bool _internal_has_attitude_q_w() const;
  public:
  void clear_attitude_q_w();
  double attitude_q_w() const;
  void set_attitude_q_w(double value);
  private:
  double _internal_attitude_q_w() const;
  void _internal_set_attitude_q_w(double value);
  public:

  // optional double attitude_q_x = 9;
  bool has_attitude_q_x() const;
  private:
  bool _internal_has_attitude_q_x() const;
  public:
  void clear_attitude_q_x();
  double attitude_q_x() const;
  void set_attitude_q_x(double value);
  private:
  double _internal_attitude_q_x() const;
  void _internal_set_attitude_q_x(double value);
  public:

  // optional double attitude_q_y = 10;
  bool has_attitude_q_y() const;
  private:
  bool _internal_has_attitude_q_y() const;
  public:
  void clear_attitude_q_y();
  double attitude_q_y() const;
  void set_attitude_q_y(double value);
  private:
  double _internal_attitude_q_y() const;
  void _internal_set_attitude_q_y(double value);
  public:

  // optional double attitude_q_z = 11;
  bool has_attitude_q_z() const;
  private:
  bool _internal_has_attitude_q_z() const;
  public:
  void clear_attitude_q_z();
  double attitude_q_z() const;
  void set_attitude_q_z(double value);
  private:
  double _internal_attitude_q_z() const;
  void _internal_set_attitude_q_z(double value);
  public:

  // @@protoc_insertion_point(class_scope:sensor_msgs.msgs.Groundtruth)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 time_usec_;
  double latitude_rad_;
  double longitude_rad_;
  double altitude_;
  double velocity_east_;
  double velocity_north_;
  double velocity_up_;
  double attitude_q_w_;
  double attitude_q_x_;
  double attitude_q_y_;
  double attitude_q_z_;
  friend struct ::TableStruct_Groundtruth_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Groundtruth

// required int64 time_usec = 1;
inline bool Groundtruth::_internal_has_time_usec() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Groundtruth::has_time_usec() const {
  return _internal_has_time_usec();
}
inline void Groundtruth::clear_time_usec() {
  time_usec_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Groundtruth::_internal_time_usec() const {
  return time_usec_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Groundtruth::time_usec() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.time_usec)
  return _internal_time_usec();
}
inline void Groundtruth::_internal_set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000001u;
  time_usec_ = value;
}
inline void Groundtruth::set_time_usec(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_time_usec(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.time_usec)
}

// required double latitude_rad = 2;
inline bool Groundtruth::_internal_has_latitude_rad() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Groundtruth::has_latitude_rad() const {
  return _internal_has_latitude_rad();
}
inline void Groundtruth::clear_latitude_rad() {
  latitude_rad_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double Groundtruth::_internal_latitude_rad() const {
  return latitude_rad_;
}
inline double Groundtruth::latitude_rad() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.latitude_rad)
  return _internal_latitude_rad();
}
inline void Groundtruth::_internal_set_latitude_rad(double value) {
  _has_bits_[0] |= 0x00000002u;
  latitude_rad_ = value;
}
inline void Groundtruth::set_latitude_rad(double value) {
  _internal_set_latitude_rad(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.latitude_rad)
}

// required double longitude_rad = 3;
inline bool Groundtruth::_internal_has_longitude_rad() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Groundtruth::has_longitude_rad() const {
  return _internal_has_longitude_rad();
}
inline void Groundtruth::clear_longitude_rad() {
  longitude_rad_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double Groundtruth::_internal_longitude_rad() const {
  return longitude_rad_;
}
inline double Groundtruth::longitude_rad() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.longitude_rad)
  return _internal_longitude_rad();
}
inline void Groundtruth::_internal_set_longitude_rad(double value) {
  _has_bits_[0] |= 0x00000004u;
  longitude_rad_ = value;
}
inline void Groundtruth::set_longitude_rad(double value) {
  _internal_set_longitude_rad(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.longitude_rad)
}

// required double altitude = 4;
inline bool Groundtruth::_internal_has_altitude() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Groundtruth::has_altitude() const {
  return _internal_has_altitude();
}
inline void Groundtruth::clear_altitude() {
  altitude_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double Groundtruth::_internal_altitude() const {
  return altitude_;
}
inline double Groundtruth::altitude() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.altitude)
  return _internal_altitude();
}
inline void Groundtruth::_internal_set_altitude(double value) {
  _has_bits_[0] |= 0x00000008u;
  altitude_ = value;
}
inline void Groundtruth::set_altitude(double value) {
  _internal_set_altitude(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.altitude)
}

// optional double velocity_east = 5;
inline bool Groundtruth::_internal_has_velocity_east() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Groundtruth::has_velocity_east() const {
  return _internal_has_velocity_east();
}
inline void Groundtruth::clear_velocity_east() {
  velocity_east_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline double Groundtruth::_internal_velocity_east() const {
  return velocity_east_;
}
inline double Groundtruth::velocity_east() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.velocity_east)
  return _internal_velocity_east();
}
inline void Groundtruth::_internal_set_velocity_east(double value) {
  _has_bits_[0] |= 0x00000010u;
  velocity_east_ = value;
}
inline void Groundtruth::set_velocity_east(double value) {
  _internal_set_velocity_east(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.velocity_east)
}

// optional double velocity_north = 6;
inline bool Groundtruth::_internal_has_velocity_north() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool Groundtruth::has_velocity_north() const {
  return _internal_has_velocity_north();
}
inline void Groundtruth::clear_velocity_north() {
  velocity_north_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline double Groundtruth::_internal_velocity_north() const {
  return velocity_north_;
}
inline double Groundtruth::velocity_north() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.velocity_north)
  return _internal_velocity_north();
}
inline void Groundtruth::_internal_set_velocity_north(double value) {
  _has_bits_[0] |= 0x00000020u;
  velocity_north_ = value;
}
inline void Groundtruth::set_velocity_north(double value) {
  _internal_set_velocity_north(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.velocity_north)
}

// optional double velocity_up = 7;
inline bool Groundtruth::_internal_has_velocity_up() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool Groundtruth::has_velocity_up() const {
  return _internal_has_velocity_up();
}
inline void Groundtruth::clear_velocity_up() {
  velocity_up_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline double Groundtruth::_internal_velocity_up() const {
  return velocity_up_;
}
inline double Groundtruth::velocity_up() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.velocity_up)
  return _internal_velocity_up();
}
inline void Groundtruth::_internal_set_velocity_up(double value) {
  _has_bits_[0] |= 0x00000040u;
  velocity_up_ = value;
}
inline void Groundtruth::set_velocity_up(double value) {
  _internal_set_velocity_up(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.velocity_up)
}

// optional double attitude_q_w = 8;
inline bool Groundtruth::_internal_has_attitude_q_w() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool Groundtruth::has_attitude_q_w() const {
  return _internal_has_attitude_q_w();
}
inline void Groundtruth::clear_attitude_q_w() {
  attitude_q_w_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline double Groundtruth::_internal_attitude_q_w() const {
  return attitude_q_w_;
}
inline double Groundtruth::attitude_q_w() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.attitude_q_w)
  return _internal_attitude_q_w();
}
inline void Groundtruth::_internal_set_attitude_q_w(double value) {
  _has_bits_[0] |= 0x00000080u;
  attitude_q_w_ = value;
}
inline void Groundtruth::set_attitude_q_w(double value) {
  _internal_set_attitude_q_w(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.attitude_q_w)
}

// optional double attitude_q_x = 9;
inline bool Groundtruth::_internal_has_attitude_q_x() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool Groundtruth::has_attitude_q_x() const {
  return _internal_has_attitude_q_x();
}
inline void Groundtruth::clear_attitude_q_x() {
  attitude_q_x_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline double Groundtruth::_internal_attitude_q_x() const {
  return attitude_q_x_;
}
inline double Groundtruth::attitude_q_x() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.attitude_q_x)
  return _internal_attitude_q_x();
}
inline void Groundtruth::_internal_set_attitude_q_x(double value) {
  _has_bits_[0] |= 0x00000100u;
  attitude_q_x_ = value;
}
inline void Groundtruth::set_attitude_q_x(double value) {
  _internal_set_attitude_q_x(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.attitude_q_x)
}

// optional double attitude_q_y = 10;
inline bool Groundtruth::_internal_has_attitude_q_y() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool Groundtruth::has_attitude_q_y() const {
  return _internal_has_attitude_q_y();
}
inline void Groundtruth::clear_attitude_q_y() {
  attitude_q_y_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline double Groundtruth::_internal_attitude_q_y() const {
  return attitude_q_y_;
}
inline double Groundtruth::attitude_q_y() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.attitude_q_y)
  return _internal_attitude_q_y();
}
inline void Groundtruth::_internal_set_attitude_q_y(double value) {
  _has_bits_[0] |= 0x00000200u;
  attitude_q_y_ = value;
}
inline void Groundtruth::set_attitude_q_y(double value) {
  _internal_set_attitude_q_y(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.attitude_q_y)
}

// optional double attitude_q_z = 11;
inline bool Groundtruth::_internal_has_attitude_q_z() const {
  bool value = (_has_bits_[0] & 0x00000400u) != 0;
  return value;
}
inline bool Groundtruth::has_attitude_q_z() const {
  return _internal_has_attitude_q_z();
}
inline void Groundtruth::clear_attitude_q_z() {
  attitude_q_z_ = 0;
  _has_bits_[0] &= ~0x00000400u;
}
inline double Groundtruth::_internal_attitude_q_z() const {
  return attitude_q_z_;
}
inline double Groundtruth::attitude_q_z() const {
  // @@protoc_insertion_point(field_get:sensor_msgs.msgs.Groundtruth.attitude_q_z)
  return _internal_attitude_q_z();
}
inline void Groundtruth::_internal_set_attitude_q_z(double value) {
  _has_bits_[0] |= 0x00000400u;
  attitude_q_z_ = value;
}
inline void Groundtruth::set_attitude_q_z(double value) {
  _internal_set_attitude_q_z(value);
  // @@protoc_insertion_point(field_set:sensor_msgs.msgs.Groundtruth.attitude_q_z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace sensor_msgs

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Groundtruth_2eproto
