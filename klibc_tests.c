// clang -o main.o klibc_tests.c && ./main.o
#include <stdio.h>

#include "klibc.h"

int main(int argc, char const *argv[]) {
  printf("klibc_sqrt(2.0): %f\nKLIBC_M_SQRT2: %f\n", klibc_sqrt(2.0f), KLIBC_M_SQRT2);
  printf("klibc_sqrt(4.0): %f\n", klibc_sqrt(4.0f));
  printf("klibc_sin((KLIBC_M_PI/2)): %f\n", klibc_sin((KLIBC_M_PI / 2)));
  printf("klibc_cos((90.0)): %f\n", klibc_cos((90.0)));
  printf("klibc_tan((60.0)): %f\n", klibc_tan((60.0)));
  printf("klibc_asin((0.5)): %f\n", klibc_asin((0.5)));
  printf("klibc_acos((0.5)): %f\n", klibc_acos((0.5)));
  printf("klibc_atan((0.5)): %f\n", klibc_atan((0.5)));
  printf("klibc_exp((2.0)): %f\n", klibc_exp((2.0)));
  printf("klibc_log((KLIBC_M_E)): %f\n", klibc_log((KLIBC_M_E)));
  printf("klibc_log10((100)): %f\n", klibc_log10((100)));
  printf("klibc_pow(7.0, 2.0): %f\n", klibc_pow(7.0, 2.0));
  printf("klibc_ceil(2.3): %f\n", klibc_ceil(2.3));
  printf("klibc_floor(2.3): %f\n", klibc_floor(2.3));

  char src[] = "test klibc_memcpy";
  char dest[20];
  klibc_memcpy(dest, src, sizeof(src));
  printf("%s\n", dest);

  char data[] = "abc def";
  klibc_memmove(data + 4, data, 3);
  printf("%s\n", data);

  char dest1[20];
  char dest2[20];
  klibc_strcpy(dest1, "test klibc_strcpy");
  printf("%s\n", dest1);
  klibc_strncpy(dest2, "test klibc_strncpy", 10);
  printf("%s\n", dest2);

  return 0;
}
