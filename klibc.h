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

#define KLIBC_BOOL_WIDTH 1 // since (C23)
#define KLIBC_CHAR_BIT 8
#define KLIBC_MB_LEN_MAX 4
#define KLIBC_CHAR_WIDTH KLIBC_CHAR_BIT // since (C23)

#define KLIBC_CHAR_MIN (-128)
#define KLIBC_CHAR_MAX 127

#define KLIBC_SCHAR_WIDTH 8  // since (C23)
#define KLIBC_SHRT_WIDTH 16  // since (C23)
#define KLIBC_INT_WIDTH 32   // since (C23)
#define KLIBC_LONG_WIDTH 64  // since (C23)
#define KLIBC_LLONG_WIDTH 64 // since (C23)

#define KLIBC_SCHAR_MIN (-128)
#define KLIBC_SHRT_MIN (-32768)
#define KLIBC_INT_MIN (-2147483648)
#define KLIBC_LONG_MIN (-9223372036854775808L)
#define KLIBC_LLONG_MIN (-9223372036854775808LL) // since (C99)

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
#define KLIBC_ULLONG_MAX 18446744073709551615ULL // since (C99)

// KLIBC_STDBOOL_H

#define bool _Bool                      // since (C99), removed in (C23)
#define true 1                          // since (C99), removed in (C23)
#define false 0                         // since (C99), removed in (C23)
#define __bool_true_false_are_defined 1 // since (C99), deprecated in (C23)

// KLIBC_STDALIGN_H

#define alignas _Alignas       // since (C11), removed in (C23)
#define alignof _Alignof       // since (C11), removed in (C23)
#define __alignas_is_defined 1 // since (C11), removed in (C23)
#define __alignof_is_defined 1 // since (C11), removed in (C23)

// KLIBC_STDNORETURN_H

#define noreturn _Noreturn // since (C11), deprecated in (C23)

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

/**
 * @brief Computes the square root of a given non-negative number using the Newton-Raphson method.
 * @param x The input value.
 * @return The square root of `x`, or `KLIBC_NAN` if `x` is negative.
 */
double klibc_sqrt(double x) {
  if (x < 0.0)
    return KLIBC_NAN;
  if (x == 0.0)
    return 0.0;

  double n = x, epsilon = 1e-10;

  while (klibc_fabs(n * n - x) > epsilon) {
    n = (n + x / n) * 0.5;
  }

  return n;
}

/**
 * @brief Computes the sine of a given angle in radians using the Taylor series expansion.
 * @param x The angle in radians.
 * @return The sine of `x`.
 */
double klibc_sin(double x) {
  x = klibc_fmod(x, 2 * KLIBC_M_PI);

  double acc = 0.0, t = x, x2 = x * x;
  int n = 1;

  while (klibc_fabs(t) > 1e-10) {
    acc += t;
    t *= -x2 / ((2 * n) * (2 * n + 1));
    n++;
  }

  return acc;
}

/**
 * @brief Computes the cosine of a given angle in radians using the Taylor series expansion.
 * @param x The angle in radians.
 * @return The cosine of `x`.
 */
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

/**
 * @brief Computes the arcsine (inverse sine) of a given value using the Taylor series expansion.
 * @param x The input value. Must be within the range [-1, 1].
 * @return The arcsine of `x` in radians, or `KLIBC_NAN` if `x` is outside the valid range.
 */
double klibc_asin(double x) {
  if (x < -1.0 || x > 1.0)
    return KLIBC_NAN;

  // x = klibc_fmod(x, 2 * KLIBC_M_PI);

  double acc = x, t = x, x2 = x * x;
  int n = 1;

  while (klibc_fabs(t) > 1e-10) {
    t *= (2.0 * n - 1) * x2 / (2.0 * n);
    acc += t / (2 * n + 1);
    n++;
  }

  return acc;
}

/**
 * @brief Computes the arccosine (inverse cosine) of a given value.
 * @param x The input value. Must be within the range [-1, 1].
 * @return The arccosine of `x` in radians, or `KLIBC_NAN` if `x` is outside the valid range.
 *
 * @note This function computes arccosine using the identity: acos(x) = π/2 - asin(x).
 */
double klibc_acos(double x) { return KLIBC_M_PI_2 - klibc_asin(x); }

/**
 * @brief Computes the arctangent (inverse tangent) of a given value using the Taylor series expansion.
 * @param x The input value.
 * @return The arctangent of `x` in radians.
 *
 * @note For values of x > 1, this function uses the identity: atan(x) = π/2 - atan(1/x) to
 *       improve convergence. The series expansion is applied directly for values of `x` within
 *       the range [-1, 1] for accuracy (each approach mitigates floating-point errors).
 */
