/**
 * Autogenerated by Thrift for src/module2.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>


#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module0_types.h"
#include "thrift/compiler/test/fixtures/qualified/gen-cpp2/module1_types.h"

namespace apache {
namespace thrift {
namespace tag {
struct first;
struct second;
struct s;
struct id;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_first
#define APACHE_THRIFT_ACCESSOR_first
APACHE_THRIFT_DEFINE_ACCESSOR(first);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_second
#define APACHE_THRIFT_ACCESSOR_second
APACHE_THRIFT_DEFINE_ACCESSOR(second);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_s
#define APACHE_THRIFT_ACCESSOR_s
APACHE_THRIFT_DEFINE_ACCESSOR(s);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_id
#define APACHE_THRIFT_ACCESSOR_id
APACHE_THRIFT_DEFINE_ACCESSOR(id);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace module2 {
class Struct;
class BigStruct;
} // module2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
THRIFT_IGNORE_ISSET_USE_WARNING_BEGIN
namespace module2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class Struct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Struct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Struct() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Struct(apache::thrift::FragileConstructor, ::module0::Struct first__arg, ::module1::Struct second__arg);

  Struct(Struct&&) noexcept;

  Struct(const Struct& src);


  Struct& operator=(Struct&&) noexcept;
  Struct& operator=(const Struct& src);
  void __clear();
 private:
  ::module0::Struct first;
 private:
  ::module1::Struct second;

 private:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool first;
    bool second;
  } __isset = {};

 public:

  bool operator==(const Struct&) const;
  bool operator<(const Struct&) const;

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> first_ref() const& {
    return {this->first, __isset.first};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> first_ref() const&& {
    return {std::move(this->first), __isset.first};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> first_ref() & {
    return {this->first, __isset.first};
  }

  template <typename..., typename T = ::module0::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> first_ref() && {
    return {std::move(this->first), __isset.first};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> second_ref() const& {
    return {this->second, __isset.second};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> second_ref() const&& {
    return {std::move(this->second), __isset.second};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> second_ref() & {
    return {this->second, __isset.second};
  }

  template <typename..., typename T = ::module1::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> second_ref() && {
    return {std::move(this->second), __isset.second};
  }
  const ::module0::Struct& get_first() const&;
  ::module0::Struct get_first() &&;

  template <typename T_Struct_first_struct_setter = ::module0::Struct>
  [[deprecated("Use `FOO.first_ref() = BAR;` instead of `FOO.set_first(BAR);`")]]
  ::module0::Struct& set_first(T_Struct_first_struct_setter&& first_) {
    first = std::forward<T_Struct_first_struct_setter>(first_);
    __isset.first = true;
    return first;
  }
  const ::module1::Struct& get_second() const&;
  ::module1::Struct get_second() &&;

  template <typename T_Struct_second_struct_setter = ::module1::Struct>
  [[deprecated("Use `FOO.second_ref() = BAR;` instead of `FOO.set_second(BAR);`")]]
  ::module1::Struct& set_second(T_Struct_second_struct_setter&& second_) {
    second = std::forward<T_Struct_second_struct_setter>(second_);
    __isset.second = true;
    return second;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Struct>;
  friend void swap(Struct& a, Struct& b);
};

template <class Protocol_>
uint32_t Struct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // module2
namespace module2 {
#ifndef SWIG
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
#endif

class BigStruct final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = BigStruct;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  BigStruct() :
      id(0) {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  BigStruct(apache::thrift::FragileConstructor, ::module2::Struct s__arg, ::std::int32_t id__arg);

  BigStruct(BigStruct&&) noexcept;

  BigStruct(const BigStruct& src);


  BigStruct& operator=(BigStruct&&) noexcept;
  BigStruct& operator=(const BigStruct& src);
  void __clear();
 private:
  ::module2::Struct s;
 private:
  ::std::int32_t id;

 private:
  [[deprecated("__isset field is deprecated in Thrift struct. Use _ref() accessors instead.")]]
  struct __isset {
    bool s;
    bool id;
  } __isset = {};

 public:

  bool operator==(const BigStruct&) const;
  bool operator<(const BigStruct&) const;

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> s_ref() const& {
    return {this->s, __isset.s};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> s_ref() const&& {
    return {std::move(this->s), __isset.s};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> s_ref() & {
    return {this->s, __isset.s};
  }

  template <typename..., typename T = ::module2::Struct>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> s_ref() && {
    return {std::move(this->s), __isset.s};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> id_ref() const& {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> id_ref() const&& {
    return {std::move(this->id), __isset.id};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> id_ref() & {
    return {this->id, __isset.id};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> id_ref() && {
    return {std::move(this->id), __isset.id};
  }
  const ::module2::Struct& get_s() const&;
  ::module2::Struct get_s() &&;

  template <typename T_BigStruct_s_struct_setter = ::module2::Struct>
  [[deprecated("Use `FOO.s_ref() = BAR;` instead of `FOO.set_s(BAR);`")]]
  ::module2::Struct& set_s(T_BigStruct_s_struct_setter&& s_) {
    s = std::forward<T_BigStruct_s_struct_setter>(s_);
    __isset.s = true;
    return s;
  }

  ::std::int32_t get_id() const {
    return id;
  }

  [[deprecated("Use `FOO.id_ref() = BAR;` instead of `FOO.set_id(BAR);`")]]
  ::std::int32_t& set_id(::std::int32_t id_) {
    id = id_;
    __isset.id = true;
    return id;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<BigStruct>;
  friend void swap(BigStruct& a, BigStruct& b);
};

template <class Protocol_>
uint32_t BigStruct::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // module2
THRIFT_IGNORE_ISSET_USE_WARNING_END
