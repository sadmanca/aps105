/*
APS105S-W22 Lab 6 Part 1 - Word search puzzle

The twins Kartik and Kunaal want to play word search puzzles with their class.
They want to be faster than everyone else in their class, so they decided to
write a C code to help them find words with a click of a button. Little did they
know, everyone in class decided to do this question.

You are required to implement search2D function:

        void search2D(char word[], int wordSize, const int Size, char
grid[Size][Size]);

search2D receives the word to look for char word[], the size of the word int
wordSize, size of the grid const int Size and the puzzle grid char
grid[Size][Size]. The word size can be between 2 and 23. You are NOT required to
check for the validity of the word size.

search2D should look for the first letter in the word row by row. If it finds
the first letter of the word in the puzzle, it should look for the remaining of
the word in the 8 directions from the south and goes clockwise, i.e. south,
south-west, west, north-west, north, north-east, east and lastly south-east. If
the word is found, the function should print the row and column location of the
first letter of the word and the direction of the word from that location. Row
and column count starts from 0.

These are several tasks in one function; therefore you should implement these
two helper functions that search2D will call.

        1) bool search1D(char word[], int wordSize, const int Size, char
grid[Size][Size], int row, int col, int rowDir, int colDir); 2) void
printFoundLocation(int rowDir, int colDir);

search1D should receive the word in char word[], word size in int wordSize, size
of grid in const int Size and the puzzle grid in char grid[Size][Size], the row
and column indices in the grid of the first letter in the word in int row and
int col, and the row and column direction to look in int rowDir and int colDir.
The function should return if it foPund the word in this direction or not.

printFoundLocation should receive the direction in int rowDir and int colDir and
prints the direction equivalent to these two integers.

You are encouraged to use more functions in your code.

Although you are asked to only implement three functions, you will have to
implement the entire program to test your code on VS Code. We suggest you test
your code with a small 2D array, example 4 by 4 or 5 by 5 and small words of 2
or 3 letters.

--------------------------SEE LAB 6 PDF FOR EXAMPLES ---------------------------
*/

#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// directions
const int NORTH = -1;  // up
const int SOUTH = 1;   // down
const int WEST = -1;   // left
const int EAST = 1;    // right
// constant for only going left/right or up/down
const int ONLY = 0;

void search2D(char word[], int wordSize, const int Size, char grid[Size][Size]);
bool search1D(char word[], int wordSize, const int Size, char grid[Size][Size],
              int row, int col, int rowDir, int colDir);
void printFoundLocation(int rowDir, int colDir);
void printFound(int row, int col);

int main() {
    char grid[3][3] = {{'B', 'A', 'N'}, {'E', 'O', 'N'}, {'N', 'A', 'N'}};
    search2D("BE", 2, 3, grid);
    return 0;
}

bool search1D(char word[], int wordSize, const int Size, char grid[Size][Size],
              int row, int col, int rowDir, int colDir) {
    int curr_row = row;
    int curr_col = col;
    int word_i = 0;

    while ((curr_row != row + rowDir * Size - 1 ||
            curr_col != col + colDir * Size - 1) &&
           (word_i < wordSize) && (curr_row < Size && curr_row >= 0) &&
           (curr_col < Size && curr_col >= 0)) {
        if (grid[curr_row][curr_col] == word[word_i]) {
            curr_row += rowDir;
            curr_col += colDir;
        } else {
            return false;
        }
    }

    if (word_i == wordSize) {
        return true;
    }
    return false;
}

void search2D(char word[], int wordSize, const int Size,
              char grid[Size][Size]) {
    for (int row = 0; row < Size; row++) {
        for (int col = 0; col < Size; col++) {
            if (grid[row][col] == word[0]) {
                if (search1D(word, wordSize, Size, grid, row, col, SOUTH, ONLY)) {
                    printFound(row, col);
                    printFoundLocation(SOUTH, ONLY);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, SOUTH, WEST)) {
                    printFound(row, col);
                    printFoundLocation(SOUTH, WEST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, ONLY, WEST)) {
                    printFound(row, col);
                    printFoundLocation(ONLY, WEST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, NORTH, WEST)) {
                    printFound(row, col);
                    printFoundLocation(NORTH, WEST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, NORTH, ONLY)) {
                    printFound(row, col);
                    printFoundLocation(NORTH, ONLY);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, NORTH, EAST)) {
                    printFound(row, col);
                    printFoundLocation(NORTH, EAST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, ONLY, EAST)) {
                    printFound(row, col);
                    printFoundLocation(ONLY, EAST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, SOUTH, EAST)) {
                    printFound(row, col);
                    printFoundLocation(SOUTH, EAST);
                    return;
                }
            }
        }
    }
}

void printFound(int row, int col) {
    printf("Word found at row %d and column %d ", row, col);
}

void printFoundLocation(int rowDir, int colDir) {
    if (rowDir == SOUTH && colDir == ONLY) {
        printf("in the south direction.");
    } else if (rowDir == SOUTH && colDir == WEST) {
        printf("in the southwest direction.");
    } else if (rowDir == ONLY && colDir == WEST) {
        printf("in the west direction.");
    } else if (rowDir == NORTH && colDir == WEST) {
        printf("in the northwest direction.");
    } else if (rowDir == NORTH && colDir == ONLY) {
        printf("in the north direction.");
    } else if (rowDir == NORTH && colDir == EAST) {
        printf("in the northeast direction.");
    } else if (rowDir == ONLY && colDir == EAST) {
        printf("in the east direction.");
    } else if (rowDir == SOUTH && colDir == EAST) {
        printf("in the southeast direction.");
    }
}

int main() { return 0; }