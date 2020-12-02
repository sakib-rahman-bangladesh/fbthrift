/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
} // namespace tag
namespace detail {
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class FooEx;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class FooEx final : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = FooEx;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
  FooEx() {}
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  FooEx(apache::thrift::FragileConstructor);

  FooEx(FooEx&&) = default;

  FooEx(const FooEx&) = default;


  FooEx& operator=(FooEx&&) = default;

  FooEx& operator=(const FooEx&) = default;
THRIFT_IGNORE_ISSET_USE_WARNING_END
  void __clear();
  bool operator==(const FooEx& rhs) const;
#ifndef SWIG
  friend bool operator!=(const FooEx& __x, const FooEx& __y) {
    return !(__x == __y);
  }
#endif
  bool operator<(const FooEx& rhs) const;
#ifndef SWIG
  friend bool operator>(const FooEx& __x, const FooEx& __y) {
    return __y < __x;
  }
  friend bool operator<=(const FooEx& __x, const FooEx& __y) {
    return !(__y < __x);
  }
  friend bool operator>=(const FooEx& __x, const FooEx& __y) {
    return !(__x < __y);
  }
#endif

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::FooEx";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< FooEx >;
  friend void swap(FooEx& a, FooEx& b);
};

template <class Protocol_>
uint32_t FooEx::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
