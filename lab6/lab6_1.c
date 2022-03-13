/*
APS105S-W22 Lab 6 Part 1 - Word search puzzle

The twins Kartik and Kunaal want to play word search puzzles with their class.
They want to be faster than everyone else in their class, so they decided to
write a C code to help them find words with a click of a button. Little did they
know, everyone in class decided to do this question.

You are required to implement search2D function:

    void search2D(char word[], int wordSize, const int Size, char grid[Size][Size]);

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

    1) bool search1D(char word[], int wordSize, const int Size, char grid[Size][Size], int row, int col, int rowDir, int colDir);
    2) void printFoundLocation(int rowDir, int colDir);

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

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// directions for traversing through words at each row and col
const int NORTH = 1;   // up
const int SOUTH = -1;  // down
const int WEST = 1;    // left
const int EAST = -1;   // right
const int ONLY = 0;    // for only going left/right or up/down

void search2D(char word[], int wordSize, const int Size, char grid[Size][Size]);
bool search1D(char word[], int wordSize, const int Size, char grid[Size][Size],
              int row, int col, int rowDir, int colDir);
void printFoundLocation(int rowDir, int colDir);
void printFoundRowCol(int row, int col);

bool search1D(char word[], int wordSize, const int Size, char grid[Size][Size],
              int row, int col, int rowDir, int colDir) {
    int curr_row = row;
    int curr_col = col;
    int max_row = row + (rowDir * Size - 1);
    int max_col = col + (colDir * Size - 1);
     int word_i = 0;

    while ((curr_row != max_row || curr_col != max_col) &&
           word_i < wordSize &&
           curr_row < Size && curr_row >= 0 &&
           curr_col < Size && curr_col >= 0) {
        if (grid[curr_row][curr_col] != word[word_i]) {
            return false;
        } else {
            curr_row -= rowDir;
            curr_col -= colDir;
            word_i++;
        }
    }

    if (word_i == wordSize) {
        return true;
    }
    return false;
}

void search2D(char word[], int wordSize, const int Size, char grid[Size][Size]) {
    for (int row = 0; row < Size; row++) {
        for (int col = 0; col < Size; col++) {
            if (grid[row][col] == word[0]) {
                if (search1D(word, wordSize, Size, grid, row, col, SOUTH, ONLY)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(SOUTH, ONLY);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, SOUTH, WEST)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(SOUTH, WEST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, ONLY, WEST)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(ONLY, WEST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, NORTH, WEST)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(NORTH, WEST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, NORTH, ONLY)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(NORTH, ONLY);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, NORTH, EAST)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(NORTH, EAST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, ONLY, EAST)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(ONLY, EAST);
                    return;
                } else if (search1D(word, wordSize, Size, grid, row, col, SOUTH, EAST)) {
                    printFoundRowCol(row, col);
                    printFoundLocation(SOUTH, EAST);
                    return;
                }
            }
        }
    }
    printf("Word not found.");
}

void printFoundRowCol(int row, int col) {
    printf("Word found at row %d and column %d ", row, col);
}

void printFoundLocation(int rowDir, int colDir) {
    if (rowDir == SOUTH && colDir == ONLY) {
        printf("in the south direction.");
    } else if (rowDir == SOUTH && colDir == WEST) {
        printf("in the south-west direction.");
    } else if (rowDir == ONLY && colDir == WEST) {
        printf("in the west direction.");
    } else if (rowDir == NORTH && colDir == WEST) {
        printf("in the north-west direction.");
    } else if (rowDir == NORTH && colDir == ONLY) {
        printf("in the north direction.");
    } else if (rowDir == NORTH && colDir == EAST) {
        printf("in the north-east direction.");
    } else if (rowDir == ONLY && colDir == EAST) {
        printf("in the east direction.");
    } else if (rowDir == SOUTH && colDir == EAST) {
        printf("in the south-east direction.");
    }
}

int main() {
    char grid[3][3] = {{'S', 'A', 'D'}, {'M', 'A', 'N'}, {'D', 'A', 'N'}};
    search2D("DAN", 3, 3, grid);

    // char grid[5][5] = {
    //     {'R', 'X', 'R', 'X', 'R'},
    //     {'X', 'A', 'A', 'A', 'X'},
    //     {'R', 'A', 'C', 'A', 'R'},
    //     {'X', 'A', 'A', 'A', 'X'},
    //     {'R', 'X', 'R', 'X', 'R'},
    // };
    // search2D("CAR", 1, 5, grid);

    // char grid[23][23] = {
    //     {'B', 'Q', 'I', 'F', 'J', 'Q', 'K', 'Y', 'T', 'S', 'D', 'W', 'Q', 'S', 'L', 'G', 'U', 'C', 'X', 'A', 'U', 'B', 'D'},
    //     {'E', 'E', 'X', 'C', 'A', 'O', 'B', 'C', 'D', 'E', 'E', 'U', 'O', 'K', 'H', 'G', 'R', 'K', 'J', 'Q', 'A', 'G', 'P'},
    //     {'N', 'D', 'N', 'A', 'I', 'K', 'O', 'L', 'U', 'L', 'A', 'A', 'N', 'U', 'K', 'A', 'Y', 'T', 'U', 'R', 'L', 'P', 'I'},
    //     {'X', 'N', 'J', 'M', 'N', 'E', 'T', 'R', 'A', 'I', 'L', 'U', 'Q', 'E', 'T', 'U', 'K', 'H', 'B', 'G', 'F', 'E', 'I'},
    //     {'S', 'Y', 'N', 'A', 'A', 'G', 'U', 'L', 'Q', 'J', 'H', 'F', 'C', 'Y', 'T', 'S', 'M', 'A', 'S', 'R', 'A', 'H', 'N'},
    //     {'B', 'C', 'A', 'O', 'B', 'C', 'D', 'E', 'E', 'O', 'P', 'Y', 'M', 'N', 'Q', 'S', 'T', 'U', 'V', 'O', 'C', 'O', 'U'},
    //     {'I', 'G', 'Y', 'Z', 'H', 'M', 'A', 'W', 'U', 'K', 'N', 'G', 'B', 'Y', 'I', 'P', 'U', 'A', 'S', 'H', 'H', 'U', 'I'},
    //     {'L', 'R', 'B', 'A', 'R', 'A', 'A', 'Q', 'F', 'J', 'K', 'X', 'Y', 'Q', 'V', 'N', 'R', 'T', 'Y', 'I', 'F', 'R', 'Z'},
    //     {'R', 'I', 'B', 'V', 'J', 'K', 'M', 'P', 'Y', 'Z', 'S', 'I', 'F', 'U', 'X', 'C', 'A', 'B', 'Q', 'N', 'P', 'A', 'H'},
    //     {'C', 'H', 'G', 'N', 'Z', 'X', 'U', 'Z', 'J', 'O', 'N', 'A', 'T', 'H', 'A', 'N', 'Z', 'W', 'R', 'A', 'M', 'J', 'B'},
    //     {'T', 'P', 'K', 'L', 'L', 'K', 'G', 'R', 'Z', 'E', 'R', 'K', 'L', 'N', 'H', 'E', 'Z', 'S', 'S', 'W', 'B', 'E', 'Z'},
    //     {'K', 'X', 'L', 'G', 'U', 'U', 'V', 'G', 'W', 'J', 'J', 'S', 'Q', 'K', 'H', 'J', 'Z', 'T', 'I', 'A', 'T', 'H', 'J'},
    //     {'Q', 'R', 'H', 'O', 'Q', 'G', 'N', 'N', 'Q', 'Z', 'R', 'D', 'U', 'O', 'J', 'Y', 'Y', 'B', 'A', 'K', 'D', 'N', 'O'},
    //     {'A', 'A', 'E', 'C', 'A', 'W', 'U', 'S', 'W', 'O', 'C', 'U', 'Z', 'M', 'Y', 'K', 'U', 'X', 'T', 'E', 'A', 'L', 'V'},
    //     {'G', 'R', 'T', 'N', 'T', 'Y', 'M', 'R', 'P', 'B', 'L', 'F', 'D', 'T', 'A', 'C', 'S', 'F', 'L', 'L', 'K', 'U', 'D'},
    //     {'B', 'R', 'A', 'L', 'W', 'W', 'N', 'X', 'A', 'E', 'F', 'Q', 'G', 'H', 'K', 'B', 'H', 'X', 'C', 'U', 'P', 'J', 'H'},
    //     {'Z', 'V', 'A', 'N', 'K', 'D', 'H', 'R', 'M', 'O', 'H', 'Y', 'O', 'A', 'V', 'Z', 'A', 'D', 'S', 'P', 'Z', 'R', 'S'},
    //     {'I', 'K', 'N', 'B', 'U', 'A', 'O', 'O', 'Z', 'D', 'S', 'M', 'T', 'Y', 'H', 'L', 'N', 'Z', 'L', 'D', 'W', 'M', 'E'},
    //     {'P', 'E', 'S', 'J', 'L', 'F', 'R', 'D', 'S', 'T', 'A', 'X', 'X', 'C', 'M', 'A', 'K', 'H', 'D', 'E', 'G', 'V', 'M'},
    //     {'D', 'C', 'L', 'E', 'O', 'Z', 'W', 'H', 'I', 'K', 'O', 'O', 'A', 'U', 'I', 'J', 'U', 'R', 'X', 'I', 'T', 'F', 'O'},
    //     {'C', 'U', 'G', 'B', 'I', 'O', 'J', 'E', 'R', 'A', 'I', 'D', 'A', 'F', 'Z', 'I', 'Y', 'U', 'S', 'H', 'L', 'J', 'S'},
    //     {'B', 'N', 'H', 'C', 'C', 'G', 'T', 'B', 'B', 'T', 'N', 'T', 'I', 'N', 'T', 'H', 'C', 'X', 'K', 'D', 'D', 'N', 'Y'},
    //     {'A', 'Y', 'O', 'O', 'N', 'J', 'A', 'E', 'Z', 'Z', 'O', 'K', 'J', 'V', 'K', 'G', 'D', 'A', 'F', 'C', 'V', 'R', 'D'},
    // };
    // search2D("BEN", 3, 23, grid);

    // char grid[23][23] = {
    //     {'S', 'Q', 'I', 'F', 'J', 'Q', 'K', 'Y', 'T', 'S', 'D', 'W', 'Q', 'S', 'L', 'G', 'U', 'C', 'X', 'A', 'U', 'B', 'D'},
    //     {'W', 'A', 'X', 'C', 'A', 'O', 'M', 'I', 'G', 'U', 'E', 'L', 'O', 'K', 'H', 'G', 'R', 'K', 'J', 'Q', 'A', 'G', 'P'},
    //     {'Z', 'D', 'L', 'A', 'I', 'K', 'O', 'L', 'U', 'Q', 'S', 'F', 'D', 'V', 'N', 'S', 'A', 'L', 'O', 'H', 'C', 'I', 'N'},
    //     {'X', 'N', 'J', 'M', 'N', 'E', 'T', 'R', 'A', 'I', 'L', 'U', 'Q', 'E', 'T', 'U', 'K', 'H', 'B', 'G', 'F', 'E', 'I'},
    //     {'S', 'A', 'H', 'I', 'L', 'G', 'U', 'L', 'Q', 'J', 'H', 'F', 'C', 'Y', 'T', 'S', 'M', 'A', 'S', 'H', 'A', 'H', 'W'},
    //     {'B', 'C', 'A', 'O', 'B', 'I', 'D', 'E', 'E', 'O', 'P', 'Y', 'M', 'N', 'Q', 'S', 'T', 'U', 'V', 'Z', 'C', 'O', 'R'},
    //     {'I', 'G', 'Y', 'Z', 'H', 'M', 'S', 'W', 'U', 'K', 'N', 'G', 'B', 'Y', 'I', 'P', 'U', 'A', 'S', 'R', 'H', 'U', 'I'},
    //     {'L', 'R', 'F', 'K', 'Q', 'Y', 'U', 'A', 'F', 'J', 'K', 'X', 'Y', 'Q', 'V', 'N', 'R', 'T', 'Y', 'O', 'F', 'R', 'Z'},
    //     {'R', 'I', 'B', 'V', 'J', 'K', 'M', 'P', 'Y', 'Z', 'S', 'I', 'F', 'U', 'X', 'C', 'A', 'B', 'Q', 'W', 'P', 'A', 'H'},
    //     {'C', 'H', 'G', 'N', 'Z', 'X', 'U', 'Z', 'J', 'O', 'N', 'A', 'T', 'H', 'A', 'N', 'Z', 'W', 'R', 'A', 'M', 'J', 'B'},
    //     {'T', 'P', 'K', 'L', 'L', 'K', 'G', 'R', 'Z', 'K', 'R', 'K', 'L', 'N', 'H', 'E', 'Z', 'S', 'S', 'N', 'B', 'E', 'S'},
    //     {'K', 'X', 'L', 'G', 'U', 'U', 'V', 'G', 'A', 'J', 'J', 'S', 'Q', 'K', 'H', 'J', 'Z', 'T', 'I', 'V', 'T', 'H', 'H'},
    //     {'Q', 'R', 'B', 'R', 'I', 'A', 'N', 'F', 'Q', 'Z', 'R', 'D', 'U', 'O', 'J', 'Y', 'Y', 'B', 'A', 'W', 'D', 'N', 'L'},
    //     {'A', 'A', 'N', 'C', 'A', 'W', 'U', 'S', 'W', 'O', 'C', 'U', 'Z', 'M', 'Y', 'K', 'U', 'X', 'T', 'N', 'A', 'L', 'O'},
    //     {'G', 'R', 'G', 'K', 'T', 'I', 'M', 'R', 'P', 'B', 'K', 'F', 'D', 'T', 'A', 'C', 'S', 'F', 'L', 'L', 'K', 'U', 'K'},
    //     {'B', 'R', 'U', 'L', 'W', 'W', 'N', 'X', 'A', 'F', 'F', 'Q', 'G', 'H', 'K', 'M', 'H', 'X', 'C', 'U', 'P', 'J', 'J'},
    //     {'Z', 'B', 'T', 'N', 'K', 'D', 'H', 'K', 'T', 'O', 'H', 'Y', 'O', 'A', 'V', 'A', 'A', 'D', 'S', 'P', 'Z', 'R', 'W'},
    //     {'J', 'K', 'Z', 'B', 'U', 'T', 'O', 'E', 'Z', 'D', 'S', 'M', 'T', 'Y', 'H', 'I', 'N', 'Z', 'L', 'D', 'W', 'M', 'A'},
    //     {'P', 'E', 'S', 'J', 'E', 'V', 'E', 'L', 'Y', 'N', 'A', 'X', 'X', 'C', 'M', 'R', 'K', 'H', 'D', 'E', 'G', 'V', 'I'},
    //     {'D', 'C', 'L', 'I', 'O', 'Z', 'W', 'L', 'I', 'K', 'O', 'O', 'A', 'U', 'I', 'A', 'U', 'R', 'X', 'I', 'T', 'F', 'O'},
    //     {'C', 'U', 'N', 'B', 'I', 'O', 'J', 'Y', 'B', 'E', 'T', 'H', 'E', 'L', 'Z', 'M', 'Y', 'U', 'S', 'H', 'L', 'J', 'T'},
    //     {'B', 'N', 'H', 'C', 'C', 'G', 'T', 'B', 'B', 'T', 'N', 'T', 'I', 'N', 'T', 'H', 'C', 'X', 'K', 'D', 'D', 'N', 'Y'},
    //     {'A', 'M', 'R', 'O', 'S', 'E', 'D', 'V', 'Z', 'Z', 'O', 'K', 'J', 'V', 'K', 'G', 'D', 'A', 'F', 'C', 'V', 'R', 'D'},
    // };
    // search2D("TORONTO", 7, 23, grid);

    return 0;
}