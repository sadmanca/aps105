#include <stdbool.h>
#include <stdio.h>

int getUserInput();
void testGoldbachConjecture(int number);
bool isPrime(int number);
int nextPrimeNumberAfter(int primeNumber);
bool isEven(int number);

int main(void) {
  int number = getUserInput();
  testGoldbachConjecture(number);
  return 0;
}

int getUserInput() {
  int number;
  bool isFirstEntry = true;

  do {
    if (isFirstEntry) {
      printf("Enter an even number greater than 2: ");
      scanf("%d", &number);
      isFirstEntry = false;
    } else {
      printf("Invalid input. Please make sure that you enter an even number "
             "greater than 2: ");
      scanf("%d", &number);
    }
  } while (!isEven(number) || number <= 2);

  return number;
}

bool isEven(int number) {
  if (number % 2 == 0) {
    return true;
  } else {
    return false;
  }
  // or alternatively:
  // return number % 2 == 0;
}

void testGoldbachConjecture(int number) {
  int firstPart = 2;

  while (true) {
    int secondPart = number - firstPart;

    if (secondPart < firstPart) {
      printf("The Goldbach conjecture is false!\n");
      return; // get out of the while loop.
    } else if (isPrime(secondPart)) {
      printf("The Goldbach conjecture is verified: %d = %d + %d\n", number,
             firstPart, secondPart);
      return;
    } else {
      firstPart = nextPrimeNumberAfter(firstPart);
    }
  }

  return;
}

bool isPrime(int number) {
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      return false;
    }
  }
  return true;
}

int nextPrimeNumberAfter(int primeNumber) {
  if (primeNumber == 2) {
    return 3;
  }

  int nextPrime = primeNumber + 2;

  while (!isPrime(nextPrime)) {
    nextPrime = nextPrime + 2;
  }

  return nextPrime;
}
