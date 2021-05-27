// @generated by Thrift for src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies)]

pub use self::errors::*;
pub use self::types::*;

/// Thrift type definitions for `module`.
pub mod types {
    #![allow(clippy::redundant_closure)]


    #[derive(Default, Clone, Debug, PartialEq)]
    pub struct MapType(pub ::sorted_vector_map::SortedVectorMap);

    #[derive(Default, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct BinType(pub ::smallvec::SmallVec<[u8; 16]>);

    #[derive(Default, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct BytesType(pub ::fbthrift::builtin_types::Bytes);

    #[derive(Clone, Debug, PartialEq)]
    pub struct MyStruct {
        pub the_map: crate::types::MapType,
        pub the_bin: crate::types::BinType,
        pub inline_bin: ::smallvec::SmallVec<[u8; 32]>,
        pub the_bytes: crate::types::BytesType,
        pub inline_bytes: ::fbthrift::builtin_types::Bytes,
    }

    impl ::fbthrift::GetTType for MapType {
        const TTYPE: ::fbthrift::TType = <::std::collections::BTreeMap<::std::primitive::i32, ::std::primitive::i32> as ::fbthrift::GetTType>::TTYPE;
    }

    impl MapType {
      pub fn new(v: ::sorted_vector_map::SortedVectorMap) -> Self {
        Self(v)
      }
    }

    impl<P> ::fbthrift::Serialize<P> for MapType
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            super::r#impl::write(&self.0, p)
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for MapType
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            super::r#impl::read(p).map(MapType)
        }
    }


    impl ::fbthrift::GetTType for BinType {
        const TTYPE: ::fbthrift::TType = <::std::vec::Vec<::std::primitive::u8> as ::fbthrift::GetTType>::TTYPE;
    }

    impl BinType {
      pub fn new(v: ::smallvec::SmallVec<[u8; 16]>) -> Self {
        Self(v)
      }
    }

    impl<P> ::fbthrift::Serialize<P> for BinType
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            super::r#impl::write(&self.0, p)
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for BinType
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            super::r#impl::read(p).map(BinType)
        }
    }


    impl ::fbthrift::GetTType for BytesType {
        const TTYPE: ::fbthrift::TType = <::std::vec::Vec<::std::primitive::u8> as ::fbthrift::GetTType>::TTYPE;
    }

    impl BytesType {
      pub fn new(v: ::fbthrift::builtin_types::Bytes) -> Self {
        Self(v)
      }
    }


    impl<P> ::fbthrift::Serialize<P> for BytesType
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            self.0.write(p)
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for BytesType
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            ::fbthrift::Deserialize::read(p).map(BytesType)
        }
    }


    impl ::std::default::Default for self::MyStruct {
        fn default() -> Self {
            Self {
                the_map: ::std::default::Default::default(),
                the_bin: ::std::default::Default::default(),
                inline_bin: ::std::default::Default::default(),
                the_bytes: ::std::default::Default::default(),
                inline_bytes: ::std::default::Default::default(),
            }
        }
    }

    unsafe impl ::std::marker::Send for self::MyStruct {}
    unsafe impl ::std::marker::Sync for self::MyStruct {}

    impl ::fbthrift::GetTType for self::MyStruct {
        const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
    }

    impl<P> ::fbthrift::Serialize<P> for self::MyStruct
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_struct_begin("MyStruct");
            p.write_field_begin("the_map", ::fbthrift::TType::Map, 1);
            ::fbthrift::Serialize::write(&self.the_map, p);
            p.write_field_end();
            p.write_field_begin("the_bin", ::fbthrift::TType::String, 2);
            ::fbthrift::Serialize::write(&self.the_bin, p);
            p.write_field_end();
            p.write_field_begin("inline_bin", ::fbthrift::TType::String, 3);
            super::r#impl::write(&self.inline_bin, p);
            p.write_field_end();
            p.write_field_begin("the_bytes", ::fbthrift::TType::String, 4);
            ::fbthrift::Serialize::write(&self.the_bytes, p);
            p.write_field_end();
            p.write_field_begin("inline_bytes", ::fbthrift::TType::String, 5);
            ::fbthrift::Serialize::write(&self.inline_bytes, p);
            p.write_field_end();
            p.write_field_stop();
            p.write_struct_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for self::MyStruct
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            static FIELDS: &[::fbthrift::Field] = &[
                ::fbthrift::Field::new("inline_bin", ::fbthrift::TType::String, 3),
                ::fbthrift::Field::new("inline_bytes", ::fbthrift::TType::String, 5),
                ::fbthrift::Field::new("the_bin", ::fbthrift::TType::String, 2),
                ::fbthrift::Field::new("the_bytes", ::fbthrift::TType::String, 4),
                ::fbthrift::Field::new("the_map", ::fbthrift::TType::Map, 1),
            ];
            let mut field_the_map = ::std::option::Option::None;
            let mut field_the_bin = ::std::option::Option::None;
            let mut field_inline_bin = ::std::option::Option::None;
            let mut field_the_bytes = ::std::option::Option::None;
            let mut field_inline_bytes = ::std::option::Option::None;
            let _ = p.read_struct_begin(|_| ())?;
            loop {
                let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
                match (fty, fid as ::std::primitive::i32) {
                    (::fbthrift::TType::Stop, _) => break,
                    (::fbthrift::TType::Map, 1) => field_the_map = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::String, 2) => field_the_bin = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::String, 3) => field_inline_bin = ::std::option::Option::Some(super::r#impl::read(p)?),
                    (::fbthrift::TType::String, 4) => field_the_bytes = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (::fbthrift::TType::String, 5) => field_inline_bytes = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                    (fty, _) => p.skip(fty)?,
                }
                p.read_field_end()?;
            }
            p.read_struct_end()?;
            ::std::result::Result::Ok(Self {
                the_map: field_the_map.unwrap_or_default(),
                the_bin: field_the_bin.unwrap_or_default(),
                inline_bin: field_inline_bin.unwrap_or_default(),
                the_bytes: field_the_bytes.unwrap_or_default(),
                inline_bytes: field_inline_bytes.unwrap_or_default(),
            })
        }
    }

}

