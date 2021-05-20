/**
 * Autogenerated by Thrift for src/include2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_types.h"
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::some::ns::IncludedB>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::some::ns::IncludedB>;
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

namespace some { namespace ns {

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
IncludedB::IncludedB(const IncludedB&) = default;
IncludedB& IncludedB::operator=(const IncludedB&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
IncludedB::IncludedB(IncludedB&& other) noexcept  :
    i32Field(std::move(other.i32Field)),
    strField(std::move(other.strField)),
    __isset(other.__isset) {}
IncludedB& IncludedB::operator=(FOLLY_MAYBE_UNUSED IncludedB&& other) noexcept {
    this->i32Field = std::move(other.i32Field);
    this->strField = std::move(other.strField);
    __isset = other.__isset;
    return *this;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END


THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
IncludedB::IncludedB(apache::thrift::FragileConstructor, ::std::int32_t i32Field__arg, ::std::string strField__arg) :
    i32Field(std::move(i32Field__arg)),
    strField(std::move(strField__arg)) {
  __isset.i32Field = true;
  __isset.strField = true;
}
THRIFT_IGNORE_ISSET_USE_WARNING_END

void IncludedB::__clear() {
  // clear all fields
  this->i32Field = 0;
  this->strField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  __isset = {};
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

bool IncludedB::operator==(const IncludedB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return false;
  }
  if (!(lhs.strField == rhs.strField)) {
    return false;
  }
  return true;
}

bool IncludedB::operator<(const IncludedB& rhs) const {
  (void)rhs;
  auto& lhs = *this;
  (void)lhs;
  if (!(lhs.i32Field == rhs.i32Field)) {
    return lhs.i32Field < rhs.i32Field;
  }
  if (!(lhs.strField == rhs.strField)) {
    return lhs.strField < rhs.strField;
  }
  return false;
}


void swap(IncludedB& a, IncludedB& b) {
  using ::std::swap;
  swap(a.i32Field_ref().value(), b.i32Field_ref().value());
  swap(a.strField_ref().value(), b.strField_ref().value());
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  swap(a.__isset, b.__isset);
THRIFT_IGNORE_ISSET_USE_WARNING_END
}

template void IncludedB::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t IncludedB::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t IncludedB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void IncludedB::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t IncludedB::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t IncludedB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;



}} // some::ns
