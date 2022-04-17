#include <stdio.h>

void printRow(int n) {
  if (n <= 0)
    printf("\n");
  else {
    printf("*");
    printRow(n - 1);
  }
}

void printTrianglev1(int n) {
  if (n > 0) {
    printTrianglev1(n - 1);
    printRow(n);
  }
}

void printTrianglev2(int n) {
  if (n > 0) {
    printRow(n);
    printTrianglev2(n - 1);
  }
}

void printPattern(int n) {
  if (n <= 0)
    return;
  if (n == 1)
    printRow(1);
  else {
    printRow(n);
    printPattern(n - 1);
    printRow(n);
  }
}

int main(void) {
  printRow(5);
  printf("\n");
  printTrianglev1(5);
  printf("\n");
  printTrianglev2(5);
  printf("\n");
  printPattern(5);
  printf("\n");
}
