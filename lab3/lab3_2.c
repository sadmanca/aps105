/*
Part 2 — The Triangle

Write a complete C program that uses the * character to draw a triangle of a given number of rows.
The program first prompts the user to enter the number of rows in the triangle. Your program may
assume that the input is a valid integer from 1 to 20 (inclusive).

Here are some sample outputs from the execution of the program. The output of your program
should match the sample output.

Sample output 1:

    Enter the number of rows in the triangle: 1<enter>
    *

Sample output 2:

    Enter the number of rows in the triangle: 2<enter>
     *
    ***

Sample output 3:

    Enter the number of rows in the triangle: 3<enter>
      *
     * *
    *****
Sample output 4:

    Enter the number of rows in the triangle: 10<enter>
             *
            * *
           *   *
          *     *
         *       *
        *         *
       *           *
      *             *
     *               *
    *******************

Hint: You may find it helpful to draw the required output on a piece of graph paper before writing
your program.
*/

#include <stdio.h>

int main(void) {
    int num_rows;

    printf("Enter the number of rows in the triangle: ");
    scanf("%d", &num_rows);

    int row;
    int spaces_before_first_star = -1, spaces_after_first_star = 1;
    
    for (int i = 0; i < num_rows - 1; i++) {
        printf(" ");
        spaces_before_first_star++;
    }
    
    printf("*\n");
    for (row = 2; row < num_rows; row++) {
        for (int i = 0; i < spaces_before_first_star; i++) {
            printf(" ");
        }
        printf("*");
        for (int i = 0; i < spaces_after_first_star; i++) {
            printf(" ");
        }
        printf("*\n");

        spaces_before_first_star--;
        spaces_after_first_star += 2;
    }

    int num_base_stars = 2 * num_rows - 1;

    if (num_rows != 1) {
        for (int i = 0; i < num_base_stars; i++) {
            printf("*");
        }
    }
    
    return 0;
}