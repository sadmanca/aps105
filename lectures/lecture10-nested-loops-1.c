#include <stdio.h>

int main(void) {
  const int n = 5;
  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= row; col++) {
      printf("%d", col);
    }
    printf("\n");
  }

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n - row + 1; col++) {
      printf("*");
    }
    printf("\n");
  }

  for (int row = 1; row <= n; row++) {
    for (int col = 1; col <= n; col++) {
      if (row + col <= n) {
        printf(" ");
      } else {
        printf("*");
      }
    }
    printf("\n");
  }

  return 0;
}
