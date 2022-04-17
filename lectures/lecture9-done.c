#include <stdbool.h>
#include <stdio.h>

// This program demonstrates how a boolean variable, 'done', can be used to exit
// the loop. Do not use 'break' for better coding style, readability, and
// robustness.

int main(void) {
  bool done = false;

  for (int i = 1; i <= 10 && !done; i++) {
    printf("i = %d\n", i);

    if (i * i >= 25) {
      printf("We are done.\n");
      done = true;
    }
  }

  // Here's another potential way to exit the loop. But it requires copying and
  // pasting code (from i * i >= 25 to i * i <= 25) and is fragile: changes in
  // one copy may not be made correctly in another copy. So this is not a good
  // design at all.
  for (int i = 1; i <= 10 && i * i <= 25; i++) {
    printf("i = %d\n", i);

    if (i * i >= 25) {
      printf("We are done.\n");
    }
  }

  return 0;
}
