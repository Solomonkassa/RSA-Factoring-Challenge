#include <stdio.h>
#include <stdlib.h>
#include <string.h>

__int128 str_to_int128(const char *str) {
  __int128 result = 0;
  char c;

  while ((c = *str++)) {
    if (c >= '0' && c <= '9') {
      result = result * 10 + (c - '0');
    } else {
      // Non-numeric character found, return 0
      return 0;
    }
  }

  return result;
}

int main() {
  char str[] = "1718944270642558716715";
  __int128 num = str_to_int128(str);

  printf("Factors of %lld: ", (long long) num);
  for (__int128 i = 1; i <= num; i++) {
    if (num % i == 0) {
      printf("%lld ", (long long) i);
    }
  }
  printf("\n");

  return 0;
}

