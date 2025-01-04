// MIT License
//
// Copyright (c) 2024 Elric Neumann
//
// vlibc 0.1.0 - C standard library implementation.
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

#define VLIBC_VERSION "0.1.0"
#define VLIBC_VERSION_MAJOR 0
#define VLIBC_VERSION_MINOR 1
#define VLIBC_VERSION_PATCH 0

// VLIBC_STDINT_H

#define VLIBC_INT8_MIN -128
#define VLIBC_INT8_MAX 127
#define VLIBC_UINT8_MAX 255

#define VLIBC_INT16_MIN -32768
#define VLIBC_INT16_MAX 32767
#define VLIBC_UINT16_MAX 65535

#define VLIBC_INT32_MIN -2147483648
#define VLIBC_INT32_MAX 2147483647
#define VLIBC_UINT32_MAX 4294967295U

#define VLIBC_INT64_MIN -9223372036854775808LL
#define VLIBC_INT64_MAX 9223372036854775807LL
#define VLIBC_UINT64_MAX 18446744073709551615ULL

#define VLIBC_INT_FAST8_MIN VLIBC_INT8_MIN
#define VLIBC_INT_FAST8_MAX VLIBC_INT8_MAX
#define VLIBC_UINT_FAST8_MAX VLIBC_UINT8_MAX

#define VLIBC_INT_FAST16_MIN VLIBC_INT16_MIN
#define VLIBC_INT_FAST16_MAX VLIBC_INT16_MAX
#define VLIBC_UINT_FAST16_MAX VLIBC_UINT16_MAX

#define VLIBC_INT_FAST32_MIN VLIBC_INT32_MIN
#define VLIBC_INT_FAST32_MAX VLIBC_INT32_MAX
#define VLIBC_UINT_FAST32_MAX VLIBC_UINT32_MAX

#define VLIBC_INT_FAST64_MIN VLIBC_INT64_MIN
#define VLIBC_INT_FAST64_MAX VLIBC_INT64_MAX
#define VLIBC_UINT_FAST64_MAX VLIBC_UINT64_MAX

#define VLIBC_INT_LEAST8_MIN VLIBC_INT8_MIN
#define VLIBC_INT_LEAST8_MAX VLIBC_INT8_MAX
#define VLIBC_UINT_LEAST8_MAX VLIBC_UINT8_MAX

#define VLIBC_INT_LEAST16_MIN VLIBC_INT16_MIN
#define VLIBC_INT_LEAST16_MAX VLIBC_INT16_MAX
#define VLIBC_UINT_LEAST16_MAX VLIBC_UINT16_MAX

#define VLIBC_INT_LEAST32_MIN VLIBC_INT32_MIN
#define VLIBC_INT_LEAST32_MAX VLIBC_INT32_MAX
#define VLIBC_UINT_LEAST32_MAX VLIBC_UINT32_MAX

#define VLIBC_INT_LEAST64_MIN VLIBC_INT64_MIN
#define VLIBC_INT_LEAST64_MAX VLIBC_INT64_MAX
#define VLIBC_UINT_LEAST64_MAX VLIBC_UINT64_MAX

#define VLIBC_INTMAX_MIN VLIBC_INT64_MIN
#define VLIBC_INTMAX_MAX VLIBC_INT64_MAX
#define VLIBC_UINTMAX_MAX VLIBC_UINT64_MAX

#define VLIBC_INTPTR_MIN VLIBC_INT64_MIN
#define VLIBC_INTPTR_MAX VLIBC_INT64_MAX
#define VLIBC_UINTPTR_MAX VLIBC_UINT64_MAX

#define VLIBC_PTRDIFF_MIN VLIBC_INT64_MIN
#define VLIBC_PTRDIFF_MAX VLIBC_INT64_MAX

#define VLIBC_WCHAR_MIN VLIBC_INT32_MIN
#define VLIBC_WCHAR_MAX VLIBC_INT32_MAX

#define VLIBC_WINT_MIN VLIBC_INT32_MIN
#define VLIBC_WINT_MAX VLIBC_INT32_MAX

typedef signed char vlibc_int8_t;
typedef unsigned char vlibc_uint8_t;

typedef signed short vlibc_int16_t;
typedef unsigned short vlibc_uint16_t;

typedef signed int vlibc_int32_t;
typedef unsigned int vlibc_uint32_t;

typedef signed long long vlibc_int64_t;
typedef unsigned long long vlibc_uint64_t;

typedef signed char vlibc_int_fast8_t;
typedef unsigned char vlibc_uint_fast8_t;

typedef signed short vlibc_int_fast16_t;
typedef unsigned short vlibc_uint_fast16_t;

typedef signed int vlibc_int_fast32_t;
typedef unsigned int vlibc_uint_fast32_t;

typedef signed long long vlibc_int_fast64_t;
typedef unsigned long long vlibc_uint_fast64_t;

typedef signed char vlibc_int_least8_t;
typedef unsigned char vlibc_uint_least8_t;

typedef signed short vlibc_int_least16_t;
typedef unsigned short vlibc_uint_least16_t;

typedef signed int vlibc_int_least32_t;
typedef unsigned int vlibc_uint_least32_t;

typedef signed long long vlibc_int_least64_t;
typedef unsigned long long vlibc_uint_least64_t;

typedef signed long long vlibc_intmax_t;
typedef unsigned long long vlibc_uintmax_t;

typedef signed long long vlibc_intptr_t;
typedef unsigned long long vlibc_uintptr_t;

// VLIBC_STDDEF_H

#define VLIBC_NULL ((void *)0)

typedef int vlibc_wchar_t;
typedef unsigned long long vlibc_size_t;
typedef signed long long vlibc_ptrdiff_t;

#define VLIBC_OFFSETOF(t, m) ((vlibc_size_t) & (((t *)0)->m))

// VLIBC_LIMITS_H

#define VLIBC_BOOL_WIDTH 1  // since (C23)
#define VLIBC_CHAR_BIT 8
#define VLIBC_MB_LEN_MAX 4
#define VLIBC_CHAR_WIDTH VLIBC_CHAR_BIT  // since (C23)

#define VLIBC_CHAR_MIN (-128)
#define VLIBC_CHAR_MAX 127

#define VLIBC_SCHAR_WIDTH 8   // since (C23)
#define VLIBC_SHRT_WIDTH 16   // since (C23)
#define VLIBC_INT_WIDTH 32    // since (C23)
#define VLIBC_LONG_WIDTH 64   // since (C23)
#define VLIBC_LLONG_WIDTH 64  // since (C23)

#define VLIBC_SCHAR_MIN (-128)
#define VLIBC_SHRT_MIN (-32768)
#define VLIBC_INT_MIN (-2147483648)
#define VLIBC_LONG_MIN (-9223372036854775808L)
#define VLIBC_LLONG_MIN (-9223372036854775808LL)  // since (C99)

#define VLIBC_SCHAR_MAX 127
#define VLIBC_SHRT_MAX 32767
#define VLIBC_INT_MAX 2147483647
#define VLIBC_LONG_MAX 9223372036854775807L
#define VLIBC_LLONG_MAX 9223372036854775807LL

#define VLIBC_UCHAR_WIDTH 8
#define VLIBC_USHRT_WIDTH 16
#define VLIBC_UINT_WIDTH 32
#define VLIBC_ULONG_WIDTH 64
#define VLIBC_ULLONG_WIDTH 64

#define VLIBC_UCHAR_MAX 255
#define VLIBC_USHRT_MAX 65535
#define VLIBC_UINT_MAX 4294967295U
#define VLIBC_ULONG_MAX 18446744073709551615UL
#define VLIBC_ULLONG_MAX 18446744073709551615ULL  // since (C99)

// VLIBC_STDBOOL_H

#define bool _Bool                       // since (C99), removed in (C23)
#define true 1                           // since (C99), removed in (C23)
#define false 0                          // since (C99), removed in (C23)
#define __bool_true_false_are_defined 1  // since (C99), deprecated in (C23)

// VLIBC_STDALIGN_H

#define alignas _Alignas        // since (C11), removed in (C23)
#define alignof _Alignof        // since (C11), removed in (C23)
#define __alignas_is_defined 1  // since (C11), removed in (C23)
#define __alignof_is_defined 1  // since (C11), removed in (C23)

// VLIBC_STDNORETURN_H

#define noreturn _Noreturn  // since (C11), deprecated in (C23)

// VLIBC_STDARG_H
// clang-format off

typedef __builtin_va_list vlibc_va_list;

