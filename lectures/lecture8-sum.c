#include <stdio.h>

int main(void) {
  // Prompting the user to enter a series of integer
  // values, -1 to quit, and print the sum of these values
  int input, sum = 0;

  printf("Enter a value (-1 to stop): ");
  scanf("%d", &input);

  while (input != -1) {
    sum += input;
    printf("Enter a value (-1 to stop): ");
    scanf("%d", &input);
  }

  printf("The sum of all values is: %d\n", sum);
}
