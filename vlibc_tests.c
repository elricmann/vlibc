// clang -o main.o vlibc_tests.c && ./main.o
#include <stdio.h>

#include "vlibc.h"

int main(int argc, char const *argv[]) {
  // printf("vlibc_sqrt(2.0): %f\nVLIBC_M_SQRT2: %f\n", vlibc_sqrt(2.0f), VLIBC_M_SQRT2);
  // printf("vlibc_sqrt(4.0): %f\n", vlibc_sqrt(4.0f));
  // printf("vlibc_sin((VLIBC_M_PI/2)): %f\n", vlibc_sin((VLIBC_M_PI / 2)));
  // printf("vlibc_cos((90.0)): %f\n", vlibc_cos((90.0)));
  // printf("vlibc_tan((60.0)): %f\n", vlibc_tan((60.0)));
  // printf("vlibc_asin((0.5)): %f\n", vlibc_asin((0.5)));
  // printf("vlibc_acos((0.5)): %f\n", vlibc_acos((0.5)));
  // printf("vlibc_atan((0.5)): %f\n", vlibc_atan((0.5)));
  // printf("vlibc_exp((2.0)): %f\n", vlibc_exp((2.0)));
  // printf("vlibc_log((VLIBC_M_E)): %f\n", vlibc_log((VLIBC_M_E)));
  // printf("vlibc_log10((100)): %f\n", vlibc_log10((100)));
  // printf("vlibc_pow(7.0, 2.0): %f\n", vlibc_pow(7.0, 2.0));
  // printf("vlibc_ceil(2.3): %f\n", vlibc_ceil(2.3));
  // printf("vlibc_floor(2.3): %f\n", vlibc_floor(2.3));

  // char src[] = "test vlibc_memcpy";
  // char dest[20];
  // vlibc_memcpy(dest, src, sizeof(src));
  // printf("%s\n", dest);

  // char data[] = "abc def";
  // vlibc_memmove(data + 4, data, 3);
  // printf("%s\n", data);

  // char dest1[20];
  // char dest2[20];
  // vlibc_strcpy(dest1, "test vlibc_strcpy");
  // printf("%s\n", dest1);
  // vlibc_strncpy(dest2, "test vlibc_strncpy", 10);
  // printf("%s\n", dest2);

  // char dest3[50] = "test vlibc_strcat: ";
  // char dest4[50] = "test vlibc_strncat: ";
  // vlibc_strcat(dest1, "appending full string");
  // printf("%s\n", dest1);
  // vlibc_strncat(dest2, "appending partial string", 9);
  // printf("%s\n", dest2);

  // char buffer1[] = "test vlibc_memcmp";
  // char buffer2[] = "test vlibc_memcmp";
  // char buffer3[] = "test vlibc_mem";
  // // identical buffers (ASCII value cmp)
  // int out1 = vlibc_memcmp(buffer1, buffer2, sizeof(buffer1));
  // printf("comparison of buffer1 and buffer2: %d\n", out1);
  // // different buffers (ASCII value cmp)
  // int out2 = vlibc_memcmp(buffer1, buffer3, sizeof(buffer3));
  // printf("comparison of buffer1 and buffer3: %d\n", out2);

  // const char *a1 = "test vlibc_strcmp";
  // const char *a2 = "test vlibc_strcmp";
  // const char *a3 = "test vlibc_str";
  // printf("strcmp (a1 vs a2): %d\n", vlibc_strcmp(a1, a2));           // expected 0
  // printf("strcmp (a1 vs a3): %d\n", vlibc_strcmp(a1, a3));           // expected non-zero
  // printf("strncmp (a1 vs a3, 10): %d\n", vlibc_strncmp(a1, a3, 10)); // expected 0
  // printf("strncmp (a1 vs a3, 15): %d\n", vlibc_strncmp(a1, a3, 15)); // expected non-zero

  // char buf[20];

  // vlibc_memset(buf, '*', 10);
  // buf[10] = '\0';
  // printf("memset result: %s\n", buf); // expected **********

  // const char *str = "test vlibc_strlen";
  // vlibc_size_t len = vlibc_strlen(str);
  // printf("strlen result: %llu\n", len); // expected length of "test vlibc_strlen" & null char

  // const char *str2 = "test vlibc_strchr";
  // char *found = vlibc_strchr(str2, 'c');
  // printf("strchr result: %s\n", found); // expected "c_strchr"

  // char *not_found = vlibc_strchr(str2, 'z');
  // printf("strchr not found result: %s\n", not_found ? not_found : "NULL"); // expected NULL

  // const char *str1 = "test vlibc_strrchr example";
  // char *last_e = vlibc_strrchr(str1, 'e');
  // if (last_e) {
  //   printf("last occurrence of 'e': %c\n", *last_e); // expected 'e'
  // } else {
  //   printf("character not found\n");
  // }

  // const char *str3 = "test vlibc_strspn and vlibc_strcspn examples";
  // const char *accept = "te";
  // const char *reject = " ";
  // vlibc_size_t span_length = vlibc_strspn(str3, accept);
  // printf("length of initial segment containing only 't' or 'e': %llu\n", span_length); // expected 2
  // vlibc_size_t cspan_length = vlibc_strcspn(str3, reject);
  // printf("length of initial segment not containing a space: %llu\n", cspan_length); // expected 4

  // const char *str4 = "test vlibc_strpbrk and vlibc_strstr examples";
  // const char *accept2 = "aeiou";
  // const char *needle = "vlibc_strstr";
  // char *first_vowel = vlibc_strpbrk(str4, accept2);
  // printf("first vowel in string: %c\n", first_vowel ? *first_vowel : 'N'); // expected 'e'
  // char *substr = vlibc_strstr(str4, needle);
  // printf("substring: %s\n", substr ? substr : "NULL"); // expected "vlibc_strstr examples"

  // char str5[] = "test,vlibc,strtok,example";
  // const char *delim = ",";
  // char *token = vlibc_strtok(str5, delim);
  // while (token) {
  //   printf("token: %s\n", token);
  //   token = vlibc_strtok(NULL, delim);
  // }

  // printf("char upper: %c\n", vlibc_toupper('k'));
  // printf("is alpha: %d\n", vlibc_isalpha('k'));
  // printf("is num: %d\n", vlibc_isdigit('9'));
  // printf("is alphanum: %d\n", vlibc_isalnum('2'));

  int _fd = vlibc_open(".gitignore", VLIBC_O_RDONLY, 0);
  printf(".gitignore fd: %d\n", _fd);
  int fd2 = vlibc_open("doesntexist.txt", VLIBC_O_RDONLY, 0);
  printf("doesntexist.txt fd: %d\n", fd2);

  int fd = vlibc_open("README.md", VLIBC_O_RDWR | VLIBC_O_APPEND, 0);
  if (fd >= 0) {
    char buffer[128];
    vlibc_ssize_t bytes_read = vlibc_read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read > 0) {
      buffer[bytes_read] = '\0';
      printf("%s", buffer);
    }

    const char *write_data = "write data";
    vlibc_ssize_t bytes_written = vlibc_write(fd, write_data, vlibc_strlen(write_data));
    if (bytes_written > 0) {
      printf("wrote: %s\n", write_data);
    }

    vlibc_close(fd);
  }

  return 0;
}
