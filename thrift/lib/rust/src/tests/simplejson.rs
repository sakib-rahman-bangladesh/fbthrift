/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// NOTE: See dep_test/cpp_compat_test.cpp for a comparison

use super::{BOOL_VALUES, DOUBLE_VALUES, INT64_VALUES};
use crate::thrift_protocol::MessageType;
use crate::ttype::TType;
use crate::{ProtocolWriter, SimpleJsonProtocol};

#[test]
fn write_bool_list() {
    let thetype = TType::Bool;
    let thelen = BOOL_VALUES.len();

    // Write
    let buf = serialize!(SimpleJsonProtocol, |p| {
        p.write_list_begin(thetype, thelen);

        for v in &BOOL_VALUES {
            p.write_list_value_begin();
            p.write_bool(*v);
        }

        p.write_list_end();
    });

    let v: serde_json::Result<serde_json::Value> = serde_json::from_slice(&buf);
    assert!(v.is_ok());
    assert_eq!(buf, "[false,true,false,false,true]");
}

#[test]
fn write_string_list() {
    let string_values = vec![
        String::from(""),
        String::from("a"),
        String::from("st[uf]f"),
        String::from("st,u:ff with spaces"),
        String::from("stuff\twith\nescape\\characters'...\"lots{of}fun</xml>"),
        String::from("UNICODE\u{1F60A}UH OH"),
    ];
    let thetype = TType::String;
    let thelen = string_values.len();

    let buf = serialize!(SimpleJsonProtocol, |p| {
        p.write_list_begin(thetype, thelen);

        for v in &string_values {
            p.write_list_value_begin();
            p.write_string(v);
        }
        p.write_list_end();
    });

    let v: serde_json::Result<serde_json::Value> = serde_json::from_slice(&buf);
    assert!(v.is_ok());
    // String in the json should be escaped
    // But unicode is left alone
    //
    // See cpp_compat_test.cpp for a comparison
    assert_eq!(
        buf,
        "[\"\",\"a\",\"st[uf]f\",\"st,\
               u:ff with spaces\",\"stuff\\twith\\nescape\\\\characters'...\\\"lots{of}fun\
               </xml>\",\"UNICODE\u{1F60A}UH OH\"]"
    );
}

#[test]
fn write_i64_list() {
    let thetype = TType::I64;
    let thelen = INT64_VALUES.len();

    let buf = serialize!(SimpleJsonProtocol, |p| {
        p.write_list_begin(thetype, thelen);

        for v in &INT64_VALUES {
            p.write_list_value_begin();
            p.write_i64(*v);
        }
        p.write_list_end();
    });

    let v: serde_json::Result<serde_json::Value> = serde_json::from_slice(&buf);
    assert!(v.is_ok());
    assert_eq!(
        buf,
        "[459,0,1,-1,-128,127,32767,2147483647,\
               -2147483535,34359738481,-35184372088719,\
               -9223372036854775808,9223372036854775807]"
    );
}

#[test]
fn write_f64_list() {
    let thetype = TType::Double;
    let thelen = DOUBLE_VALUES.len();

    let buf = serialize!(SimpleJsonProtocol, |p| {
        p.write_list_begin(thetype, thelen);

        for v in &DOUBLE_VALUES {
            p.write_list_value_begin();
            p.write_double(*v);
        }
        p.write_list_end();
    });

    // json can't handle infinity or nan
    let v: serde_json::Result<serde_json::Value> = serde_json::from_slice(&buf);
    assert!(v.is_err());

    let buf2 = serialize!(SimpleJsonProtocol, |p| {
        p.write_list_begin(thetype, thelen - 2);

        for v in &DOUBLE_VALUES {
            if v >= &::std::f64::INFINITY || v <= &::std::f64::NEG_INFINITY || v.is_nan() {
                continue;
            }
            p.write_list_value_begin();
            p.write_double(*v);
        }
        p.write_list_end();
    });

    let v: serde_json::Result<serde_json::Value> = serde_json::from_slice(&buf2);
    assert!(v.is_ok());
    assert_eq!(
        buf2,
        "[459.3,0.0,-1.0,1.0,0.5,0.3333,3.14159,\
        1.537e-38,1.673e25,6.02214179e23,-6.02214179e23]"
    );
}

#[test]
fn write_binary() {
    let buf = serialize!(SimpleJsonProtocol, |p| {
        // "1234"
        p.write_binary(&[49u8, 50u8, 51u8, 52u8]);
    });

    // the \ isnt escaped
    assert_eq!(buf, "\"MTIzNA\"");
}

#[test]
fn write_message() {
    let msg_name = String::from("hello_message");
    let msg_type = MessageType::Call;
    let seq_id = 10;

    let buf = serialize!(SimpleJsonProtocol, |p| {
        p.write_message_begin(&msg_name, msg_type, seq_id);
        p.write_message_end();
    });

    let v: serde_json::Result<serde_json::Value> = serde_json::from_slice(&buf);
    assert!(v.is_ok());
    assert_eq!(buf, "[\"hello_message\",1,10]");
}
