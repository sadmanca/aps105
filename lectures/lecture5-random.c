#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  printf("RAND_MAX = %d\n", RAND_MAX);

  // seeding the random number generator with the current time
  srand(time(NULL));

  // If we don't seed the random number generator with time,
  // the results will be deterministic every time we run the
  // program. Try uncommenting the following line.
  // srand(1);

  printf("#1: Random number 1 between 0 and RAND_MAX: %d\n", rand());
  printf("#2: Random number 2 between 0 and RAND_MAX: %d\n", rand());
  printf("#3: Random number 3 between 0 and RAND_MAX: %d\n", rand());
  printf("#4: Random number 4 between 0 and RAND_MAX: %d\n", rand());
  printf("#5: Random number 5 between 0 and RAND_MAX: %d\n", rand());
  printf("#6: Random number 6 between 0 and RAND_MAX: %d\n", rand());

  return 0;
}
