/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/fatal/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/visitation/for_each.h>

namespace apache {
namespace thrift {
namespace detail {

template <>
struct ForEachField<::test_cpp2::cpp_reflection::union1> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).ui_ref()...);
    f(1, static_cast<T&&>(t).ud_ref()...);
    f(2, static_cast<T&&>(t).us_ref()...);
    f(3, static_cast<T&&>(t).ue_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::union2> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).ui_2_ref()...);
    f(1, static_cast<T&&>(t).ud_2_ref()...);
    f(2, static_cast<T&&>(t).us_2_ref()...);
    f(3, static_cast<T&&>(t).ue_2_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::union3> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).ui_3_ref()...);
    f(1, static_cast<T&&>(t).ud_3_ref()...);
    f(2, static_cast<T&&>(t).us_3_ref()...);
    f(3, static_cast<T&&>(t).ue_3_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::structA> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).a_ref()...);
    f(1, static_cast<T&&>(t).b_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::unionA> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).i_ref()...);
    f(1, static_cast<T&&>(t).d_ref()...);
    f(2, static_cast<T&&>(t).s_ref()...);
    f(3, static_cast<T&&>(t).e_ref()...);
    f(4, static_cast<T&&>(t).a_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::structB> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).c_ref()...);
    f(1, static_cast<T&&>(t).d_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::structC> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).a_ref()...);
    f(1, static_cast<T&&>(t).b_ref()...);
    f(2, static_cast<T&&>(t).c_ref()...);
    f(3, static_cast<T&&>(t).d_ref()...);
    f(4, static_cast<T&&>(t).e_ref()...);
    f(5, static_cast<T&&>(t).f_ref()...);
    f(6, static_cast<T&&>(t).g_ref()...);
    f(7, static_cast<T&&>(t).h_ref()...);
    f(8, static_cast<T&&>(t).i_ref()...);
    f(9, static_cast<T&&>(t).j_ref()...);
    f(10, static_cast<T&&>(t).j1_ref()...);
    f(11, static_cast<T&&>(t).j2_ref()...);
    f(12, static_cast<T&&>(t).j3_ref()...);
    f(13, static_cast<T&&>(t).k_ref()...);
    f(14, static_cast<T&&>(t).k1_ref()...);
    f(15, static_cast<T&&>(t).k2_ref()...);
    f(16, static_cast<T&&>(t).k3_ref()...);
    f(17, static_cast<T&&>(t).l_ref()...);
    f(18, static_cast<T&&>(t).l1_ref()...);
    f(19, static_cast<T&&>(t).l2_ref()...);
    f(20, static_cast<T&&>(t).l3_ref()...);
    f(21, static_cast<T&&>(t).m1_ref()...);
    f(22, static_cast<T&&>(t).m2_ref()...);
    f(23, static_cast<T&&>(t).m3_ref()...);
    f(24, static_cast<T&&>(t).n1_ref()...);
    f(25, static_cast<T&&>(t).n2_ref()...);
    f(26, static_cast<T&&>(t).n3_ref()...);
    f(27, static_cast<T&&>(t).o1_ref()...);
    f(28, static_cast<T&&>(t).o2_ref()...);
    f(29, static_cast<T&&>(t).o3_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct1> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field0_ref()...);
    f(1, static_cast<T&&>(t).field1_ref()...);
    f(2, static_cast<T&&>(t).field2_ref()...);
    f(3, static_cast<T&&>(t).field3_ref()...);
    f(4, static_cast<T&&>(t).field4_ref()...);
    f(5, static_cast<T&&>(t).field5_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct2> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).fieldA_ref()...);
    f(1, static_cast<T&&>(t).fieldB_ref()...);
    f(2, static_cast<T&&>(t).fieldC_ref()...);
    f(3, static_cast<T&&>(t).fieldD_ref()...);
    f(4, static_cast<T&&>(t).fieldE_ref()...);
    f(5, static_cast<T&&>(t).fieldF_ref()...);
    f(6, static_cast<T&&>(t).fieldG_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct3> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).fieldA_ref()...);
    f(1, static_cast<T&&>(t).fieldB_ref()...);
    f(2, static_cast<T&&>(t).fieldC_ref()...);
    f(3, static_cast<T&&>(t).fieldD_ref()...);
    f(4, static_cast<T&&>(t).fieldE_ref()...);
    f(5, static_cast<T&&>(t).fieldF_ref()...);
    f(6, static_cast<T&&>(t).fieldG_ref()...);
    f(7, static_cast<T&&>(t).fieldH_ref()...);
    f(8, static_cast<T&&>(t).fieldI_ref()...);
    f(9, static_cast<T&&>(t).fieldJ_ref()...);
    f(10, static_cast<T&&>(t).fieldK_ref()...);
    f(11, static_cast<T&&>(t).fieldL_ref()...);
    f(12, static_cast<T&&>(t).fieldM_ref()...);
    f(13, static_cast<T&&>(t).fieldN_ref()...);
    f(14, static_cast<T&&>(t).fieldO_ref()...);
    f(15, static_cast<T&&>(t).fieldP_ref()...);
    f(16, static_cast<T&&>(t).fieldQ_ref()...);
    f(17, static_cast<T&&>(t).fieldR_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct4> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field0_ref()...);
    f(1, static_cast<T&&>(t).field1_ref()...);
    f(2, static_cast<T&&>(t).field2_ref()...);
    f(3, static_cast<T&&>(t).field3_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct5> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).field0_ref()...);
    f(1, static_cast<T&&>(t).field1_ref()...);
    f(2, static_cast<T&&>(t).field2_ref()...);
    f(3, static_cast<T&&>(t).field3_ref()...);
    f(4, static_cast<T&&>(t).field4_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct_binary> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).bi_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::dep_A_struct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).b_ref()...);
    f(1, static_cast<T&&>(t).c_ref()...);
    f(2, static_cast<T&&>(t).i_a_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::dep_B_struct> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).b_ref()...);
    f(1, static_cast<T&&>(t).c_ref()...);
    f(2, static_cast<T&&>(t).i_a_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::annotated> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).a_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::union_with_special_names> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).get_ref()...);
    f(1, static_cast<T&&>(t).getter_ref()...);
    f(2, static_cast<T&&>(t).lists_ref()...);
    f(3, static_cast<T&&>(t).maps_ref()...);
    f(4, static_cast<T&&>(t).name_ref()...);
    f(5, static_cast<T&&>(t).name_to_value_ref()...);
    f(6, static_cast<T&&>(t).names_ref()...);
    f(7, static_cast<T&&>(t).prefix_tree_ref()...);
    f(8, static_cast<T&&>(t).sets_ref()...);
    f(9, static_cast<T&&>(t).setter_ref()...);
    f(10, static_cast<T&&>(t).str_ref()...);
    f(11, static_cast<T&&>(t).strings_ref()...);
    f(12, static_cast<T&&>(t).type_ref()...);
    f(13, static_cast<T&&>(t).value_ref()...);
    f(14, static_cast<T&&>(t).value_to_name_ref()...);
    f(15, static_cast<T&&>(t).values_ref()...);
    f(16, static_cast<T&&>(t).id_ref()...);
    f(17, static_cast<T&&>(t).ids_ref()...);
    f(18, static_cast<T&&>(t).descriptor_ref()...);
    f(19, static_cast<T&&>(t).descriptors_ref()...);
    f(20, static_cast<T&&>(t).key_ref()...);
    f(21, static_cast<T&&>(t).keys_ref()...);
    f(22, static_cast<T&&>(t).annotation_ref()...);
    f(23, static_cast<T&&>(t).annotations_ref()...);
    f(24, static_cast<T&&>(t).member_ref()...);
    f(25, static_cast<T&&>(t).members_ref()...);
    f(26, static_cast<T&&>(t).field_ref()...);
    f(27, static_cast<T&&>(t).fields_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct_with_special_names> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).get_ref()...);
    f(1, static_cast<T&&>(t).getter_ref()...);
    f(2, static_cast<T&&>(t).lists_ref()...);
    f(3, static_cast<T&&>(t).maps_ref()...);
    f(4, static_cast<T&&>(t).name_ref()...);
    f(5, static_cast<T&&>(t).name_to_value_ref()...);
    f(6, static_cast<T&&>(t).names_ref()...);
    f(7, static_cast<T&&>(t).prefix_tree_ref()...);
    f(8, static_cast<T&&>(t).sets_ref()...);
    f(9, static_cast<T&&>(t).setter_ref()...);
    f(10, static_cast<T&&>(t).str_ref()...);
    f(11, static_cast<T&&>(t).strings_ref()...);
    f(12, static_cast<T&&>(t).type_ref()...);
    f(13, static_cast<T&&>(t).value_ref()...);
    f(14, static_cast<T&&>(t).value_to_name_ref()...);
    f(15, static_cast<T&&>(t).values_ref()...);
    f(16, static_cast<T&&>(t).id_ref()...);
    f(17, static_cast<T&&>(t).ids_ref()...);
    f(18, static_cast<T&&>(t).descriptor_ref()...);
    f(19, static_cast<T&&>(t).descriptors_ref()...);
    f(20, static_cast<T&&>(t).key_ref()...);
    f(21, static_cast<T&&>(t).keys_ref()...);
    f(22, static_cast<T&&>(t).annotation_ref()...);
    f(23, static_cast<T&&>(t).annotations_ref()...);
    f(24, static_cast<T&&>(t).member_ref()...);
    f(25, static_cast<T&&>(t).members_ref()...);
    f(26, static_cast<T&&>(t).field_ref()...);
    f(27, static_cast<T&&>(t).fields_ref()...);
  }
};

template <>
struct ForEachField<::test_cpp2::cpp_reflection::struct_with_indirections> {
  template <typename F, typename... T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, FOLLY_MAYBE_UNUSED T&&... t) const {
    f(0, static_cast<T&&>(t).real_ref()...);
    f(1, static_cast<T&&>(t).fake_ref()...);
    f(2, static_cast<T&&>(t).number_ref()...);
    f(3, static_cast<T&&>(t).result_ref()...);
    f(4, static_cast<T&&>(t).phrase_ref()...);
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