/// Error return types.
pub mod errors {
}

mod r#impl {
    use ref_cast::RefCast;

    #[derive(RefCast)]
    #[repr(transparent)]
    pub(crate) struct LocalImpl<T>(T);

    #[allow(unused)]
    pub(crate) fn write<T, P>(value: &T, p: &mut P)
    where
        LocalImpl<T>: ::fbthrift::Serialize<P>,
        P: ::fbthrift::ProtocolWriter,
    {
        ::fbthrift::Serialize::write(LocalImpl::ref_cast(value), p);
    }

    #[allow(unused)]
    pub(crate) fn read<T, P>(p: &mut P) -> ::anyhow::Result<T>
    where
        LocalImpl<T>: ::fbthrift::Deserialize<P>,
        P: ::fbthrift::ProtocolReader,
    {
        let value: LocalImpl<T> = ::fbthrift::Deserialize::read(p)?;
        ::std::result::Result::Ok(value.0)
    }

    impl<P> ::fbthrift::Serialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 16]>>
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            self.0.as_slice().write(p)
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 16]>>
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            p.read_binary()
        }
    }

    impl ::fbthrift::binary_type::BinaryType for LocalImpl<::smallvec::SmallVec<[u8; 16]>> {
        fn with_capacity(capacity: usize) -> Self {
            LocalImpl(<::smallvec::SmallVec<[u8; 16]>>::with_capacity(capacity))
        }
        fn extend_from_slice(&mut self, other: &[u8]) {
            self.0.extend_from_slice(other)
        }
        fn from_vec(vec: ::std::vec::Vec<u8>) -> Self {
            LocalImpl(::std::convert::Into::into(vec))
        }
    }

    impl<P> ::fbthrift::Serialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 32]>>
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            self.0.as_slice().write(p)
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 32]>>
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            p.read_binary()
        }
    }

    impl ::fbthrift::binary_type::BinaryType for LocalImpl<::smallvec::SmallVec<[u8; 32]>> {
        fn with_capacity(capacity: usize) -> Self {
            LocalImpl(<::smallvec::SmallVec<[u8; 32]>>::with_capacity(capacity))
        }
        fn extend_from_slice(&mut self, other: &[u8]) {
            self.0.extend_from_slice(other)
        }
        fn from_vec(vec: ::std::vec::Vec<u8>) -> Self {
            LocalImpl(::std::convert::Into::into(vec))
        }
    }

    impl<P> ::fbthrift::Serialize<P> for LocalImpl<::sorted_vector_map::SortedVectorMap<::std::primitive::i32, ::std::primitive::i32>>
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_map_begin(
                <::std::primitive::i32 as ::fbthrift::GetTType>::TTYPE,
                <::std::primitive::i32 as ::fbthrift::GetTType>::TTYPE,
                self.0.len(),
            );
            for (k, v) in &self.0 {
                p.write_map_key_begin();
                ::fbthrift::Serialize::write(k, p);
                p.write_map_value_begin();
                ::fbthrift::Serialize::write(v, p);
            }
            p.write_map_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for LocalImpl<::sorted_vector_map::SortedVectorMap<::std::primitive::i32, ::std::primitive::i32>>
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            let (_key_ty, _val_ty, len) = p.read_map_begin()?;
            let mut map = <crate::types::MapType>::with_capacity(len.unwrap_or_default());

            if let Some(0) = len {
                return Ok(LocalImpl(map));
            }

            let mut idx = 0;
            loop {
                let more = p.read_map_key_begin()?;
                if !more {
                    break;
                }
                let k: ::std::primitive::i32 = ::fbthrift::Deserialize::read(p)?;
                p.read_map_value_begin()?;
                let v: ::std::primitive::i32 = ::fbthrift::Deserialize::read(p)?;
                p.read_map_value_end()?;
                map.insert(k, v);

                idx += 1;
                if ::fbthrift::protocol::should_break(len, more, idx) {
                    break;
                }
            }
            p.read_map_end()?;
            ::std::result::Result::Ok(LocalImpl(map))
        }
    }
}
