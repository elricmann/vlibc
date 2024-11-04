#include <stdio.h>

#include "klibc.h"

int main(int argc, char const *argv[]) {
  printf("klibc_sqrt(2.0): %f\nKLIBC_M_SQRT2: %f\n", klibc_sqrt(2.0f),
         KLIBC_M_SQRT2);
  printf("klibc_sqrt(4.0): %f", klibc_sqrt(4.0f));
  return 0;
}
