#include <stdio.h>

int main(void) {
  // Prompting the user to enter a series of integer
  // values, -1 to quit, and print the sum of these values

  // This code is quite fragile, in that the result (sum) 
  // depends on the fact that 'input' does not affect it
  // when added to sum initially.

  // If we later change to `int product = 1; product *= input;`,
  // then `input` can no longer be initialized to 0.

  // If we later decide to change the special number for the 
  // user to enter for stopping the program to, say, 0, then
  // this code will cease to function.
  int input = 0, sum = 0;

  while (input != -1) {
    sum += input;
    printf("Enter a value (-1 to stop): ");
    scanf("%d", &input);
  }

  printf("The sum of all values is: %d\n", sum);
}
