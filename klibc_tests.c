// clang -o main.o klibc_tests.c && ./main.o
#include <stdio.h>

#include "klibc.h"

int main(int argc, char const *argv[]) {
  // printf("klibc_sqrt(2.0): %f\nKLIBC_M_SQRT2: %f\n", klibc_sqrt(2.0f), KLIBC_M_SQRT2);
  // printf("klibc_sqrt(4.0): %f\n", klibc_sqrt(4.0f));
  // printf("klibc_sin((KLIBC_M_PI/2)): %f\n", klibc_sin((KLIBC_M_PI / 2)));
  // printf("klibc_cos((90.0)): %f\n", klibc_cos((90.0)));
  // printf("klibc_tan((60.0)): %f\n", klibc_tan((60.0)));
  // printf("klibc_asin((0.5)): %f\n", klibc_asin((0.5)));
  // printf("klibc_acos((0.5)): %f\n", klibc_acos((0.5)));
  // printf("klibc_atan((0.5)): %f\n", klibc_atan((0.5)));
  // printf("klibc_exp((2.0)): %f\n", klibc_exp((2.0)));
  // printf("klibc_log((KLIBC_M_E)): %f\n", klibc_log((KLIBC_M_E)));
  // printf("klibc_log10((100)): %f\n", klibc_log10((100)));
  // printf("klibc_pow(7.0, 2.0): %f\n", klibc_pow(7.0, 2.0));
  // printf("klibc_ceil(2.3): %f\n", klibc_ceil(2.3));
  // printf("klibc_floor(2.3): %f\n", klibc_floor(2.3));

  // char src[] = "test klibc_memcpy";
  // char dest[20];
  // klibc_memcpy(dest, src, sizeof(src));
  // printf("%s\n", dest);

  // char data[] = "abc def";
  // klibc_memmove(data + 4, data, 3);
  // printf("%s\n", data);

  // char dest1[20];
  // char dest2[20];
  // klibc_strcpy(dest1, "test klibc_strcpy");
  // printf("%s\n", dest1);
  // klibc_strncpy(dest2, "test klibc_strncpy", 10);
  // printf("%s\n", dest2);

  // char dest3[50] = "test klibc_strcat: ";
  // char dest4[50] = "test klibc_strncat: ";
  // klibc_strcat(dest1, "appending full string");
  // printf("%s\n", dest1);
  // klibc_strncat(dest2, "appending partial string", 9);
  // printf("%s\n", dest2);

  // char buffer1[] = "test klibc_memcmp";
  // char buffer2[] = "test klibc_memcmp";
  // char buffer3[] = "test klibc_mem";
  // // identical buffers (ASCII value cmp)
  // int out1 = klibc_memcmp(buffer1, buffer2, sizeof(buffer1));
  // printf("comparison of buffer1 and buffer2: %d\n", out1);
  // // different buffers (ASCII value cmp)
  // int out2 = klibc_memcmp(buffer1, buffer3, sizeof(buffer3));
  // printf("comparison of buffer1 and buffer3: %d\n", out2);

  // const char *a1 = "test klibc_strcmp";
  // const char *a2 = "test klibc_strcmp";
  // const char *a3 = "test klibc_str";
  // printf("strcmp (a1 vs a2): %d\n", klibc_strcmp(a1, a2));           // expected 0
  // printf("strcmp (a1 vs a3): %d\n", klibc_strcmp(a1, a3));           // expected non-zero
  // printf("strncmp (a1 vs a3, 10): %d\n", klibc_strncmp(a1, a3, 10)); // expected 0
  // printf("strncmp (a1 vs a3, 15): %d\n", klibc_strncmp(a1, a3, 15)); // expected non-zero

  // char buf[20];

  // klibc_memset(buf, '*', 10);
  // buf[10] = '\0';
  // printf("memset result: %s\n", buf); // expected **********

  // const char *str = "test klibc_strlen";
  // klibc_size_t len = klibc_strlen(str);
  // printf("strlen result: %llu\n", len); // expected length of "test klibc_strlen" & null char

  // const char *str2 = "test klibc_strchr";
  // char *found = klibc_strchr(str2, 'c');
  // printf("strchr result: %s\n", found); // expected "c_strchr"

  // char *not_found = klibc_strchr(str2, 'z');
  // printf("strchr not found result: %s\n", not_found ? not_found : "NULL"); // expected NULL

  // const char *str1 = "test klibc_strrchr example";
  // char *last_e = klibc_strrchr(str1, 'e');
  // if (last_e) {
  //   printf("last occurrence of 'e': %c\n", *last_e); // expected 'e'
  // } else {
  //   printf("character not found\n");
  // }

  // const char *str3 = "test klibc_strspn and klibc_strcspn examples";
  // const char *accept = "te";
  // const char *reject = " ";
  // klibc_size_t span_length = klibc_strspn(str3, accept);
  // printf("length of initial segment containing only 't' or 'e': %llu\n", span_length); // expected 2
  // klibc_size_t cspan_length = klibc_strcspn(str3, reject);
  // printf("length of initial segment not containing a space: %llu\n", cspan_length); // expected 4

  // const char *str4 = "test klibc_strpbrk and klibc_strstr examples";
  // const char *accept2 = "aeiou";
  // const char *needle = "klibc_strstr";
  // char *first_vowel = klibc_strpbrk(str4, accept2);
  // printf("first vowel in string: %c\n", first_vowel ? *first_vowel : 'N'); // expected 'e'
  // char *substr = klibc_strstr(str4, needle);
  // printf("substring: %s\n", substr ? substr : "NULL"); // expected "klibc_strstr examples"

  // char str5[] = "test,klibc,strtok,example";
  // const char *delim = ",";
  // char *token = klibc_strtok(str5, delim);
  // while (token) {
  //   printf("token: %s\n", token);
  //   token = klibc_strtok(NULL, delim);
  // }

  // printf("char upper: %c\n", klibc_toupper('k'));
  // printf("is alpha: %d\n", klibc_isalpha('k'));
  // printf("is num: %d\n", klibc_isdigit('9'));
  // printf("is alphanum: %d\n", klibc_isalnum('2'));

#ifdef __linux__
#ifdef __x86_64__
  printf("we are on linux & x86-64");
#endif
#endif

  return 0;
}