double klibc_atan(double x) {
  if (x > 1.0)
    return KLIBC_M_PI_2 - klibc_atan(1.0 / x);

  double acc = x, t = x, x2 = x * x;
  int n = 1;

  while (klibc_fabs(t) > 1e-10) {
    t *= -x2;
    acc += t / (2 * n + 1);
    n++;
  }

  return acc;
}

/**
 * @brief Computes the exponential function \( e^x \) using the Taylor series expansion.
 * @param x The exponent to which \( e \) is raised.
 * @return The value of \( e^x \).
 */
double klibc_exp(double x) {
  double acc = 1.0, t = 1.0;
  int n = 1;

  while (klibc_fabs(t) > 1e-10) {
    t *= x / n;
    acc += t;
    n++;
  }

  return acc;
}

/**
 * @brief Computes the natural logarithm of a given positive value using a series expansion.
 * @param x The input value. Must be positive.
 * @return The natural logarithm of `x`, or `KLIBC_NAN` if `x` is non-positive.
 */
double klibc_log(double x) {
  if (x <= 0.0)
    return KLIBC_NAN;

  double acc = 0.0, t = (x - 1) / (x + 1), x2 = t * t;
  int n = 1;

  while (klibc_fabs(t) > 1e-10) {
    acc += t / (2 * n - 1);
    t *= x2;
    n++;
  }

  return 2 * acc;
}

/**
 * @brief Computes the base-10 logarithm of a given positive value.
 * @param x The input value. Must be positive.
 * @return The base-10 logarithm of `x`, or `KLIBC_NAN` if `x` is non-positive.
 */
double klibc_log10(double x) { return klibc_log(x) / KLIBC_M_LN10; }

/**
 * @brief Computes the power of a given base raised to a specified exponent.
 * @param base The base value.
 * @param exp The exponent.
 * @return The result of `base` raised to `exp`.
 *
 * @note Returns 0 if `base` is 0, and 1 if `exp` is 0.
 */
double klibc_pow(double base, double exp) {
  if (base == 0.0)
    return 0.0;

  if (exp == 0.0)
    return 1.0;

  return klibc_exp(exp * klibc_log(base));
}

/**
 * @brief Computes the ceiling of a given value, rounding up to the nearest integer.
 * @param x The input value.
 * @return The smallest integer greater than or equal to `x`.
 */
double klibc_ceil(double x) {
  int i = (int)x;
  return (x > (double)i) ? i + 1 : i;
}

/**
 * @brief Computes the floor of a given value, rounding down to the nearest integer.
 * @param x The input value.
 * @return The largest integer less than or equal to `x`.
 */
double klibc_floor(double x) {
  int i = (int)x;
  return (x < (double)i) ? i - 1 : i;
}

/**
 * @brief Computes the absolute value of a given number.
 * @param x The input value.
 * @return The absolute value of `x`.
 */
double klibc_fabs(double x) { return (x < 0) ? -x : x; }

/**
 * @brief Computes the floating-point remainder of the division of `x` by `y`.
 * @param x The dividend.
 * @param y The divisor.
 * @return The remainder when `x` is divided by `y`.
 */
double klibc_fmod(double x, double y) { return x - y * (int)(x / y); }

// KLIBC_STRING_H

void *klibc_memcpy(void *dest, const void *src, klibc_size_t n);
void *klibc_memmove(void *dest, const void *src, klibc_size_t n);
char *klibc_strcpy(char *dest, const char *src);
char *klibc_strncpy(char *dest, const char *src, klibc_size_t n);
char *klibc_strcat(char *dest, const char *src);
char *klibc_strncat(char *dest, const char *src, klibc_size_t n);
int klibc_memcmp(const void *s1, const void *s2, klibc_size_t n);
int klibc_strcmp(const char *s1, const char *s2);
int klibc_strncmp(const char *s1, const char *s2, klibc_size_t n);
void *klibc_memset(void *s, int c, klibc_size_t n);
klibc_size_t klibc_strlen(const char *s);
char *klibc_strchr(const char *s, int c);
char *klibc_strrchr(const char *s, int c);
klibc_size_t klibc_strspn(const char *s, const char *accept);
klibc_size_t klibc_strcspn(const char *s, const char *reject);
char *klibc_strpbrk(const char *s, const char *accept);
char *klibc_strstr(const char *haystack, const char *needle);
char *klibc_strdup(const char *s);
char *klibc_strtok(char *str, const char *delim);

/**
 * @brief Copies `n` bytes from the source memory area to the destination memory area.
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area.
 */
void *klibc_memcpy(void *dest, const void *src, klibc_size_t n) {
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (const unsigned char *)src;

  while (n--)
    *d++ = *s++;

  return dest;
}
