// clang -o main.o klibc_tests.c && ./main.o
#include <stdio.h>

#include "klibc.h"

int main(int argc, char const *argv[]) {
  printf("klibc_sqrt(2.0): %f\nKLIBC_M_SQRT2: %f\n", klibc_sqrt(2.0f),
         KLIBC_M_SQRT2);
  printf("klibc_sqrt(4.0): %f\n", klibc_sqrt(4.0f));
  printf("klibc_sin((KLIBC_M_PI/2)): %f\n", klibc_sin((KLIBC_M_PI/2)));
  printf("klibc_cos((90.0)): %f\n", klibc_cos((90.0)));
  return 0;
}
