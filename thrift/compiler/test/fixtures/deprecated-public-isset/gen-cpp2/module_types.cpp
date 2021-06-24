/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/deprecated-public-isset/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/deprecated-public-isset/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/deprecated-public-isset/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Foo>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Foo>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
Foo::Foo(apache::thrift::FragileConstructor, ::std::int32_t field1__arg, ::std::int32_t field2__arg, ::std::int32_t field3__arg) :
    field1(std::move(field1__arg)),
    field2(std::move(field2__arg)),
    field3(std::move(field3__arg)) {
  __isset.field1 = true;
  __isset.field2 = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void Foo::__clear() {
  // clear all fields
  this->field1 = 0;
  this->field2 = 0;
  this->field3 = 0;
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool Foo::operator==(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1 == rhs.field1)) {
    return false;
  }
  if (lhs.field2_ref() != rhs.field2_ref()) {
    return false;
  }
  if (!(lhs.field3 == rhs.field3)) {
    return false;
  }
  return true;
}

bool Foo::operator<(const Foo& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.field1 == rhs.field1)) {
    return lhs.field1 < rhs.field1;
  }
  if (lhs.field2_ref() != rhs.field2_ref()) {
    return lhs.field2_ref() < rhs.field2_ref();
  }
  if (!(lhs.field3 == rhs.field3)) {
    return lhs.field3 < rhs.field3;
  }
  return false;
}


void swap(Foo& a, Foo& b) {
  using ::std::swap;
  swap(a.field1_ref().value(), b.field1_ref().value());
  swap(a.field2_ref().value_unchecked(), b.field2_ref().value_unchecked());
  swap(a.field3_ref().value(), b.field3_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void Foo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Foo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Foo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Foo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Foo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



} // cpp2
