#include <stdio.h>

double power(double x, int n) {
  if (x == 0) {
    if (n == 0) {
      printf("Invalid arguments to power - zero returned\n");
      return 0.0;
    } else
      return 0.0;
  }

  if (n < 0) {
    return 1.0 / power(x, -n);
  }

  if (n == 0)
    return 1.0;

  // recursive case
  double temp = power(x, n / 2);

  if (n % 2 == 0) {
    // n is an even positive value
    return temp * temp; // way more efficient than calling power() twice
  } else {
    // n is an odd positive value
    return temp * temp * x;
  }
}

int main(void) {
  printf("power(5, 3) = %lf\n", power(5, 3));
  return 0;
}
