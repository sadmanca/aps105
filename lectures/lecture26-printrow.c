#include <stdio.h>

void printRow(int n) {
  if (n <= 0)
    printf("\n");
  else {
    printf("*");
    printRow(n - 1);
  }
}

int main(void) {
  int stars;
  printf("How many stars should we print? ");
  scanf("%d", &stars);

  printRow(stars);

  return 0;
}
