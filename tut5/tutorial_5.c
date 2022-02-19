#include <math.h>
#include <stdio.h>

int main(void) {
  // The following is a special way of initializing all the cells in an array
  // using a value of 0

  // We can also use boolean type here. Initially, we assume all numbers of
  // prime numbers: bool sieve[100] = true;
  int sieve[100] = {0}, p = 2;

  // Think about what the proper data structure should be to store the `sieve`,
  // which essentially contains boolean values of whether or not the a given
  // number is a prime number.

  // We can used a fixed-size array of size 100 to keep track of whether an
  // integer has been eliminated or not. Since the question explicitly said that
  // there are 100 of these numbers that we need to process, the size of the
  // array can be fixed. This idea also follows the hint provided in the
  // question.

  // An array is a kind of data structure that can store a fixed-size sequential
  // collection of elements of the same type. It is more often used at a
  // collection to store the same type of variables.

  // A while loop executed the compound statement in the brace brackets as long
  // as a given condition is true.

  // The function double sqrt(double x) returns the square root of x. Since the
  // question said p^2 < 100, we can also use that as our condition.
  while (p < sqrt(100)) {
    // Step 1: If p has not yet been eliminated, it must be a prime number and
    // we should print it.

    // Pay attention to details: a space should be printed right after the
    // prime number
    printf("%d ", p);

    // Step 2: Now we will need to eliminate multiples of p
    int i = 2;

    // A while loop is a better choice than a for loop here, since we don't know
    // how many iterations we will need to go through

    // What is the condition of the while loop -- when it is true, we will
    // continue looking for multiples of p?
    while (i * p < 100) {
      // How do we indicate that the number i * p is not a prime number?
      // We can use a value of 1 and put this value into the fixed-size array

      // Of course, we can also use a boolean type for each cell in the array.
      // In this case, we will write: sieve[i * p] = false;

      sieve[i * p] = 1;
      i = i + 1; // or i++ if we wish to use the increment operator
    }

    // Step 3: Now we will need to go ahead and skip the non-prime number slots
    // in the array that has a value of 1 (or false if we are using boolean
    // values)
    p = p + 1; // or p++ if we wish to use the increment operator

    while (sieve[p] == 1) {
      // Toy example: if p now is a non-prime number such as 4, add 1 to p and
      // it becomes 5. We will then test it again to see if it is a prime number
      p = p + 1;
    }
  }

  // Step 4: Printing
  // A good idea is to use a for loop to print the prime numbers in our array
  // The initialization statement is executed first, and only once. This
  // statement allows us to declare and initialize any loop control variables.
  // We do not need to put a statement here, as long as a semicolon appears.

  for (; p < 100; p++)
    // if (sieve[p] == true) or 'if (sieve[p])' if we are using boolean values
    if (sieve[p] == 0)
      printf("%d ", p);

  // Printing an optional newline character
  printf("\n");
  return 0;
}
