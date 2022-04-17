#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int n = 2;
  int count = 0;

  while (count < 5) {
    int mersenneNum = (int)pow(2, n) - 1;

    bool isPrime = true;
    for (int j = 2; j < mersenneNum && isPrime; j++) {
      if (mersenneNum % j == 0)
        isPrime = false;
    }
    if (isPrime) {
      count++;
      printf("%d\n", mersenneNum);
    }
    n++;
  }
}