#define vlibc_va_start(ap, last) __builtin_va_start(ap, last)
#define vlibc_va_end(ap)         __builtin_va_end(ap)
#define vlibc_va_arg(ap, type)   __builtin_va_arg(ap, type)
#define vlibc_va_copy(dest, src) __builtin_va_copy(dest, src)

// VLIBC_MATH_H
// @todo vlibc no prefix

#define VLIBC_M_E        2.71828182845904523536
#define VLIBC_M_LOG2E    1.44269504088896340736
#define VLIBC_M_LOG10E   0.43429448190325182765
#define VLIBC_M_LN2      0.69314718055994530942
#define VLIBC_M_LN10     2.30258509299404568402
#define VLIBC_M_PI       3.14159265358979323846
#define VLIBC_M_PI_2     1.57079632679489661923
#define VLIBC_M_PI_4     0.78539816339744830962
#define VLIBC_M_1_PI     0.31830988618379067154
#define VLIBC_M_2_PI     0.63661977236758134308
#define VLIBC_M_2_SQRTPI 1.12837916709551257390
#define VLIBC_M_SQRT2    1.41421356237309504880
#define VLIBC_M_SQRT1_2  0.70710678118654752440
#define VLIBC_HUGE_VAL   (1.0/0.0)
#define VLIBC_INFINITY   (1.0/0.0)
#define VLIBC_NAN        (0.0/0.0)

double vlibc_sqrt(double x);
double vlibc_sin(double x);
double vlibc_cos(double x);
double vlibc_tan(double x);
double vlibc_asin(double x);
double vlibc_acos(double x);
double vlibc_atan(double x);
double vlibc_atan2(double y, double x);
double vlibc_exp(double x);
double vlibc_log(double x);
double vlibc_log10(double x);
double vlibc_pow(double base, double exp);
double vlibc_ceil(double x);
double vlibc_floor(double x);
double vlibc_fabs(double x);
double vlibc_fmod(double x, double y);

// clang-format on

/**
 * @brief Computes the square root of a given non-negative number using the
 * Newton-Raphson method.
 * @param x The input value.
 * @return The square root of `x`, or `VLIBC_NAN` if `x` is negative.
 */
double vlibc_sqrt(double x) {
  if (x < 0.0) return VLIBC_NAN;
  if (x == 0.0) return 0.0;

  double n = x, epsilon = 1e-10;

  while (vlibc_fabs(n * n - x) > epsilon) {
    n = (n + x / n) * 0.5;
  }

  return n;
}

/**
 * @brief Computes the sine of a given angle in radians using the Taylor series
 * expansion.
 * @param x The angle in radians.
 * @return The sine of `x`.
 */
double vlibc_sin(double x) {
  x = vlibc_fmod(x, 2 * VLIBC_M_PI);

  double acc = 0.0, t = x, x2 = x * x;
  int n = 1;

  while (vlibc_fabs(t) > 1e-10) {
    acc += t;
    t *= -x2 / ((2 * n) * (2 * n + 1));
    n++;
  }

  return acc;
}

/**
 * @brief Computes the cosine of a given angle in radians using the Taylor
 * series expansion.
 * @param x The angle in radians.
 * @return The cosine of `x`.
 */
