#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int digit, lastDigit;

  int count = 0;

  do {
    printf("Please give a digit from 0 to 9: ");
    scanf("%d", &digit);
  } while (digit < 0 || digit > 9);

  int n;

  printf("Please enter an integer: ");
  scanf("%d", &n);

  // Optional: using the abs() function to correctly handle the special
  // case where the integer that the user entered can be negative
  n = abs(n);

  // Optional: using a do-while loop rather than a while loop to correctly
  // handle the special case of n = 0 and digit = 0
  do {
    lastDigit = n % 10;
    n = n / 10;

    if (lastDigit == digit) {
      count = count + 1;
    }
  } while (n > 0);

  printf("The number of occurrence of %d: %d\n", digit, count);

  return 0;
}
