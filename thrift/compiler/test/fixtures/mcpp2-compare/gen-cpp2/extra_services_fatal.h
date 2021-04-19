/**
 * Autogenerated by Thrift for src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/reflection/reflection.h>

#include <fatal/type/list.h>
#include <fatal/type/pair.h>
#include <fatal/type/sequence.h>

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_types.h"
namespace extra { namespace svc {

namespace __fbthrift_refl {

struct __fbthrift_strings_extra_services {
  using ExtraService = ::fatal::sequence<char, 'E', 'x', 't', 'r', 'a', 'S', 'e', 'r', 'v', 'i', 'c', 'e'>;
  using __fbthrift_hash_19bdb7a3067217940c2b50b0b5221b2d567285f43296c6f40e62b2b860a6fe2b = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'A'>;
  using __fbthrift_hash_2436373fc8a8f591cf75bedc257ae981bf046e761d567897189702644f104b2e = ::fatal::sequence<char, 'c', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'S', 't', 'r', 'u', 'c', 't', '2'>;
  using __fbthrift_hash_59ee7a3ea45725149c15fa11ce6bf5c8cc5336a3641edf62fd3265fdcab97bba = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'E'>;
  using __fbthrift_hash_5a736b7ef4c69ca7479ecf23288415bbeee1751449d5a26721ce85d0c810728c = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'B'>;
  using __fbthrift_hash_5c3b94a8e304a4356159a39553a29b9ba5d46658be8683264a16f34ba323fbfc = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'A'>;
  using __fbthrift_hash_7a60aa9f6a5416b61206a441ce84695a835326c0edc0c9b86b92b618f29eb9ed = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'C'>;
  using __fbthrift_hash_a003c1938a10c7729197e235918bdad7bc795ec24b19f24c66e4f24374526ad8 = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'A'>;
  using __fbthrift_hash_a73c4974ccb5981437f75c22da908dd553c1389729210c7d554a65e1b0f4045a = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'D'>;
  using __fbthrift_hash_a93a0375706770237da363401aec269f1d6ad07d41bb42463ddd1c792185810c = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'B'>;
  using __fbthrift_hash_ba2a88de7258832d40bb04e70c8d37d66141754f3561ecfa366dc9496c9a7704 = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'E'>;
  using __fbthrift_hash_bf973e4523774cc2e393efe85aaeaecdfc90a464b96a36f42e93d457237aee7f = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'C'>;
  using __fbthrift_hash_c7e10d053d5c1a0a0743c1dfc0a38c439cd181cc30829f18cc684e286d0baf27 = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'B'>;
  using __fbthrift_hash_d0ddd5cb59fc0d5c728d0572d06ad2305f2140665e2a75a4928198f7f678a0a6 = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'E'>;
  using __fbthrift_hash_ec9bc154cafd382fcf46ef9489c25b9df04efacf81018fcf5e4c7ce728f25a1c = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'C'>;
  using containerStruct2 = ::fatal::sequence<char, 'c', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', 'S', 't', 'r', 'u', 'c', 't', '2'>;
  using cpp2 = ::fatal::sequence<char, 'c', 'p', 'p', '2'>;
  using extra__svc = ::fatal::sequence<char, 'e', 'x', 't', 'r', 'a', ':', ':', 's', 'v', 'c'>;
  using extra_services = ::fatal::sequence<char, 'e', 'x', 't', 'r', 'a', '_', 's', 'e', 'r', 'v', 'i', 'c', 'e', 's'>;
  using fieldA = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'A'>;
  using fieldB = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'B'>;
  using fieldC = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'C'>;
  using fieldD = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'D'>;
  using fieldE = ::fatal::sequence<char, 'f', 'i', 'e', 'l', 'd', 'E'>;
  using oneway_void_ret = ::fatal::sequence<char, 'o', 'n', 'e', 'w', 'a', 'y', '_', 'v', 'o', 'i', 'd', '_', 'r', 'e', 't'>;
  using oneway_void_ret_i32_i32_i32_i32_i32_param = ::fatal::sequence<char, 'o', 'n', 'e', 'w', 'a', 'y', '_', 'v', 'o', 'i', 'd', '_', 'r', 'e', 't', '_', 'i', '3', '2', '_', 'i', '3', '2', '_', 'i', '3', '2', '_', 'i', '3', '2', '_', 'i', '3', '2', '_', 'p', 'a', 'r', 'a', 'm'>;
  using oneway_void_ret_listunion_param = ::fatal::sequence<char, 'o', 'n', 'e', 'w', 'a', 'y', '_', 'v', 'o', 'i', 'd', '_', 'r', 'e', 't', '_', 'l', 'i', 's', 't', 'u', 'n', 'i', 'o', 'n', '_', 'p', 'a', 'r', 'a', 'm'>;
  using oneway_void_ret_map_setlist_param = ::fatal::sequence<char, 'o', 'n', 'e', 'w', 'a', 'y', '_', 'v', 'o', 'i', 'd', '_', 'r', 'e', 't', '_', 'm', 'a', 'p', '_', 's', 'e', 't', 'l', 'i', 's', 't', '_', 'p', 'a', 'r', 'a', 'm'>;
  using oneway_void_ret_struct_param = ::fatal::sequence<char, 'o', 'n', 'e', 'w', 'a', 'y', '_', 'v', 'o', 'i', 'd', '_', 'r', 'e', 't', '_', 's', 't', 'r', 'u', 'c', 't', '_', 'p', 'a', 'r', 'a', 'm'>;
  using opt_fieldA = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'A'>;
  using opt_fieldB = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'B'>;
  using opt_fieldC = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'C'>;
  using opt_fieldE = ::fatal::sequence<char, 'o', 'p', 't', '_', 'f', 'i', 'e', 'l', 'd', 'E'>;
  using param1 = ::fatal::sequence<char, 'p', 'a', 'r', 'a', 'm', '1'>;
  using param2 = ::fatal::sequence<char, 'p', 'a', 'r', 'a', 'm', '2'>;
  using param3 = ::fatal::sequence<char, 'p', 'a', 'r', 'a', 'm', '3'>;
  using param4 = ::fatal::sequence<char, 'p', 'a', 'r', 'a', 'm', '4'>;
  using param5 = ::fatal::sequence<char, 'p', 'a', 'r', 'a', 'm', '5'>;
  using req_fieldA = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'A'>;
  using req_fieldB = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'B'>;
  using req_fieldC = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'C'>;
  using req_fieldE = ::fatal::sequence<char, 'r', 'e', 'q', '_', 'f', 'i', 'e', 'l', 'd', 'E'>;
  using simple_function = ::fatal::sequence<char, 's', 'i', 'm', 'p', 'l', 'e', '_', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n'>;
  using throws_function = ::fatal::sequence<char, 't', 'h', 'r', 'o', 'w', 's', '_', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n'>;
  using throws_function2 = ::fatal::sequence<char, 't', 'h', 'r', 'o', 'w', 's', '_', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', '2'>;
  using throws_function3 = ::fatal::sequence<char, 't', 'h', 'r', 'o', 'w', 's', '_', 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n', '3'>;
};

struct extra_services_module_traits {
  using strings = __fbthrift_strings_extra_services;
  using name = strings::extra_services;
  using namespaces = ::fatal::list<
      ::fatal::pair<strings::cpp2, strings::extra__svc>
  >;
  using enums = ::fatal::list<
  >;
  using unions = ::fatal::list<
  >;
  using structs = ::fatal::list<
      ::fatal::pair<::extra::svc::containerStruct2, strings::containerStruct2>
  >;
  using constants = ::fatal::list<
  >;
  using services = ::fatal::list<
      strings::ExtraService
  >;
};

} // __fbthrift_refl

class extra_services_tags {
  using __fbthrift_strings = __fbthrift_refl::__fbthrift_strings_extra_services;
  struct __fbthrift_languages {
    using cpp2 = __fbthrift_strings::cpp2;
  };
  struct __fbthrift_enums {
  };
  struct __fbthrift_unions {
  };
  struct __fbthrift_structs {
    using containerStruct2 = __fbthrift_strings::containerStruct2;
  };
  struct __fbthrift_constants {
  };
  struct __fbthrift_services {
    using ExtraService = __fbthrift_strings::ExtraService;
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

THRIFT_REGISTER_REFLECTION_METADATA(extra_services_tags::module, __fbthrift_refl::extra_services_module_traits);

}} // extra::svc
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_fatal_types.h"
