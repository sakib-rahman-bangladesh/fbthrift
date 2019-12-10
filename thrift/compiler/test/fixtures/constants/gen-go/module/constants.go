// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift-go"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

const MyInt = 1337
const Name = "Mark Zuckerberg"
var States []map[string]int32
const X = 1
const Y = 1000000
const Z = 1e+09
const ZeroDoubleValue = 0
const LongDoubleValue = 2.59961e-05
var MyCompany MyCompany
var Foo MyStringIdentifier
var Bar MyIntIdentifier
var Mymap MyMapIdentifier
var Instagram *Internship
var PartialConst *Internship
var KRanges []*Range
var InternList []*Internship
var Pod_0 *Struct1
var Pod_1 *Struct1
var Pod_2 *Struct2
var Pod_3 *Struct3
var U_1_1 *Union1
var U_1_2 *Union1
var U_1_3 *Union1
var U_2_1 *Union2
var U_2_2 *Union2
var U_2_3 *Union2
var U_2_4 *Union2
var U_2_5 *Union2
var U_2_6 *Union2
const Apostrophe = "'"
const TripleApostrophe = "'''"
const QuotationMark = "\""
const Backslash = "\\\\"
const EscapedA = "\\x61"
var Char2ascii map[string]int32
var EscapedStrings []string
const FalseC = false
const TrueC = true
const ZeroByte = 0
const Zero16 = 0
const Zero32 = 0
const Zero64 = 0
const ZeroDotZero = 0
const EmptyString = ""
var EmptyIntList []int32
var EmptyStringList []string
var EmptyIntSet []int32
var EmptyStringSet []string
var EmptyIntIntMap map[int32]int32
var EmptyIntStringMap map[int32]string
var EmptyStringIntMap map[string]int32
var EmptyStringStringMap map[string]string

func init() {
States = []map[string]int32{
  map[string]int32{
    "San Diego": 3211000,
    "Sacramento": 479600,
    "SF": 837400,
  },
  map[string]int32{
    "New York": 8406000,
    "Albany": 98400,
  },
}

MyCompany = 0

Foo = "foo"

Bar = 42

Mymap = map[string]string{
  "keys": "values",
}

Instagram = &Internship{
  Weeks: 12,
  Title: "Software Engineer",
  Employer:   3,
}

PartialConst = &Internship{
  Weeks: 8,
  Title: "Some Job",
}

KRanges = []*Range{
  &Range{
    Min: 1,
    Max: 2,
  },
  &Range{
    Min: 5,
    Max: 6,
  },
}

InternList = []*Internship{
  &Internship{
    Weeks: 12,
    Title: "Software Engineer",
    Employer:     3,
  },
  &Internship{
    Weeks: 10,
    Title: "Sales Intern",
    Employer:     0,
  },
}

Pod_0 = &Struct1{
}

Pod_1 = &Struct1{
  A: 10,
  B: "foo",
}

Pod_2 = &Struct2{
  A: 98,
  B: "gaz",
  C: &Struct1{
    A: 12,
    B: "bar",
  },
  D: []int32{
    11,
    22,
    33,
  },
}

Pod_3 = &Struct3{
  A: "abc",
  B: 456,
  C: &Struct2{
    A: 888,
    C: &Struct1{
      B: "gaz",
    },
    D: []int32{
      1,
      2,
      3,
    },
  },
}

U_1_1 = &Union1{
  I: 97,
}

U_1_2 = &Union1{
  D: 5.6,
}

U_1_3 = &Union1{
}

U_2_1 = &Union2{
  I: 51,
}

U_2_2 = &Union2{
  D: 6.7,
}

U_2_3 = &Union2{
  S: &Struct1{
    A: 8,
    B: "abacabb",
  },
}

U_2_4 = &Union2{
  U: &Union1{
    I: 43,
  },
}

U_2_5 = &Union2{
  U: &Union1{
    D: 9.8,
  },
}

U_2_6 = &Union2{
  U: &Union1{
  },
}

Char2ascii = map[string]int32{
  "'": 39,
  "\"": 34,
  "\\\\": 92,
  "\\x61": 97,
}

EscapedStrings = []string{
  "\\x61",
  "\\xab",
  "\\x6a",
  "\\xa6",
  "\\x61yyy",
  "\\xabyyy",
  "\\x6ayyy",
  "\\xa6yyy",
  "zzz\\x61",
  "zzz\\xab",
  "zzz\\x6a",
  "zzz\\xa6",
  "zzz\\x61yyy",
  "zzz\\xabyyy",
  "zzz\\x6ayyy",
  "zzz\\xa6yyy",
}

EmptyIntList = []int32{
}

EmptyStringList = []string{
}

EmptyIntSet = []int32{
}

EmptyStringSet = []string{
}

EmptyIntIntMap = map[int32]int32{
}

EmptyIntStringMap = map[int32]string{
}

EmptyStringIntMap = map[string]int32{
}

EmptyStringStringMap = map[string]string{
}

}

