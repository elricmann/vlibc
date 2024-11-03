// MIT License
//
// Copyright (c) 2024 Elric Neumann
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

// KLIBC_STDINT_H

#define KLIBC_INT8_MIN -128
#define KLIBC_INT8_MAX 127
#define KLIBC_UINT8_MAX 255

#define KLIBC_INT16_MIN -32768
#define KLIBC_INT16_MAX 32767
#define KLIBC_UINT16_MAX 65535

#define KLIBC_INT32_MIN -2147483648
#define KLIBC_INT32_MAX 2147483647
#define KLIBC_UINT32_MAX 4294967295U

#define KLIBC_INT64_MIN -9223372036854775808LL
#define KLIBC_INT64_MAX 9223372036854775807LL
#define KLIBC_UINT64_MAX 18446744073709551615ULL

#define KLIBC_INT_FAST8_MIN KLIBC_INT8_MIN
#define KLIBC_INT_FAST8_MAX KLIBC_INT8_MAX
#define KLIBC_UINT_FAST8_MAX KLIBC_UINT8_MAX

#define KLIBC_INT_FAST16_MIN KLIBC_INT16_MIN
#define KLIBC_INT_FAST16_MAX KLIBC_INT16_MAX
#define KLIBC_UINT_FAST16_MAX KLIBC_UINT16_MAX

#define KLIBC_INT_FAST32_MIN KLIBC_INT32_MIN
#define KLIBC_INT_FAST32_MAX KLIBC_INT32_MAX
#define KLIBC_UINT_FAST32_MAX KLIBC_UINT32_MAX

#define KLIBC_INT_FAST64_MIN KLIBC_INT64_MIN
#define KLIBC_INT_FAST64_MAX KLIBC_INT64_MAX
#define KLIBC_UINT_FAST64_MAX KLIBC_UINT64_MAX

#define KLIBC_INT_LEAST8_MIN KLIBC_INT8_MIN
#define KLIBC_INT_LEAST8_MAX KLIBC_INT8_MAX
#define KLIBC_UINT_LEAST8_MAX KLIBC_UINT8_MAX

#define KLIBC_INT_LEAST16_MIN KLIBC_INT16_MIN
#define KLIBC_INT_LEAST16_MAX KLIBC_INT16_MAX
#define KLIBC_UINT_LEAST16_MAX KLIBC_UINT16_MAX

#define KLIBC_INT_LEAST32_MIN KLIBC_INT32_MIN
#define KLIBC_INT_LEAST32_MAX KLIBC_INT32_MAX
#define KLIBC_UINT_LEAST32_MAX KLIBC_UINT32_MAX

#define KLIBC_INT_LEAST64_MIN KLIBC_INT64_MIN
#define KLIBC_INT_LEAST64_MAX KLIBC_INT64_MAX
#define KLIBC_UINT_LEAST64_MAX KLIBC_UINT64_MAX

#define KLIBC_INTMAX_MIN KLIBC_INT64_MIN
#define KLIBC_INTMAX_MAX KLIBC_INT64_MAX
#define KLIBC_UINTMAX_MAX KLIBC_UINT64_MAX

#define KLIBC_INTPTR_MIN KLIBC_INT64_MIN
#define KLIBC_INTPTR_MAX KLIBC_INT64_MAX
#define KLIBC_UINTPTR_MAX KLIBC_UINT64_MAX

typedef signed char klibc_int8_t;
typedef unsigned char klibc_uint8_t;

typedef signed short klibc_int16_t;
typedef unsigned short klibc_uint16_t;

typedef signed int klibc_int32_t;
typedef unsigned int klibc_uint32_t;

typedef signed long long klibc_int64_t;
typedef unsigned long long klibc_uint64_t;

typedef signed char klibc_int_fast8_t;
typedef unsigned char klibc_uint_fast8_t;

typedef signed short klibc_int_fast16_t;
typedef unsigned short klibc_uint_fast16_t;

typedef signed int klibc_int_fast32_t;
typedef unsigned int klibc_uint_fast32_t;

typedef signed long long klibc_int_fast64_t;
typedef unsigned long long klibc_uint_fast64_t;

typedef signed char klibc_int_least8_t;
typedef unsigned char klibc_uint_least8_t;

typedef signed short klibc_int_least16_t;
typedef unsigned short klibc_uint_least16_t;

typedef signed int klibc_int_least32_t;
typedef unsigned int klibc_uint_least32_t;

typedef signed long long klibc_int_least64_t;
typedef unsigned long long klibc_uint_least64_t;

typedef signed long long klibc_intmax_t;
typedef unsigned long long klibc_uintmax_t;

typedef signed long long klibc_intptr_t;
typedef unsigned long long klibc_uintptr_t;
