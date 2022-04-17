#include <stdio.h>

// Implementing factorial (n!) recursively
int factorial(int n) {
  // The base case(s)
  if (n < 0) {
    printf("The input is not valid.\n");
    return 0;
  } else if (n == 0) {
    // 0! = 1
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main(void) {
  printf("5! = %d\n", factorial(5));
}
