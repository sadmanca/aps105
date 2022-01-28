// APS105S-W22 Lab 4 Part 1

// This program includes a function named "triangle" that outputs Pascal's
// triangle. In general the Pascal's triangle can be represented as:

//             0C0
//           1C1 1C0
//         2C2 2C1 2C0
//       3C3 3C2 3C1 3C0
//      4C4 4C3 4C2 4C1 4C0

// where nCr represents how many ways there are to choose r from n, not
// counting duplicates.

// The formula used to calculate nCr can be written as:
//  nCr=n!/(r!(n-r)!)
// where n! is the factorial of n.

#include <stdio.h>

int factorial(int n) {
	int factorial = 1;
	for (int i = n; i > 1; i--) {
		factorial *= i;
	}
	return factorial;
}

int choose(int n, int r) {
	return factorial(n)/(factorial(r) * factorial(n-r));
}

int print_spaces(int num_spaces) {
	for (int i = 0; i < num_spaces; i++) {
		printf(" ");
	}
	return 0;
}

int triangle(int rows) {
	if (rows == 1) {
		printf("%d", choose(0, 0));
		print_spaces(5);
		printf("\n");
	} else if (rows == 0) {
		printf("");
	} else {
		int spaces = 3 * (rows - 1);
		print_spaces(spaces);
		printf("%d", choose(0, 0));
		print_spaces(5);
		printf("\n");

		for (int row = 2; row <= rows; row++) {
			spaces -= 3;
			print_spaces(spaces);
			printf("%d", choose(row - 1, row - 1));
			for (int col = 2; col <= row; col++) {
				printf("%6d", choose(row - 1, row - col));
			}
			print_spaces(5);
			printf("\n");
		}
	}
}

int main(void) {
  int rows;

  do {
	printf("Enter the number of rows: ");
	scanf("%d", &rows);

	if (rows >= 0) {
	  triangle(rows);
	}
  } while (rows >= 0);

  return 0;
}
