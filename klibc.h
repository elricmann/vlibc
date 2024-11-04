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

#define KLIBC_PTRDIFF_MIN KLIBC_INT64_MIN
#define KLIBC_PTRDIFF_MAX KLIBC_INT64_MAX

#define KLIBC_WCHAR_MIN KLIBC_INT32_MIN
#define KLIBC_WCHAR_MAX KLIBC_INT32_MAX

#define KLIBC_WINT_MIN KLIBC_INT32_MIN
#define KLIBC_WINT_MAX KLIBC_INT32_MAX

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

// KLIBC_STDDEF_H

#define KLIBC_NULL ((void *)0)

typedef int klibc_wchar_t;
typedef unsigned long long klibc_size_t;
typedef signed long long klibc_ptrdiff_t;

#define KLIBC_OFFSETOF(t, m) ((klibc_size_t) & (((t *)0)->m))

// KLIBC_LIMITS_H

#define KLIBC_BOOL_WIDTH 1  // since (C23)
#define KLIBC_CHAR_BIT 8
#define KLIBC_MB_LEN_MAX 4
#define KLIBC_CHAR_WIDTH KLIBC_CHAR_BIT  // since (C23)

#define KLIBC_CHAR_MIN (-128)
#define KLIBC_CHAR_MAX 127

#define KLIBC_SCHAR_WIDTH 8   // since (C23)
#define KLIBC_SHRT_WIDTH 16   // since (C23)
#define KLIBC_INT_WIDTH 32    // since (C23)
#define KLIBC_LONG_WIDTH 64   // since (C23)
#define KLIBC_LLONG_WIDTH 64  // since (C23)

#define KLIBC_SCHAR_MIN (-128)
#define KLIBC_SHRT_MIN (-32768)
#define KLIBC_INT_MIN (-2147483648)
#define KLIBC_LONG_MIN (-9223372036854775808L)
#define KLIBC_LLONG_MIN (-9223372036854775808LL)  // since (C99)

#define KLIBC_SCHAR_MAX 127
#define KLIBC_SHRT_MAX 32767
#define KLIBC_INT_MAX 2147483647
#define KLIBC_LONG_MAX 9223372036854775807L
#define KLIBC_LLONG_MAX 9223372036854775807LL

#define KLIBC_UCHAR_WIDTH 8
#define KLIBC_USHRT_WIDTH 16
#define KLIBC_UINT_WIDTH 32
#define KLIBC_ULONG_WIDTH 64
#define KLIBC_ULLONG_WIDTH 64

#define KLIBC_UCHAR_MAX 255
#define KLIBC_USHRT_MAX 65535
#define KLIBC_UINT_MAX 4294967295U
#define KLIBC_ULONG_MAX 18446744073709551615UL
#define KLIBC_ULLONG_MAX 18446744073709551615ULL  // since (C99)

// KLIBC_STDBOOL_H

#define bool _Bool                       // since (C99), removed in (C23)
#define true 1                           // since (C99), removed in (C23)
#define false 0                          // since (C99), removed in (C23)
#define __bool_true_false_are_defined 1  // since (C99), deprecated in (C23)

// KLIBC_STDALIGN_H

#define alignas _Alignas        // since (C11), removed in (C23)
#define alignof _Alignof        // since (C11), removed in (C23)
#define __alignas_is_defined 1  // since (C11), removed in (C23)
#define __alignof_is_defined 1  // since (C11), removed in (C23)

// KLIBC_STDNORETURN_H

#define noreturn _Noreturn  // since (C11), deprecated in (C23)

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

/// @brief Computes the square root of a given non-negative number using the
/// Newton-Raphson method.
/// @param x The input value.
/// @return The square root of `x`, or `KLIBC_NAN` if `x` is negative.
double klibc_sqrt(double x) {
  if (x < 0.0) return KLIBC_NAN;
  if (x == 0.0) return 0.0;

  double n = x, epsilon = 1e-10;

  while (klibc_fabs(n * n - x) > epsilon) {
    n = (n + x / n) * 0.5;
  }

  return n;
}

/// @brief Computes the sine of a given angle in radians using the Taylor series
/// expansion.
/// @param x The angle in radians.
/// @return The sine of `x`.
double klibc_sin(double x) {
  x = klibc_fmod(x, 2 * KLIBC_M_PI);
  // if (x < 0) x += 360.0;
  // x = x * KLIBC_M_PI / 180.0;
  // if (x > 180.0) x -= 360.0;
  // if (x > 90.0)
  //   x = 180.0 - x;
  // else if (x < -90.0)
  //   x = -180.0 - x;

  // if (x < 0) x += 360.0;

  double acc = 0.0, t = x, x2 = x * x;
  int n = 1;

  while (klibc_fabs(t) > 1e-10) {
    acc += t;
    t *= -x2 / ((2 * n) * (2 * n + 1));
    n++;
  }

  return acc;
}

/// @brief Computes the cosine of a given angle in radians using the Taylor
/// series expansion.
/// @param x The angle in radians.
/// @return The cosine of `x`.
double klibc_cos(double x) {
  x = klibc_fmod(x, 2 * KLIBC_M_PI);

  double acc = 1.0, t = 1.0, x2 = x * x;
  int n = 1;

  while (klibc_fabs(t) > 1e-10) {
    t *= -x2 / ((2 * n - 1) * (2 * n));
    acc += t;
    n++;
  }

  return acc;
}

/**
 * @brief Computes the tangent of a given angle in radians.
 * @param x The angle in radians.
 * @return The tangent of `x`, calculated as the ratio of `sin(x)` to `cos(x)`.
 */
double klibc_tan(double x) { return klibc_sin(x) / klibc_cos(x); }

/// @brief Computes the absolute value of a given number.
/// @param x The input value.
/// @return The absolute value of `x`.
double klibc_fabs(double x) { return (x < 0) ? -x : x; }

/// @brief Computes the floating-point remainder of the division of `x` by `y`.
/// @param x The dividend.
/// @param y The divisor.
/// @return The remainder when `x` is divided by `y`.
double klibc_fmod(double x, double y) { return x - y * (int)(x / y); }
