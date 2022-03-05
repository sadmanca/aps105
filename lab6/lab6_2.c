/*
APS105S-W22 Lab 6 Part 2 - Sudoku

The famous Sudoko game is played on a grid of 9 × 9. Each empty square in this
grid has to be filled with a number from 1 – 9 without repeating any numbers
within the row and column of the square. We will implement a program in C to
help us solve a simple 4 × 4 Sudoko puzzle. We will investigate a 4 × 4 Sudoko
puzzle, where each row or column is missing 2 numbers only. To fill in a square,
if you scan the row (or column) of the square, you will eliminate two out of 4
numbers, and if you then scan the column (or row) of the square, you will
eliminate one more number. Thus, you will be left with one missing number in the
row and column of the empty square. Thus, you need to fill in the square with
this missing number. We are NOT studying the case where scanning the row and
column of a square eliminates only 2 numbers.

For example, in the following grid, row 0 and column 0 is empty. If we scan row
0, we can eliminate 3 and 4 since they are already there in the row. And if we
scan the column, we can additionally eliminate 1. Hence, we can fill the square
with 2.

    0 3 4 0
    4 0 0 2
    1 0 0 3
    0 2 1 0

After solving the Sudoko puzzle above, it will look like,

    2 3 4 1
    4 1 3 2
    1 4 2 3
    3 2 1 4

You are required to implement a function that fills in empty squares in the
Sudoko grid. The function prototype is:

    void fillSudoko(const int Size, int sudoko[Size][Size]);

Size is a named constant const int Size = 4; and sudoko is the 4 × 4 sudoko
grid. You are encouraged to use other functions. For example, have a function
that checks the row of a square and another to check the column of a square.
Although you will only submit your functions, you are required to implement the
whole program on VS Code to test it before submitting.

Hint: When you visit an empty square, you can have a “table” that holds which
numbers are found in the row and column of the square. This will help you know
which number is missing.
*/

#include <stdbool.h>
#include <stdio.h>

int getNumsInRow(int nums_in_row[], int row, const int Size, int sudoko[Size][Size]);
int getNumsInCol(int nums_in_col[], int col, const int Size, int sudoko[Size][Size]);
int getMissingNum(int row_size, int col_size, int nums_in_row[row_size], int nums_in_col[col_size], const int Sizw);
void printSudoko(const int Size, int sudoko[Size][Size]);

void fillSudoko(const int Size, int sudoko[Size][Size]) {
    for (int row = 0; row < Size; row++) {
        for (int col = 0; col < Size; col++) {
            if (sudoko[row][col] == 0) {
                int nums_in_row[Size];
                int nums_in_col[Size];
                int row_size = getNumsInRow(nums_in_row, row, Size, sudoko);
                int col_size = getNumsInCol(nums_in_col, col, Size, sudoko);
                sudoko[row][col] = getMissingNum(row_size, col_size, nums_in_row, nums_in_col, Size);
            }
        }
    }
}

int getNumsInRow(int nums_in_row[], int row, const int Size, int sudoko[Size][Size]) {
    int row_size = 0;
    for (int col = 0; col < Size; col++) {
        if (sudoko[row][col] != 0) {
            nums_in_row[row_size] = sudoko[row][col];
            row_size++;
        }
    }
    return row_size;
}

int getNumsInCol(int nums_in_col[], int col, const int Size, int sudoko[Size][Size]) {
    int col_size = 0;
    for (int row = 0; row < Size; row++) {
        if (sudoko[row][col] != 0) {
            nums_in_col[col_size] = sudoko[row][col];
            col_size++;
        }
    }
    return col_size;
}

int getMissingNum(int row_size, int col_size, int nums_in_row[row_size], int nums_in_col[col_size], const int Size) {
    for (int num = 1; num <= Size; num++) {
        bool found_in_row = false;
        bool found_in_col = false;

        for (int row = 0; row < row_size && !found_in_row; row++) {
            if (nums_in_row[row] == num) {
                found_in_row = true;
            }
        }

        for (int col = 0; col < col_size && !found_in_col; col++) {
            if (nums_in_col[col] == num) {
                found_in_col = true;
            }
        }

        if (!found_in_row && !found_in_col) {
            return num;
        }
    }
}

void printSudoko(const int Size, int sudoko[Size][Size]) {
    for (int row = 0; row < Size; row++) {
        for (int col = 0; col < Size; col++) {
            printf("%d", sudoko[row][col]);
        }
        printf("\n");
    }
}

int main() {
    // int grid[4][4] = {{0,3,4,0},{4,0,0,2},{1,0,0,3},{0,2,1,0}};
    int grid[4][4] = {{0, 4, 1, 0}, {1, 0, 0, 4}, {2, 3, 0, 0}, {0, 0, 2, 3}};

    printf("The sudoko puzzle is:\n");
    printSudoko(4, grid);

    fillSudoko(4, grid);

    printf("The solved puzzle is:\n");
    printSudoko(4, grid);
    return 0;
}