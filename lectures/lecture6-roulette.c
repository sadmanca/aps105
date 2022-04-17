#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  // Seed the random number generator using the current timestamp
  srand(time(NULL));

  int bet;

  printf("Enter your bet, even or odd? (0 for even, 1 for odd) ");
  scanf("%d", &bet);

  int spin = rand() % 36 + 1;

  if (spin % 2 == bet) {
    printf("You won!\n");
  } else {
    printf("You lost!\n");
  }

  return 0;
}
