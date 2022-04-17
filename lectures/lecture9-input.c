#include <stdio.h>

int main(void) {
  int input;
  do {
    printf("Enter a number from 1 to 10: ");
    scanf("%d", &input);
  } while (input < 1 || input > 10);
  // The condition is what we don't want -- input is invalid

  printf("The number you have entered is: %d\n", input);
}