double vlibc_cos(double x) {
  x = vlibc_fmod(x, 2 * VLIBC_M_PI);

  double acc = 1.0, t = 1.0, x2 = x * x;
  int n = 1;

  while (vlibc_fabs(t) > 1e-10) {
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
double vlibc_tan(double x) { return vlibc_sin(x) / vlibc_cos(x); }

/**
 * @brief Computes the arcsine (inverse sine) of a given value using the Taylor
 * series expansion.
 * @param x The input value. Must be within the range [-1, 1].
 * @return The arcsine of `x` in radians, or `VLIBC_NAN` if `x` is outside the
 * valid range.
 */
double vlibc_asin(double x) {
  if (x < -1.0 || x > 1.0) return VLIBC_NAN;

  // x = vlibc_fmod(x, 2 * VLIBC_M_PI);

  double acc = x, t = x, x2 = x * x;
  int n = 1;

  while (vlibc_fabs(t) > 1e-10) {
    t *= (2.0 * n - 1) * x2 / (2.0 * n);
    acc += t / (2 * n + 1);
    n++;
  }

  return acc;
}

/**
 * @brief Computes the arccosine (inverse cosine) of a given value.
 * @param x The input value. Must be within the range [-1, 1].
 * @return The arccosine of `x` in radians, or `VLIBC_NAN` if `x` is outside the
 * valid range.
 *
 * @note This function computes arccosine using the identity: acos(x) = π/2 -
 * asin(x).
 */
double vlibc_acos(double x) { return VLIBC_M_PI_2 - vlibc_asin(x); }

/**
 * @brief Computes the arctangent (inverse tangent) of a given value using the
 * Taylor series expansion.
 * @param x The input value.
 * @return The arctangent of `x` in radians.
 *
 * @note For values of x > 1, this function uses the identity: atan(x) = π/2 -
 * atan(1/x) to improve convergence. The series expansion is applied directly
 * for values of `x` within the range [-1, 1] for accuracy (each approach
 * mitigates floating-point errors).
 */
double vlibc_atan(double x) {
  if (x > 1.0) return VLIBC_M_PI_2 - vlibc_atan(1.0 / x);

  double acc = x, t = x, x2 = x * x;
  int n = 1;

  while (vlibc_fabs(t) > 1e-10) {
    t *= -x2;
    acc += t / (2 * n + 1);
    n++;
  }

  return acc;
}

/**
 * @brief Computes the exponential function \( e^x \) using the Taylor series
 * expansion.
 * @param x The exponent to which \( e \) is raised.
 * @return The value of \( e^x \).
 */
double vlibc_exp(double x) {
  double acc = 1.0, t = 1.0;
  int n = 1;

  while (vlibc_fabs(t) > 1e-10) {
    t *= x / n;
    acc += t;
    n++;
  }

  return acc;
}

/**
 * @brief Computes the natural logarithm of a given positive value using a
 * series expansion.
 * @param x The input value. Must be positive.
 * @return The natural logarithm of `x`, or `VLIBC_NAN` if `x` is non-positive.
 */
double vlibc_log(double x) {
  if (x <= 0.0) return VLIBC_NAN;

  double acc = 0.0, t = (x - 1) / (x + 1), x2 = t * t;
  int n = 1;

  while (vlibc_fabs(t) > 1e-10) {
    acc += t / (2 * n - 1);
    t *= x2;
    n++;
  }

  return 2 * acc;
}

/**
 * @brief Computes the base-10 logarithm of a given positive value.
 * @param x The input value. Must be positive.
 * @return The base-10 logarithm of `x`, or `VLIBC_NAN` if `x` is non-positive.
 */
double vlibc_log10(double x) { return vlibc_log(x) / VLIBC_M_LN10; }

/**
 * @brief Computes the power of a given base raised to a specified exponent.
 * @param base The base value.
 * @param exp The exponent.
 * @return The result of `base` raised to `exp`.
 *
 * @note Returns 0 if `base` is 0, and 1 if `exp` is 0.
 */
double vlibc_pow(double base, double exp) {
  if (base == 0.0) return 0.0;

  if (exp == 0.0) return 1.0;

  return vlibc_exp(exp * vlibc_log(base));
}

/**
 * @brief Computes the ceiling of a given value, rounding up to the nearest
 * integer.
 * @param x The input value.
 * @return The smallest integer greater than or equal to `x`.
 */
double vlibc_ceil(double x) {
  int i = (int)x;
  return (x > (double)i) ? i + 1 : i;
}

/**
 * @brief Computes the floor of a given value, rounding down to the nearest
 * integer.
 * @param x The input value.
 * @return The largest integer less than or equal to `x`.
 */
double vlibc_floor(double x) {
  int i = (int)x;
  return (x < (double)i) ? i - 1 : i;
}

/**
 * @brief Computes the absolute value of a given number.
 * @param x The input value.
 * @return The absolute value of `x`.
 */
double vlibc_fabs(double x) { return (x < 0) ? -x : x; }

/**
 * @brief Computes the floating-point remainder of the division of `x` by `y`.
 * @param x The dividend.
 * @param y The divisor.
 * @return The remainder when `x` is divided by `y`.
 */
double vlibc_fmod(double x, double y) { return x - y * (int)(x / y); }

// VLIBC_CTYPE_H

int vlibc_isalnum(int c);
int vlibc_isalpha(int c);
int vlibc_iscntrl(int c);
int vlibc_isdigit(int c);
int vlibc_isgraph(int c);
int vlibc_islower(int c);
int vlibc_isprint(int c);
int vlibc_ispunct(int c);
int vlibc_isspace(int c);
int vlibc_isupper(int c);
int vlibc_isxdigit(int c);
int vlibc_tolower(int c);
int vlibc_toupper(int c);

/**
 * @brief Checks if the given character is alphanumeric (a letter or a digit).
 * @param c Character to be checked.
 * @return Non-zero if `c` is alphanumeric, zero otherwise.
 */
int vlibc_isalnum(int c) { return vlibc_isalpha(c) || vlibc_isdigit(c); }

/**
 * @brief Checks if the given character is an alphabetic letter (uppercase or
 * lowercase).
 * @param c Character to be checked.
 * @return Non-zero if `c` is alphabetic, zero otherwise.
 */
int vlibc_isalpha(int c) {
  return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

/**
 * @brief Checks if the given character is a control character.
 * @param c Character to be checked.
 * @return Non-zero if `c` is a control character, zero otherwise.
 */
int vlibc_iscntrl(int c) { return (c >= 0 && c <= 0x1F) || c == 0x7F; }

/**
 * @brief Checks if the given character is a decimal digit.
 * @param c Character to be checked.
 * @return Non-zero if `c` is a digit, zero otherwise.
 */
int vlibc_isdigit(int c) { return (c >= '0' && c <= '9'); }

/**
 * @brief Checks if the given character has a graphical representation other
 * than space.
 * @param c Character to be checked.
 * @return Non-zero if `c` is a graphic character, zero otherwise.
 */
int vlibc_isgraph(int c) { return c > 0x20 && c < 0x7F; }

/**
 * @brief Checks if the given character is a lowercase letter.
 * @param c Character to be checked.
 * @return Non-zero if `c` is lowercase, zero otherwise.
 */
int vlibc_islower(int c) { return (c >= 'a' && c <= 'z'); }

/**
 * @brief Checks if the given character is printable, including space.
 * @param c Character to be checked.
 * @return Non-zero if `c` is printable, zero otherwise.
 */
int vlibc_isprint(int c) { return c >= 0x20 && c < 0x7F; }

/**
 * @brief Checks if the given character is a punctuation mark.
 * @param c Character to be checked.
 * @return Non-zero if `c` is a punctuation character, zero otherwise.
 */
int vlibc_ispunct(int c) { return vlibc_isgraph(c) && !vlibc_isalnum(c); }

/**
 * @brief Checks if the given character is a whitespace character (space, tab,
 * newline, etc.).
 * @param c Character to be checked.
 * @return Non-zero if `c` is whitespace, zero otherwise.
 */
int vlibc_isspace(int c) { return c == ' ' || (c >= '\t' && c <= '\r'); }

/**
 * @brief Checks if the given character is an uppercase letter.
 * @param c Character to be checked.
 * @return Non-zero if `c` is uppercase, zero otherwise.
 */
int vlibc_isupper(int c) { return (c >= 'A' && c <= 'Z'); }

/**
 * @brief Checks if the given character is a hexadecimal digit (0-9, A-F, a-f).
 * @param c Character to be checked.
 * @return Non-zero if `c` is a hexadecimal digit, zero otherwise.
 */
int vlibc_isxdigit(int c) {
  return vlibc_isdigit(c) || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f');
}

/**
 * @brief Converts an uppercase letter to its lowercase equivalent.
 * @param c Character to be converted.
 * @return Lowercase equivalent of `c` if it is uppercase; otherwise, returns
 * `c`.
 */
int vlibc_tolower(int c) { return vlibc_isupper(c) ? c + 32 : c; }

/**
 * @brief Converts a lowercase letter to its uppercase equivalent.
 * @param c Character to be converted.
 * @return Uppercase equivalent of `c` if it is lowercase; otherwise, returns
 * `c`.
 */
int vlibc_toupper(int c) { return vlibc_islower(c) ? c - 32 : c; }

// VLIBC_STRING_H

void *vlibc_memcpy(void *dest, const void *src, vlibc_size_t n);
void *vlibc_memmove(void *dest, const void *src, vlibc_size_t n);
char *vlibc_strcpy(char *dest, const char *src);
char *vlibc_strncpy(char *dest, const char *src, vlibc_size_t n);
char *vlibc_strcat(char *dest, const char *src);
char *vlibc_strncat(char *dest, const char *src, vlibc_size_t n);
int vlibc_memcmp(const void *s1, const void *s2, vlibc_size_t n);
int vlibc_strcmp(const char *s1, const char *s2);
int vlibc_strncmp(const char *s1, const char *s2, vlibc_size_t n);
void *vlibc_memset(void *s, int c, vlibc_size_t n);
vlibc_size_t vlibc_strlen(const char *s);
char *vlibc_strchr(const char *s, int c);
char *vlibc_strrchr(const char *s, int c);
vlibc_size_t vlibc_strspn(const char *s, const char *accept);
vlibc_size_t vlibc_strcspn(const char *s, const char *reject);
char *vlibc_strpbrk(const char *s, const char *accept);
char *vlibc_strstr(const char *haystack, const char *needle);
char *vlibc_strdup(const char *s);  // requires alloc
char *vlibc_strtok(char *str, const char *delim);

/**
 * @brief Copies `n` bytes from the source memory area to the destination memory
 * area.
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area.
 */
void *vlibc_memcpy(void *dest, const void *src, vlibc_size_t n) {
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (const unsigned char *)src;

  while (n--) *d++ = *s++;

  return dest;
}

/**
 * @brief Moves `n` bytes from the source memory area to the destination memory
 * area, handling overlapping regions safely.
 * @param dest Pointer to the destination memory area.
 * @param src Pointer to the source memory area.
 * @param n Number of bytes to move.
 * @return Pointer to the destination memory area.
 */
void *vlibc_memmove(void *dest, const void *src, vlibc_size_t n) {
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (const unsigned char *)src;

  if (d < s)
    while (n--) *d++ = *s++;
  else {
    d += n;
    s += n;

    while (n--) *--d = *--s;
  }

  return dest;
}

/**
 * @brief Copies the string pointed to by `src` to `dest`, including the
 * terminating null byte.
 * @param dest Pointer to the destination buffer.
 * @param src Pointer to the source null-terminated string.
 * @return Pointer to the destination buffer.
 */
char *vlibc_strcpy(char *dest, const char *src) {
  char *d = dest;

  while ((*d++ = *src++));

  return dest;
}

/**
 * @brief Copies up to `n` characters from the string pointed to by `src` to
 * `dest`. If `src` is shorter than `n`, the remaining characters in `dest` will
 * be null-padded.
 * @param dest Pointer to the destination buffer.
 * @param src Pointer to the source null-terminated string.
 * @param n Maximum number of characters to copy.
 * @return Pointer to the destination buffer.
 */
char *vlibc_strncpy(char *dest, const char *src, vlibc_size_t n) {
  char *d = dest;

  while (n && (*d++ = *src++)) n--;

  while (n--) *d++ = '\0';

  return dest;
}

/**
 * @brief Concatenates the string pointed to by `src` to the end of the string
 * pointed to by `dest`. The destination buffer must be large enough to hold
 * both strings and the terminating null byte.
 * @param dest Pointer to the destination buffer containing the initial string.
 * @param src Pointer to the source null-terminated string to append.
 * @return Pointer to the destination buffer.
 */
char *vlibc_strcat(char *dest, const char *src) {
  char *d = dest;

  while (*d) d++;

  while ((*d++ = *src++));

  return dest;
}

/**
 * @brief Concatenates up to `n` characters from the string pointed to by `src`
 * to the end of the string pointed to by `dest`. The destination buffer must be
 * large enough to hold the result, including the terminating null byte.
 * @param dest Pointer to the destination buffer containing the initial string.
 * @param src Pointer to the source null-terminated string to append.
 * @param n Maximum number of characters to append from `src`.
 * @return Pointer to the destination buffer.
 */
char *vlibc_strncat(char *dest, const char *src, vlibc_size_t n) {
  char *d = dest;

  while (*d) d++;

  while (n-- && (*d++ = *src++));

  *d = '\0';

  return dest;
}

/**
 * @brief Compares the first `n` bytes of two memory areas.
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if `s1` is
 * found, respectively, to be less than, equal to, or greater than `s2`.
 *
 * @note The comparison is done byte-by-byte and stops at the first difference
 * found or after `n` bytes.
 */
int vlibc_memcmp(const void *s1, const void *s2, vlibc_size_t n) {
  const unsigned char *p1 = (const unsigned char *)s1;
  const unsigned char *p2 = (const unsigned char *)s2;

  while (n--) {
    if (*p1 != *p2) return *p1 - *p2;

    p1++;
    p2++;
  }

  return 0;
}

/**
 * @brief Compares two null-terminated strings lexicographically.
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @return An integer less than, equal to, or greater than zero if `s1` is
 * found, respectively, to be less than, equal to, or greater than `s2`.
 */
int vlibc_strcmp(const char *s1, const char *s2) {
  while (*s1 && (*s1 == *s2)) {
    s1++;
    s2++;
  }

  return *(unsigned char *)s1 - *(unsigned char *)s2;
}

/**
 * @brief Compares up to `n` characters of two null-terminated strings
 * lexicographically.
 * @param s1 Pointer to the first string.
 * @param s2 Pointer to the second string.
 * @param n Maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than zero if `s1` is
 * found, respectively, to be less than, equal to, or greater than `s2` within
 * the first `n` characters.
 */
int vlibc_strncmp(const char *s1, const char *s2, vlibc_size_t n) {
  while (n && *s1 && (*s1 == *s2)) {
    s1++;
    s2++;
    n--;
  }

  return n ? *(unsigned char *)s1 - *(unsigned char *)s2 : 0;
}

/**
 * @brief Fills the first `n` bytes of the memory area pointed to by `s` with
 * the constant byte `c`.
 * @param s Pointer to the memory area to be filled.
 * @param c The byte to be set in each byte of the memory area.
 * @param n Number of bytes to set.
 * @return Pointer to the memory area `s`.
 */
void *vlibc_memset(void *s, int c, vlibc_size_t n) {
  unsigned char *p = (unsigned char *)s;

  while (n--) *p++ = (unsigned char)c;

  return s;
}

/**
 * @brief Computes the length of a null-terminated string.
 * @param s Pointer to the null-terminated string.
 * @return The number of characters in the string, excluding the null
 * terminator.
 */
vlibc_size_t vlibc_strlen(const char *s) {
  const char *p = s;

  while (*p) p++;

  return p - s;
}

/**
 * @brief Searches for the first occurrence of the character `c` in the string
 * pointed to by `s`.
 * @param s Pointer to the null-terminated string to be searched.
 * @param c The character to locate (converted to an unsigned char).
 * @return A pointer to the first occurrence of `c` in the string, or `NULL` if
 * not found. If `c` is `'\0'`, returns a pointer to the null terminator.
 */
char *vlibc_strchr(const char *s, int c) {
  while (*s) {
    if (*s == (char)c) return (char *)s;

    s++;
  }

  return c == '\0' ? (char *)s : NULL;
}

/**
 * @brief Searches for the last occurrence of the character `c` in the string
 * pointed to by `s`.
 * @param s Pointer to the null-terminated string to be searched.
 * @param c The character to locate (converted to an unsigned char).
 * @return A pointer to the last occurrence of `c` in the string, or `NULL` if
 * not found.
 */
char *vlibc_strrchr(const char *s, int c) {
  const char *p = s + vlibc_strlen(s);

  while (p >= s) {
    if (*p == (char)c) return (char *)p;

    p--;
  }

  return VLIBC_NULL;
}

/**
 * @brief Calculates the length of the initial segment of `s` that consists
 * entirely of characters in `accept`.
 * @param s Pointer to the null-terminated string to be checked.
 * @param accept Pointer to a null-terminated string containing characters to
 * match in `s`.
 * @return The number of characters in the initial segment of `s` which consist
 * only of characters from `accept`.
 */
vlibc_size_t vlibc_strspn(const char *s, const char *accept) {
  const char *p = s;

  while (*p && vlibc_strchr(accept, *p)) p++;

  return p - s;
}

/**
 * @brief Calculates the length of the initial segment of `s` that consists
 * entirely of characters not in `reject`.
 * @param s Pointer to the null-terminated string to be checked.
 * @param reject Pointer to a null-terminated string containing characters to
 * exclude from `s`.
 * @return The number of characters in the initial segment of `s` which do not
 * contain any characters from `reject`.
 */
vlibc_size_t vlibc_strcspn(const char *s, const char *reject) {
  const char *p = s;

  while (*p && !vlibc_strchr(reject, *p)) p++;

  return p - s;
}

/**
 * @brief Searches for the first occurrence of any character from the string
 * `accept` in the string `s`.
 * @param s Pointer to the null-terminated string to be searched.
 * @param accept Pointer to a null-terminated string containing characters to
 * match.
 * @return A pointer to the first occurrence in `s` of any character from
 * `accept`, or `NULL` if none are found.
 */
char *vlibc_strpbrk(const char *s, const char *accept) {
  while (*s) {
    if (vlibc_strchr(accept, *s)) return (char *)s;

    s++;
  }

  return VLIBC_NULL;
}

/**
 * @brief Searches for the first occurrence of the substring `needle` in the
 * string `haystack`.
 * @param haystack Pointer to the null-terminated string to be searched.
 * @param needle Pointer to the null-terminated substring to search for.
 * @return A pointer to the first occurrence of `needle` in `haystack`, or
 * `NULL` if `needle` is not found.
 */
char *vlibc_strstr(const char *haystack, const char *needle) {
  vlibc_size_t needle_len = vlibc_strlen(needle);

  while (*haystack) {
    if (!vlibc_strncmp(haystack, needle, needle_len)) return (char *)haystack;

    haystack++;
  }

  return VLIBC_NULL;
}

/**
 * @brief Splits a string into tokens based on the specified delimiter
 * characters. Successive calls with `str` set to `NULL` will continue
 * tokenizing the same string.
 * @param str Pointer to the null-terminated string to be tokenized, or `NULL`
 * to continue tokenizing the previous string.
 * @param delim Pointer to a null-terminated string containing delimiter
 * characters.
 * @return A pointer to the next token found in `str`, or `NULL` if no more
 * tokens are found.
 *
 * @note This function modifies the input string by inserting null characters at
 * delimiter positions. It maintains internal state, so it is NOT thread-safe!
 */
char *vlibc_strtok(char *str, const char *delim) {
  static char *last;

  if (!str) str = last;

  if (!str) return VLIBC_NULL;

  str += vlibc_strspn(str, delim);

  if (!*str) {
    last = NULL;
    return VLIBC_NULL;
  }

  char *end = str + vlibc_strcspn(str, delim);

  if (*end) *end++ = '\0';

  last = end;

  return str;
}

// PS: Most of the functionality from this point are specific to kernel space
// routines, e.g. syscalls & ABI compatibility.

// @todo Only document library functions after conclusive tests.

// clang-format off

#if defined(__GNUC__) || defined(__clang__)
#define __vlibc_force_inline __attribute__((always_inline)) inline
#elif defined(_MSC_VER)
#define __vlibc_force_inline __forceinline
#else
#define __vlibc_force_inline inline
#endif

#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 202311L)
  #define __vlibc_deprecated [[deprecated]]
#elif defined(__GNUC__) || defined(__clang__)
  #define __vlibc_deprecated __attribute__((deprecated))
#elif defined(_MSC_VER)
  #define __vlibc_deprecated __declspec(deprecated)
#else
  #define __vlibc_deprecated
#endif

#ifdef __linux__
#ifdef __x86_64__
static __vlibc_force_inline vlibc_int64_t 
vlibc_syscall_0(vlibc_int64_t n);

static __vlibc_force_inline vlibc_int64_t 
vlibc_syscall_1(vlibc_int64_t n, vlibc_int64_t arg1);

static __vlibc_force_inline vlibc_int64_t 
vlibc_syscall_2(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2);

static __vlibc_force_inline vlibc_int64_t 
vlibc_syscall_3(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2, 
                vlibc_int64_t arg3);

static __vlibc_force_inline vlibc_int64_t 
vlibc_syscall_4(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2, 
                vlibc_int64_t arg3, vlibc_int64_t arg4);

static __vlibc_force_inline vlibc_int64_t 
vlibc_syscall_5(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2, 
                vlibc_int64_t arg3, vlibc_int64_t arg4, vlibc_int64_t arg5);

static __vlibc_force_inline vlibc_int64_t 
vlibc_syscall_6(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2, 
                vlibc_int64_t arg3, vlibc_int64_t arg4, vlibc_int64_t arg5, 
                vlibc_int64_t arg6);

// https://gist.github.com/elricmann/f3ccbf01454f8ebce0934081a50969bb

static __vlibc_force_inline vlibc_int64_t
syscall_0(vlibc_int64_t n) {
    vlibc_int64_t __out;

    __asm__ __volatile__ (
        "syscall;\n"
        : "=a" (__out)
        : "a" (n)
        : "%rcx", "%r11" // preserve
    );

    return __out;
}

static __vlibc_force_inline vlibc_int64_t
syscall_1(vlibc_int64_t n, vlibc_int64_t arg1) {
    vlibc_int64_t __out;

    __asm__ __volatile__ (
        "syscall;\n"
        : "=a" (__out)
        : "a" (n), "D" (arg1)
        : "%rcx", "%r11"
    );

    return __out;
}

static __vlibc_force_inline vlibc_int64_t
syscall_2(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2) {
    vlibc_int64_t __out;

    __asm__ __volatile__ (
        "syscall;\n"
        : "=a" (__out)
        : "a" (n), "D" (arg1), "S" (arg2)
        : "%rcx", "%r11"
    );

    return __out;
}

static __vlibc_force_inline vlibc_int64_t
syscall_3(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2,
          vlibc_int64_t arg3) {
    vlibc_int64_t __out;

    __asm__ __volatile__ (
        "syscall;\n"
        : "=a" (__out)
        : "a" (n), "D" (arg1), "S" (arg2), "d" (arg3)
        : "%rcx", "%r11"
    );

    return __out;
}

static __vlibc_force_inline vlibc_int64_t
syscall_4(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2,
          vlibc_int64_t arg3, vlibc_int64_t arg4) {
    vlibc_int64_t __out;

    __asm__ __volatile__ (
        "movq %5, %%r10;\n"
        "syscall;\n"
        : "=a" (__out)
        : "a" (n), "D" (arg1), "S" (arg2), "d" (arg3), "r" (arg4)
        : "%r10", "%rcx", "%r11"
    );

    return __out;
}

static __vlibc_force_inline vlibc_int64_t
syscall_5(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2,
          vlibc_int64_t arg3, vlibc_int64_t arg4, vlibc_int64_t arg5) {
    vlibc_int64_t __out;

    __asm__ __volatile__ (
        "movq %5, %%r10;\n"
        "movq %6, %%r8;\n"
        "syscall;\n"
        : "=a" (__out)
        : "a" (n), "D" (arg1), "S" (arg2), "d" (arg3), "r" (arg4), "r" (arg5)
        : "%r10", "%r8", "%rcx", "%r11"
    );

    return __out;
}

static __vlibc_force_inline vlibc_int64_t
syscall_6(vlibc_int64_t n, vlibc_int64_t arg1, vlibc_int64_t arg2,
          vlibc_int64_t arg3, vlibc_int64_t arg4, vlibc_int64_t arg5,
          vlibc_int64_t arg6) {
    vlibc_int64_t __out;

    __asm__ __volatile__ (
        "movq %5, %%r10;\n"
        "movq %6, %%r8;\n"
        "movq %7, %%r9;\n"
        "syscall;\n"
        : "=a" (__out)
        : "a" (n), "D" (arg1), "S" (arg2), "d" (arg3), "r" (arg4), "r" (arg5), "r" (arg6)
        : "%r10", "%r8", "%r9", "%rcx", "%r11"
    );

    return __out;
}

// syscall numbers <sys/syscall.h>
#define VLIBC_SYS_read        0
#define VLIBC_SYS_write       1
#define VLIBC_SYS_open        2
#define VLIBC_SYS_close       3
#define VLIBC_SYS_stat        4
#define VLIBC_SYS_fstat       5
#define VLIBC_SYS_lseek       8
#define VLIBC_SYS_mmap        9
#define VLIBC_SYS_mprotect    10
#define VLIBC_SYS_munmap      11
#define VLIBC_SYS_brk         12
#define VLIBC_SYS_sigaction   13
#define VLIBC_SYS_ioctl       16
#define VLIBC_SYS_pipe        22
#define VLIBC_SYS_nanosleep   35
#define VLIBC_SYS_dup         32
#define VLIBC_SYS_dup2        33
#define VLIBC_SYS_fork        57
#define VLIBC_SYS_execve      59
#define VLIBC_SYS_exit        60
#define VLIBC_SYS_wait4       61
#define VLIBC_SYS_kill        62
#define VLIBC_SYS_uname       63
#define VLIBC_SYS_fsync       74
#define VLIBC_SYS_chdir       80
#define VLIBC_SYS_mkdir       83
#define VLIBC_SYS_rmdir       84
#define VLIBC_SYS_unlink      87
#define VLIBC_SYS_getpid      39
#define VLIBC_SYS_chown       92
#define VLIBC_SYS_fcntl       72
#define VLIBC_SYS_getuid      102
#define VLIBC_SYS_getgid      104
#define VLIBC_SYS_setuid      105
#define VLIBC_SYS_setgid      106
#define VLIBC_SYS_gettimeofday 96

#endif // __x86_64__
#endif // __linux__

// clang-format on

#ifdef __linux__
#ifdef __x86_64__

// POSIX-specific types (minimum sizes)
typedef vlibc_int64_t vlibc_off_t;
typedef vlibc_int32_t vlibc_pid_t;
typedef vlibc_uint32_t vlibc_mode_t;
typedef vlibc_uint32_t vlibc_uid_t;
typedef vlibc_uint32_t vlibc_gid_t;
typedef vlibc_int64_t vlibc_ssize_t;

// VLIBC_FCNTL_H

// file access modes
#define VLIBC_O_RDONLY 0x0000
#define VLIBC_O_WRONLY 0x0001
#define VLIBC_O_RDWR 0x0002
#define VLIBC_O_APPEND 0x0008
#define VLIBC_O_CREAT 0x0100
#define VLIBC_O_TRUNC 0x0200
#define VLIBC_O_EXCL 0x0400
#define VLIBC_O_NONBLOCK 0x0800
#define VLIBC_O_SYNC 0x101000
#define VLIBC_O_DSYNC 0x1000
#define VLIBC_O_RSYNC 0x101000
#define VLIBC_O_NOCTTY 0x2000
#define VLIBC_O_CLOEXEC 0x4000

// file descriptor flags
#define VLIBC_FD_CLOEXEC 1

// fcntl commands
#define VLIBC_F_DUPFD 0
#define VLIBC_F_GETFD 1
#define VLIBC_F_SETFD 2
#define VLIBC_F_GETFL 3
#define VLIBC_F_SETFL 4
#define VLIBC_F_GETOWN 5
#define VLIBC_F_SETOWN 6
#define VLIBC_F_GETLK 7
#define VLIBC_F_SETLK 8
#define VLIBC_F_SETLKW 9
#define VLIBC_F_DUPFD_CLOEXEC 1030

// file lock types
#define VLIBC_F_RDLCK 0
#define VLIBC_F_WRLCK 1
#define VLIBC_F_UNLCK 2

// file locking
struct vlibc_flock {
  vlibc_int16_t l_type;
  vlibc_int16_t l_whence;
  vlibc_off_t l_start;
  vlibc_off_t l_len;
  vlibc_pid_t l_pid;
};

// fcntl & unistd prototypes
int vlibc_open(const char *pathname, int flags, vlibc_mode_t mode);
int vlibc_creat(const char *pathname, vlibc_mode_t mode);
int vlibc_fcntl(int fd, int cmd, ...);  // requires va_args (stdarg.h)
// clang-format off

int vlibc_open(const char *pathname, int flags, vlibc_mode_t mode) {
  return (int)syscall_3(VLIBC_SYS_open, (vlibc_int64_t)pathname, (vlibc_int64_t)flags, (vlibc_int64_t)mode);
}

__vlibc_deprecated int vlibc_creat(const char *pathname, vlibc_mode_t mode) {
  return vlibc_open(pathname, VLIBC_O_WRONLY | VLIBC_O_CREAT | VLIBC_O_TRUNC, mode);
}

int vlibc_fcntl(int fd, int cmd, ...) {
  vlibc_va_list args;
  vlibc_va_start(args, cmd);
  vlibc_int64_t out; /* @todo vlibc_flock unpack */

  switch (cmd) {
    case VLIBC_F_DUPFD:
    case VLIBC_F_DUPFD_CLOEXEC:
      out = syscall_2(VLIBC_SYS_fcntl, fd, vlibc_va_arg(args, int));
      break;

    case VLIBC_F_GETFD:
    case VLIBC_F_GETFL:
      out = syscall_1(VLIBC_SYS_fcntl, fd);
      break;

    case VLIBC_F_SETFD:
    case VLIBC_F_SETFL:
      out = syscall_2(VLIBC_SYS_fcntl, fd, vlibc_va_arg(args, int));
      break;

    case VLIBC_F_GETOWN:
      out = syscall_1(VLIBC_SYS_fcntl, fd);
      break;

    case VLIBC_F_SETOWN:
      out = syscall_2(VLIBC_SYS_fcntl, fd, vlibc_va_arg(args, vlibc_int32_t));
      break;

    // case VLIBC_F_GETLK:
    // case VLIBC_F_SETLK:
    // case VLIBC_F_SETLKW:
    //   out = syscall_3(
    //     VLIBC_SYS_fcntl, fd, cmd,
    //     (vlibc_int64_t)vlibc_va_arg(args, struct vlibc_flock *));
    //   break;

    default:
      out = -1;
  }

  vlibc_va_end(args);
  return (int)out;
}

// clang-format on

// VLIBC_UNISTD_H

#define S_IFMT 0170000
#define S_IFSOCK 0140000
#define S_IFLNK 0120000
#define S_IFREG 0100000
#define S_IFBLK 0060000
#define S_IFDIR 0040000
#define S_IFCHR 0020000
#define S_IFIFO 0010000

#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#define S_ISCHR(m) (((m) & S_IFMT) == S_IFCHR)
#define S_ISBLK(m) (((m) & S_IFMT) == S_IFBLK)
#define S_ISFIFO(m) (((m) & S_IFMT) == S_IFIFO)
#define S_ISLNK(m) (((m) & S_IFMT) == S_IFLNK)
#define S_ISSOCK(m) (((m) & S_IFMT) == S_IFSOCK)

// standard fds
#define VLIBC_STDIN_FILENO 0
#define VLIBC_STDOUT_FILENO 1
#define VLIBC_STDERR_FILENO 2

// seek constants
#define VLIBC_SEEK_SET 0
#define VLIBC_SEEK_CUR 1
#define VLIBC_SEEK_END 2

// function prototypes
int vlibc_access(const char *pathname, int mode);
void *vlibc_brk(void *addr);
int vlibc_chdir(const char *path);
int vlibc_chmod(const char *pathname, vlibc_mode_t mode);
int vlibc_chown(const char *pathname, vlibc_uid_t owner, vlibc_gid_t group);
int vlibc_close(int fd);
int vlibc_dup(int oldfd);
int vlibc_dup2(int oldfd, int newfd);
int vlibc_execve(const char *pathname, char *const argv[], char *const envp[]);
void vlibc_exit(int status);
vlibc_pid_t vlibc_fork(void);
int vlibc_fsync(int fd);
int vlibc_ftruncate(int fd, vlibc_off_t length);
char *vlibc_getcwd(char *buf, vlibc_size_t size);
vlibc_gid_t vlibc_getegid(void);
vlibc_uid_t vlibc_geteuid(void);
vlibc_gid_t vlibc_getgid(void);
vlibc_pid_t vlibc_getpid(void);
vlibc_pid_t vlibc_getppid(void);
vlibc_uid_t vlibc_getuid(void);
int vlibc_isatty(int fd);
int vlibc_kill(vlibc_pid_t pid, int sig);
vlibc_off_t vlibc_lseek(int fd, vlibc_off_t offset, int whence);
int vlibc_mkdir(const char *pathname, vlibc_mode_t mode);
int vlibc_open(const char *pathname, int flags, vlibc_mode_t mode);
int vlibc_pipe(int pipefd[2]);
vlibc_ssize_t vlibc_read(int fd, void *buf, vlibc_size_t count);
int vlibc_rmdir(const char *pathname);
int vlibc_setgid(vlibc_gid_t gid);
int vlibc_setuid(vlibc_uid_t uid);
unsigned int vlibc_sleep(unsigned int seconds);
int vlibc_unlink(const char *pathname);
vlibc_pid_t vlibc_waitpid(vlibc_pid_t pid, int *wstatus, int options);
vlibc_ssize_t vlibc_write(int fd, const void *buf, vlibc_size_t count);

vlibc_ssize_t vlibc_read(int fd, void *buf, vlibc_size_t count) {
  return (vlibc_ssize_t)syscall_3(VLIBC_SYS_read, (vlibc_int64_t)fd,
                                  (vlibc_int64_t)buf, (vlibc_int64_t)count);
}

vlibc_ssize_t vlibc_write(int fd, const void *buf, vlibc_size_t count) {
  return (vlibc_ssize_t)syscall_3(VLIBC_SYS_write, (vlibc_int64_t)fd,
                                  (vlibc_int64_t)buf, (vlibc_int64_t)count);
}

int vlibc_close(int fd) {
  return (int)syscall_1(VLIBC_SYS_close, (vlibc_int64_t)fd);
}

vlibc_off_t vlibc_lseek(int fd, vlibc_off_t offset, int whence) {
  return (vlibc_off_t)syscall_3(VLIBC_SYS_lseek, (vlibc_int64_t)fd,
                                (vlibc_int64_t)offset, (vlibc_int64_t)whence);
}

void *vlibc_brk(void *addr) {
  return (void *)syscall_1(VLIBC_SYS_brk, (vlibc_int64_t)addr);
}

int vlibc_pipe(int pipefd[2]) {
  return (int)syscall_1(VLIBC_SYS_pipe, (vlibc_int64_t)pipefd);
}

int vlibc_dup(int oldfd) {
  return (int)syscall_1(VLIBC_SYS_dup, (vlibc_int64_t)oldfd);
}

int vlibc_dup2(int oldfd, int newfd) {
  return (int)syscall_2(VLIBC_SYS_dup2, (vlibc_int64_t)oldfd,
                        (vlibc_int64_t)newfd);
}

vlibc_pid_t vlibc_fork(void) { return (vlibc_pid_t)syscall_0(VLIBC_SYS_fork); }

int vlibc_execve(const char *pathname, char *const argv[], char *const envp[]) {
  return (int)syscall_3(VLIBC_SYS_execve, (vlibc_int64_t)pathname,
                        (vlibc_int64_t)argv, (vlibc_int64_t)envp);
}

void vlibc_exit(int status) {
  syscall_1(VLIBC_SYS_exit, (vlibc_int64_t)status);
  while (1);
}

vlibc_pid_t vlibc_waitpid(vlibc_pid_t pid, int *wstatus, int options) {
  return (vlibc_pid_t)syscall_4(VLIBC_SYS_wait4, (vlibc_int64_t)pid,
                                (vlibc_int64_t)wstatus, (vlibc_int64_t)options,
                                0);
}

int vlibc_kill(vlibc_pid_t pid, int sig) {
  return (int)syscall_2(VLIBC_SYS_kill, (vlibc_int64_t)pid, (vlibc_int64_t)sig);
}

vlibc_pid_t vlibc_getpid(void) {
  return (vlibc_pid_t)syscall_0(VLIBC_SYS_getpid);
}

vlibc_pid_t vlibc_getppid(void) {
  return (vlibc_pid_t)syscall_0(VLIBC_SYS_getpid);
}

vlibc_uid_t vlibc_getuid(void) {
  return (vlibc_uid_t)syscall_0(VLIBC_SYS_getuid);
}

vlibc_gid_t vlibc_getgid(void) {
  return (vlibc_gid_t)syscall_0(VLIBC_SYS_getgid);
}

int vlibc_setuid(vlibc_uid_t uid) {
  return (int)syscall_1(VLIBC_SYS_setuid, (vlibc_int64_t)uid);
}

int vlibc_setgid(vlibc_gid_t gid) {
  return (int)syscall_1(VLIBC_SYS_setgid, (vlibc_int64_t)gid);
}

struct vlibc_timeval {
  vlibc_int64_t tv_sec;
  vlibc_int64_t tv_usec;
};

struct vlibc_timezone {
  int tz_minuteswest;
  int tz_dsttime;
};

int vlibc_gettimeofday(struct vlibc_timeval *tv, struct vlibc_timezone *tz) {
  return (int)syscall_2(VLIBC_SYS_gettimeofday, (vlibc_int64_t)tv,
                        (vlibc_int64_t)tz);
}

struct vlibc_timespec {
  vlibc_int64_t tv_sec;
  vlibc_int64_t tv_nsec;
};

unsigned int vlibc_sleep(unsigned int seconds) {
  struct vlibc_timespec ts = {.tv_sec = seconds, .tv_nsec = 0};

  if (syscall_2(VLIBC_SYS_nanosleep, (vlibc_int64_t)&ts,
                (vlibc_int64_t)VLIBC_NULL) == 0) {
    return 0;
  }

  return seconds;
}

// inode file attrs <sys/stat.h>

struct vlibc_stat {
  vlibc_uint64_t st_dev;
  vlibc_uint64_t st_ino;
  vlibc_uint64_t st_nlink;
  vlibc_uint32_t st_mode;
  vlibc_uid_t st_uid;
  vlibc_gid_t st_gid;
  vlibc_uint32_t __pad0;
  vlibc_uint64_t st_rdev;
  vlibc_int64_t st_size;
  vlibc_int64_t st_blksize;
  vlibc_int64_t st_blocks;
  struct vlibc_timespec st_atim;
  struct vlibc_timespec st_mtim;
  struct vlibc_timespec st_ctim;
  vlibc_int64_t __unused[3];
};

int vlibc_stat(const char *pathname, struct vlibc_stat *statbuf) {
  return (int)syscall_2(VLIBC_SYS_stat, (vlibc_int64_t)pathname,
                        (vlibc_int64_t)statbuf);
}

int vlibc_fstat(int fd, struct vlibc_stat *statbuf) {
  return (int)syscall_2(VLIBC_SYS_fstat, (vlibc_int64_t)fd,
                        (vlibc_int64_t)statbuf);
}

int vlibc_access(const char *pathname, int mode) {
  struct vlibc_stat st;
  if (vlibc_stat(pathname, &st) < 0) {
    return -1;
  }

  vlibc_uid_t uid = vlibc_getuid();
  vlibc_gid_t gid = vlibc_getgid();

  if (uid == 0) {
    return 0;
  }

  if (st.st_uid == uid) {
    st.st_mode >>= 6;
  } else if (st.st_gid == gid) {
    st.st_mode >>= 3;
  }

  if ((st.st_mode & mode) == mode) {
    return 0;
  }

  return -1;
}

int vlibc_chdir(const char *path) {
  struct vlibc_stat st;
  if (vlibc_stat(path, &st) < 0) {
    return -1;
  }

  if (!S_ISDIR(st.st_mode)) {
    return -1;
  }

  return syscall_1(VLIBC_SYS_chdir, (vlibc_int64_t)path);
}

int vlibc_chmod(const char *pathname, vlibc_mode_t mode) {
  struct vlibc_stat st;
  if (vlibc_stat(pathname, &st) < 0) {
    return -1;
  }

  st.st_mode = mode;
  return vlibc_stat(pathname, &st);
}

int vlibc_chown(const char *pathname, vlibc_uid_t owner, vlibc_gid_t group) {
  return (int)syscall_3(VLIBC_SYS_chown, (vlibc_int64_t)pathname,
                        (vlibc_int64_t)owner, (vlibc_int64_t)group);
}

int vlibc_fsync(int fd) {
  struct vlibc_stat st;
  if (vlibc_fstat(fd, &st) < 0) {
    return -1;
  }

  return syscall_1(VLIBC_SYS_fsync, (vlibc_int64_t)fd);
}

int vlibc_ftruncate(int fd, vlibc_off_t length) {
  struct vlibc_stat st;
  if (vlibc_fstat(fd, &st) < 0) {
    return -1;
  }

  if (!S_ISREG(st.st_mode) && !S_ISFIFO(st.st_mode)) {
    return -1;
  }

  st.st_size = length;

  return vlibc_fstat(fd, &st);
}

char *vlibc_getcwd(char *buf, vlibc_size_t size) {
  struct vlibc_stat st;
  if (vlibc_stat(".", &st) < 0) {
    return VLIBC_NULL;
  }

  if (size < 2) {
    return VLIBC_NULL;
  }

  char path[4096];
  vlibc_int64_t len = 0;

  do {
    if (vlibc_stat("..", &st) < 0) {
      return VLIBC_NULL;
    }

    if (len + 3 >= sizeof(path)) {
      return VLIBC_NULL;
    }

    path[len++] = '/';
    path[len++] = '.';
    path[len++] = '.';
    path[len] = '\0';

    if (vlibc_chdir("..") < 0) {
      return VLIBC_NULL;
    }
  } while (st.st_ino != 2);

  if (len >= size) {
    return VLIBC_NULL;
  }

  for (vlibc_int64_t i = 0; i < len; i++) {
    buf[i] = path[len - 1 - i];
  }

  buf[len] = '\0';

  return buf;
}

vlibc_uid_t vlibc_geteuid(void) {
  struct vlibc_stat st;
  if (vlibc_stat("/proc/self", &st) < 0) {
    return vlibc_getuid();
  }

  return st.st_uid;
}

vlibc_gid_t vlibc_getegid(void) {
  struct vlibc_stat st;
  if (vlibc_stat("/proc/self", &st) < 0) {
    return vlibc_getgid();
  }

  return st.st_gid;
}

int vlibc_isatty(int fd) {
  struct vlibc_stat st;
  if (vlibc_fstat(fd, &st) < 0) {
    return 0;
  }

  return S_ISCHR(st.st_mode);
}

int vlibc_mkdir(const char *pathname, vlibc_mode_t mode) {
  return syscall_2(VLIBC_SYS_mkdir, (vlibc_int64_t)pathname,
                   (vlibc_int64_t)mode);
}

int vlibc_rmdir(const char *pathname) {
  struct vlibc_stat st;
  if (vlibc_stat(pathname, &st) < 0) {
    return -1;
  }

  if (!S_ISDIR(st.st_mode)) {
    return -1;
  }

  return syscall_1(VLIBC_SYS_rmdir, (vlibc_int64_t)pathname);
}

int vlibc_unlink(const char *pathname) {
  struct vlibc_stat st;
  if (vlibc_stat(pathname, &st) < 0) {
    return -1;
  }

  if (S_ISDIR(st.st_mode)) {
    return -1;
  }

  return syscall_1(VLIBC_SYS_unlink, (vlibc_int64_t)pathname);
}

#endif  // __x86_64__
#endif  // __linux__

// We will only declare <stdlib.h> but define for each platform, the rest will
// be implementation-specific since NT has different memory routines from POSIX.

// VLIBC_STDLIB_H

#define VLIBC_EXIT_SUCCESS 0
#define VLIBC_EXIT_FAILURE 1
#define VLIBC_RAND_MAX ((1 << 31) - 1)

void *vlibc_malloc(vlibc_size_t size);
void vlibc_free(void *ptr);
void *vlibc_calloc(vlibc_size_t nmemb, vlibc_size_t size);
void *vlibc_realloc(void *ptr, vlibc_size_t size);
void vlibc_abort(void);
int vlibc_atexit(void (*func)(void));
int vlibc_atoi(const char *nptr);
long vlibc_atol(const char *nptr);
long long vlibc_atoll(const char *nptr);
void *vlibc_bsearch(const void *key, const void *base, vlibc_size_t nmemb,
                    vlibc_size_t size,
                    int (*compar)(const void *, const void *));
void vlibc_qsort(void *base, vlibc_size_t nmemb, vlibc_size_t size,
                 int (*compar)(const void *, const void *));
int vlibc_rand(void);
void vlibc_srand(unsigned int seed);
double vlibc_strtod(const char *nptr, char **endptr);
float vlibc_strtof(const char *nptr, char **endptr);
long vlibc_strtol(const char *nptr, char **endptr, int base);
long long vlibc_strtoll(const char *nptr, char **endptr, int base);
unsigned long vlibc_strtoul(const char *nptr, char **endptr, int base);
unsigned long long vlibc_strtoull(const char *nptr, char **endptr, int base);

struct vlibc_div_t {
  int quot;
  int rem;
};

struct vlibc_ldiv_t {
  long quot;
  long rem;
};

struct vlibc_lldiv_t {
  long long quot;
  long long rem;
};

struct vlibc_div_t vlibc_div(int numer, int denom);
struct vlibc_ldiv_t vlibc_ldiv(long numer, long denom);
struct vlibc_lldiv_t vlibc_lldiv(long long numer, long long denom);

// POSIX memory routines are defined here for VLIBC_STDLIB_H.
// Most of the details should remain the same when porting.

#ifdef __linux__
#ifdef __x86_64__

#define VLIBC_PAGE_SIZE (1 << 12)
#define __VLIBC_ALIGN__(x, align) (((x) + ((align) - 1)) & ~((align) - 1))

#define VLIBC_PROT_READ 0x1
#define VLIBC_PROT_WRITE 0x2
#define VLIBC_MAP_PRIVATE 0x2
#define VLIBC_MAP_ANONYMOUS 0x20

#define VLIBC_MAP_FAILED ((void *)-1)

struct vlibc_block_header {
  vlibc_size_t size;
  struct vlibc_block_header *next;
  unsigned char used;
};

static struct vlibc_block_header *vlibc_heap_start = VLIBC_NULL;
__vlibc_deprecated unsigned char vlibc_initialized =
    0;  // required in sbrk implementation

// We now implement a basic best-fit algorithm for memory allocation.
// Alternatively, there could be other algorithms that could be
// applied with a definition in user programs but that may not be
// necessary. __VLIBC_ALIGN__ aligns a size up to a specific byte boundary.
// __vlibc_platform_* internal functions wrap system-related memory routines.

__vlibc_force_inline static void *__vlibc_platform_alloc(size_t size) {
  void *ptr = (void *)syscall_6(VLIBC_SYS_mmap, 0, size,
                                VLIBC_PROT_READ | VLIBC_PROT_WRITE,
                                VLIBC_MAP_PRIVATE | VLIBC_MAP_ANONYMOUS, -1, 0);
  return (ptr == VLIBC_MAP_FAILED) ? VLIBC_NULL : ptr;
}

__vlibc_force_inline static int __vlibc_platform_free(void *ptr) {
  struct vlibc_block_header *header = (struct vlibc_block_header *)ptr;
  return (int)syscall_2(VLIBC_SYS_munmap, (vlibc_int64_t)ptr,
                        header->size + sizeof(struct vlibc_block_header));
}

void *vlibc_malloc(vlibc_size_t size) {
  if (size == 0) return VLIBC_NULL;

  vlibc_size_t total_size =
      __VLIBC_ALIGN__(size + sizeof(struct vlibc_block_header), 8);

  if (!vlibc_heap_start) {
    vlibc_size_t initial_size = __VLIBC_ALIGN__(total_size, VLIBC_PAGE_SIZE);
    vlibc_heap_start = __vlibc_platform_alloc(initial_size);

    if (!vlibc_heap_start) return VLIBC_NULL;

    vlibc_heap_start->size = initial_size - sizeof(struct vlibc_block_header);
    vlibc_heap_start->next = VLIBC_NULL;
    vlibc_heap_start->used = 0;
  }

  struct vlibc_block_header *current = vlibc_heap_start;
  struct vlibc_block_header *best_fit = VLIBC_NULL;
  vlibc_size_t min_size = (vlibc_size_t)-1;

  while (current) {
    if (!current->used && current->size >= total_size) {
      if (current->size < min_size) {
        best_fit = current;
        min_size = current->size;
      }
    }

    current = current->next;
  }

  if (!best_fit) {
    vlibc_size_t alloc_size = __VLIBC_ALIGN__(total_size, VLIBC_PAGE_SIZE);
    struct vlibc_block_header *new_block = __vlibc_platform_alloc(alloc_size);

    if (!new_block) return VLIBC_NULL;

    new_block->size = alloc_size - sizeof(struct vlibc_block_header);
    new_block->used = 0;
    new_block->next = VLIBC_NULL;

    // skip older blocks, start at base of heap
    current = vlibc_heap_start;

    // advance block
    while (current->next) current = current->next;

    current->next = new_block;
    best_fit = new_block;
  }

  if (best_fit->size >= total_size + sizeof(struct vlibc_block_header) + 8) {
    struct vlibc_block_header *partition_block =
        (struct vlibc_block_header *)((char *)best_fit +
                                      sizeof(struct vlibc_block_header) +
                                      total_size);
    partition_block->size =  // match the least possible size
        best_fit->size - total_size - sizeof(struct vlibc_block_header);
    partition_block->next = best_fit->next;
    partition_block->used = 0;

    best_fit->size = total_size;
    best_fit->next = partition_block;
  }

  best_fit->used = 1;

  return (void *)((char *)best_fit + sizeof(struct vlibc_block_header));
}

#endif  // __x86_64__
#endif  // __linux__

static unsigned int vlibc_rand_seed = 1;
static void (*vlibc_atexit_funcs[1 << 5])(void);
static int vlibc_atexit_count = 0;

int vlibc_atexit(void (*func)(void)) {
  if (vlibc_atexit_count >= 32) return -1;

  vlibc_atexit_funcs[vlibc_atexit_count++] = func;

  return 0;
}

int vlibc_atoi(const char *nptr) {
  return (int)vlibc_strtol(nptr, VLIBC_NULL, 10);
}

long vlibc_atol(const char *nptr) { return vlibc_strtol(nptr, VLIBC_NULL, 10); }

long long vlibc_atoll(const char *nptr) {
  return vlibc_strtoll(nptr, VLIBC_NULL, 10);
}

void *vlibc_bsearch(const void *key, const void *base, vlibc_size_t nmemb,
                    vlibc_size_t size,
                    int (*compar)(const void *, const void *)) {
  const char *base_ptr = (const char *)base;
  vlibc_size_t left = 0;
  vlibc_size_t right = nmemb;

  while (left < right) {
    vlibc_size_t mid = left + (right - left) / 2;
    const void *mid_ptr = base_ptr + mid * size;
    int result = compar(key, mid_ptr);

    if (result < 0)
      right = mid;
    else if (result > 0)
      left = mid + 1;
    else
      return (void *)mid_ptr;
  }

  return VLIBC_NULL;
}

static void vlibc_qsort_swap(char *a, char *b, vlibc_size_t size) {
  while (size--) {
    char temp = *a;
    *a++ = *b;
    *b++ = temp;
  }
}

static void vlibc_qsort_recursive(char *base, vlibc_size_t nmemb,
                                  vlibc_size_t size,
                                  int (*compar)(const void *, const void *)) {
  if (nmemb <= 1) return;

  char *pivot = base + (nmemb - 1) * size;
  char *store = base;

  for (char *i = base; i < pivot; i += size) {
    if (compar(i, pivot) <= 0) {
      if (i != store) vlibc_qsort_swap(i, store, size);
      store += size;
    }
  }

  if (store != pivot) vlibc_qsort_swap(store, pivot, size);

  vlibc_size_t left_size = (store - base) / size;
  vlibc_size_t right_size = nmemb - left_size - 1;

  vlibc_qsort_recursive(base, left_size, size, compar);
  vlibc_qsort_recursive(store + size, right_size, size, compar);
}

void vlibc_qsort(void *base, vlibc_size_t nmemb, vlibc_size_t size,
                 int (*compar)(const void *, const void *)) {
  if (!base || !size) return;

  vlibc_qsort_recursive((char *)base, nmemb, size, compar);
}

int vlibc_rand(void) {
  vlibc_rand_seed = vlibc_rand_seed * 1103515245 + 12345;  // ??

  return (int)((vlibc_rand_seed >> 16) &
               VLIBC_RAND_MAX);  // skip -Winteger-overflow?
}

void vlibc_srand(unsigned int seed) { vlibc_rand_seed = seed; }

double vlibc_strtod(const char *nptr, char **endptr) {
  while (vlibc_isspace(*nptr)) nptr++;

  int sign = 1;

  if (*nptr == '-') {
    sign = -1;
    nptr++;
  } else if (*nptr == '+') {
    nptr++;
  }

  double out = 0.0;

  while (vlibc_isdigit(*nptr)) {
    out = out * 10.0 + (*nptr - '0');
    nptr++;
  }

  if (*nptr == '.') {
    nptr++;

    double frac = 0.1;

    while (vlibc_isdigit(*nptr)) {
      out += (*nptr - '0') * frac;
      frac *= 0.1;
      nptr++;
    }
  }

  if (endptr) *endptr = (char *)nptr;

  return sign * out;
}

float vlibc_strtof(const char *nptr, char **endptr) {
  return (float)vlibc_strtod(nptr, endptr);
}

long vlibc_strtol(const char *nptr, char **endptr, int base) {
  while (vlibc_isspace(*nptr)) nptr++;

  int sign = 1;

  if (*nptr == '-') {
    sign = -1;
    nptr++;
  } else if (*nptr == '+') {
    nptr++;
  }

  if (base == 0) {
    if (*nptr == '0') {
      nptr++;
      if (*nptr == 'x' || *nptr == 'X') {
        base = 16;
        nptr++;
      } else {
        base = 8;
      }
    } else {
      base = 10;
    }
  } else if (base == 16 && *nptr == '0' &&
             (*(nptr + 1) == 'x' || *(nptr + 1) == 'X')) {
    nptr += 2;
  }

  long out = 0;

  while (1) {
    int digit;

    if (vlibc_isdigit(*nptr))
      digit = *nptr - '0';
    else if (vlibc_isalpha(*nptr))
      digit = vlibc_toupper(*nptr) - 'A' + 10;
    else
      break;

    if (digit >= base) break;

    out = out * base + digit;
    nptr++;
  }

  if (endptr) *endptr = (char *)nptr;

  return sign * out;
}

long long vlibc_strtoll(const char *nptr, char **endptr, int base) {
  return (long long)vlibc_strtol(nptr, endptr, base);
}

unsigned long vlibc_strtoul(const char *nptr, char **endptr, int base) {
  return (unsigned long)vlibc_strtol(nptr, endptr, base);
}

unsigned long long vlibc_strtoull(const char *nptr, char **endptr, int base) {
  return (unsigned long long)vlibc_strtoll(nptr, endptr, base);
}
