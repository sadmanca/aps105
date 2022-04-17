#include <stdio.h>

int main(void) {
  int rows;
  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  int i, j;
  for (i = 1; i <= rows; i++) {
    for (j = 1; j <= rows - i; j++)
      printf(" ");
    for (j = 1; j <= i * 2 - 1; j++)
      printf("*");
    printf("\n");
  }
}