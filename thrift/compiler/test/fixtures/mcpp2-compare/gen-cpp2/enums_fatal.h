/**
 * Autogenerated by Thrift for src/enums.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/reflection/reflection.h>

#include <fatal/type/list.h>
#include <fatal/type/pair.h>
#include <fatal/type/sequence.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_types.h"
namespace facebook { namespace ns { namespace qwerty {

namespace __fbthrift_refl {

struct __fbthrift_strings_enums {
  using AnEnumA = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'A'>;
  using AnEnumB = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'B'>;
  using AnEnumC = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'C'>;
  using AnEnumD = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'D'>;
  using AnEnumE = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'E'>;
  using ConstantMap1 = ::fatal::sequence<char, 'C', 'o', 'n', 's', 't', 'a', 'n', 't', 'M', 'a', 'p', '1'>;
  using ConstantMap2 = ::fatal::sequence<char, 'C', 'o', 'n', 's', 't', 'a', 'n', 't', 'M', 'a', 'p', '2'>;
  using FIELDA = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'A'>;
  using FIELDB = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'B'>;
  using FIELDC = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'C'>;
  using FIELDD = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'D'>;
  using MapEnumString = ::fatal::sequence<char, 'M', 'a', 'p', 'E', 'n', 'u', 'm', 'S', 't', 'r', 'i', 'n', 'g'>;
  using MapStringEnum = ::fatal::sequence<char, 'M', 'a', 'p', 'S', 't', 'r', 'i', 'n', 'g', 'E', 'n', 'u', 'm'>;
  using SomeStruct = ::fatal::sequence<char, 'S', 'o', 'm', 'e', 'S', 't', 'r', 'u', 'c', 't'>;
  using __fbthrift_hash_148e782df34993fa930a9b389d5a4e2e92f13610cf6adbeab2abf6e095f5ef89 = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'B'>;
  using __fbthrift_hash_40d9038a74e2f4da3d23c9054a5c003163af248d9a0c6133ac130acfc5d4122d = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'D'>;
  using __fbthrift_hash_49148a34b86bd9147a20d03f3d208a2b5e455ef8c60cf5ff6ffea6affd332d7c = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'C'>;
  using __fbthrift_hash_4dc727286ef5bd08f0a2699c943609f35b5359e8f064605a4254c2b3bfe3b129 = ::fatal::sequence<char, 'S', 'o', 'm', 'e', 'S', 't', 'r', 'u', 'c', 't'>;
  using __fbthrift_hash_a003c1938a10c7729197e235918bdad7bc795ec24b19f24c66e4f24374526ad8 = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'A'>;
  using __fbthrift_hash_aa040ff588540b32b20df8076d3bcdb977fbf110900b49bc2a01fbd70279e97e = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'D'>;
  using __fbthrift_hash_add540b98778029e7e62e524687274b838fd038b831b1885b93d5ab01ef056e6 = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'A'>;
  using __fbthrift_hash_c81ae8454813dac10447c81d4157cdd1b5fd834a7e41a2cb8983e3ec58703aea = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'E'>;
  using __fbthrift_hash_c907b51dbf720f8a71d2fe895168681ecaffaeebee9402b24e9da11816eda10e = ::fatal::sequence<char, 'F', 'I', 'E', 'L', 'D', 'C'>;
  using __fbthrift_hash_db9d8fef72c1f50ecdff3b92f910e0a1de4d5c7200474859f87921402d5041f1 = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'A'>;
  using __fbthrift_hash_eb186312a14c4c4670c94482e5b994a205ddc0d1bcc8eb7041534fab44d6d2e4 = ::fatal::sequence<char, 'A', 'n', 'E', 'n', 'u', 'm', 'B'>;
  using cpp2 = ::fatal::sequence<char, 'c', 'p', 'p', '2'>;
  using enums = ::fatal::sequence<char, 'e', 'n', 'u', 'm', 's'>;
  using facebook__ns__qwerty = ::fatal::sequence<char, 'f', 'a', 'c', 'e', 'b', 'o', 'o', 'k', ':', ':', 'n', 's', ':', ':', 'q', 'w', 'e', 'r', 't', 'y'>;
  using fieldA = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'A'>;
};

struct enums_module_traits {
  using strings = __fbthrift_strings_enums;
  using name = strings::enums;
  using namespaces = ::fatal::list<
      ::fatal::pair<strings::cpp2, strings::facebook__ns__qwerty>
  >;
  using enums = ::fatal::list<
      ::fatal::pair<::facebook::ns::qwerty::AnEnumA, strings::AnEnumA>,
      ::fatal::pair<::facebook::ns::qwerty::AnEnumB, strings::AnEnumB>,
      ::fatal::pair<::facebook::ns::qwerty::AnEnumC, strings::AnEnumC>,
      ::fatal::pair<::facebook::ns::qwerty::AnEnumD, strings::AnEnumD>,
      ::fatal::pair<::facebook::ns::qwerty::AnEnumE, strings::AnEnumE>
  >;
  using unions = ::fatal::list<
  >;
  using structs = ::fatal::list<
      ::fatal::pair<::facebook::ns::qwerty::SomeStruct, strings::SomeStruct>
  >;
  using constants = ::fatal::list<
      strings::MapStringEnum,
      strings::MapEnumString,
      strings::ConstantMap1,
      strings::ConstantMap2
  >;
  using services = ::fatal::list<
  >;
};

} // __fbthrift_refl

class enums_tags {
  using __fbthrift_strings = __fbthrift_refl::__fbthrift_strings_enums;
  struct __fbthrift_languages {
    using cpp2 = __fbthrift_strings::cpp2;
  };
  struct __fbthrift_enums {
    using AnEnumA = __fbthrift_strings::AnEnumA;
    using AnEnumB = __fbthrift_strings::AnEnumB;
    using AnEnumC = __fbthrift_strings::AnEnumC;
    using AnEnumD = __fbthrift_strings::AnEnumD;
    using AnEnumE = __fbthrift_strings::AnEnumE;
  };
  struct __fbthrift_unions {
  };
  struct __fbthrift_structs {
    using SomeStruct = __fbthrift_strings::SomeStruct;
  };
  struct __fbthrift_constants {
    using MapStringEnum = __fbthrift_strings::MapStringEnum;
    using MapEnumString = __fbthrift_strings::MapEnumString;
    using ConstantMap1 = __fbthrift_strings::ConstantMap1;
    using ConstantMap2 = __fbthrift_strings::ConstantMap2;
  };
  struct __fbthrift_services {
  };
 public:
  struct module {};

  using strings = __fbthrift_strings;
  using languages = __fbthrift_languages;
  using enums = __fbthrift_enums;
  using unions = __fbthrift_unions;
  using structs = __fbthrift_structs;
  using constants = __fbthrift_constants;
  using services = __fbthrift_services;
};

THRIFT_REGISTER_REFLECTION_METADATA(enums_tags::module, __fbthrift_refl::enums_module_traits);

}}} // facebook::ns::qwerty
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/enums_fatal_types.h"
