//
//  lecture20-dynamic2darrays.c
//
//  Created by Baochun Li on 2022-03-01.
//  Copyright © 2022 Baochun Li. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  printf("Enter the number of students: ");
  scanf("%d", &n);

  // declaring and initializing a two-dimensional array
  // using dynamic memory allocation on the heap
  int **marks = malloc(n * sizeof(int *));

  // Check if my allocation is successful
  if (marks == NULL) {
    printf("Not enough memory! Bailing out.\n");
    return 0;
  }

  for (int row = 0; row < n; row++) {
    marks[row] = malloc(n * sizeof(int));
    if (marks[row] == NULL) {
      printf("Not enough memory! Bailing out.\n");
      return 0;
    }
  }

  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      printf("Enter mark for student number (%d, %d): ", row, col);

      scanf("%d", &marks[row][col]);
      // alternatively, we can write: scanf("%d", *(marks + row) + col);
    }
  }

  for (int row = 0; row < n; row++) {
    for (int col = 0; col < n; col++) {
      printf("The mark for student number (%d, %d) is: %d\n", row, col,
             marks[row][col]);
      // alternatively, we can write: *(*(marks + row) + col)
    }
  }

  for (int row = 0; row < n; row++) {
    free(marks[row]);
    // alternatively, we can write: free(*(marks + row))
  }

  free(marks);

  printf("All dynamically allocated memory has been freed.\n");

  return 0;
}
