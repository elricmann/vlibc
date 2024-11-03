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

// KLIBC_MATH_H
// clang-format off
// @todo klibc no prefix

#define KLIBC_M_E        2.71828182845904523536
#define KLIBC_M_LOG2E    1.44269504088896340736
#define KLIBC_M_LOG10E   0.43429448190325182765
#define KLIBC_M_LN2      0.69314718055994530942
#define KLIBC_M_LN10     2.30258509299404568402
#define KLIBC_M_PI       3.14159265358979323846
#define KLIBC_M_PI_2     1.57079632679489661923
#define KLIBC_M_PI_4     0.78539816339744830962
#define KLIBC_M_1_PI     0.31830988618379067154
#define KLIBC_M_2_PI     0.63661977236758134308
#define KLIBC_M_2_SQRTPI 1.12837916709551257390
#define KLIBC_M_SQRT2    1.41421356237309504880
#define KLIBC_M_SQRT1_2  0.70710678118654752440
#define KLIBC_HUGE_VAL   (1.0/0.0)
#define KLIBC_INFINITY   (1.0/0.0)
#define KLIBC_NAN        (0.0/0.0)

double klibc_sqrt(double x);
double klibc_sin(double x);
double klibc_cos(double x);
double klibc_tan(double x);
double klibc_asin(double x);
double klibc_acos(double x);
double klibc_atan(double x);
double klibc_atan2(double y, double x);
double klibc_exp(double x);
double klibc_log(double x);
double klibc_log10(double x);
double klibc_pow(double base, double exp);
double klibc_ceil(double x);
double klibc_floor(double x);
double klibc_fabs(double x);
double klibc_fmod(double x, double y);

// clang-format on
