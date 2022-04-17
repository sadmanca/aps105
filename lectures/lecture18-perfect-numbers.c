#include <stdio.h>

int main(void) {
  int result, i, n = 2, count = 0;

  while (count < 3) {
    result = 0;

    for (i = 1; i < n; i++) {
      if (n % i == 0)
        result += i;
    }

    if (result == n) {
      printf("%d\n", result);
      count++;
    }

    n++;
  }
}
