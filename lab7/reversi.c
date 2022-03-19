//
// Author: Mohammad Sadman Hossain
//

// #include "reversi.h"

#include <stdbool.h>
#include <stdio.h>

const int MAX_DIM = 26;
const char WHITE = 'W';
const char BLACK = 'B';
const char EMPTY = 'U';
// directions to check move legality, starting SOUTH and rotating clockwise
const int directions[8][2] = {{1, 0},
                              {1, -1},
                              {0, -1},
                              {-1, -1},
                              {-1, 0},
                              {-1, 1},
                              {0, 1},
                              {1, 1}};

void printBoard(char board[][26], int n);
bool positionInBounds(int n, int row, int col);
bool checkLegalInDirection(char board[][26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol);

void initBoard(char board[][MAX_DIM], int n) {
    // initially set all tiles to EMPTY 'U'
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] = EMPTY;
        }
    }

    // set center white tiles
    board[n / 2 - 1][n / 2 - 1] = WHITE;
    board[n / 2][n / 2] = WHITE;

    // set center black tiles
    board[n / 2 - 1][n / 2] = BLACK;
    board[n / 2][n / 2 - 1] = BLACK;
}

void printBoard(char board[][MAX_DIM], int n) {
    // print top indices row
    printf("  ");  // 2 spaces
    for (int i = 0; i < n; i++) {
        // print indices starting at 'a'
        printf("%c", 'a' + i);
    }
    printf("\n");

    // print each row with left indices and tiles
    for (int i = 0; i < n; i++) {
        // print left indices
        printf("%c ", 'a' + i);
        for (int j = 0; j < n; j++) {
            // print tile at index i, j
            printf("%c", board[i][j]);
        }
        printf("\n");
    }
}

// check whether a (row, col) position is within board dimensions
bool positionInBounds(int n, int row, int col) {
    if (row < n && col < n && row >= 0 && col >= 0) {
        return true;
    }
    return false;
}

// check whether (row, col) can have a tile of 'colour' placed
bool checkLegalInDirection(char board[][26], int n, int row, int col,
                           char colour, int deltaRow, int deltaCol) {
    // go to next tile in direction
    int currRow = row + deltaRow;
    int currCol = col + deltaCol;

    // false if next immediate tile in direction is empty or of same colour as current turn
    if (board[currRow][currCol] == EMPTY || board[currRow][currCol] == colour) {
        return false;
    }

    // keep searching in direction until out of board bounds or reached same coloured/EMPTY tile
    while (positionInBounds(n, currRow, currCol) &&
           board[currRow][currCol] != colour &&
           board[currRow][currCol] != EMPTY) {
        currRow += deltaRow;
        currCol += deltaCol;
    }

    // if tile at end of search is same colour, then tiles can be flipped and direction is legal
    if (positionInBounds(n, currRow, currCol) && board[currRow][currCol] == colour) {
        return true;
    }
    return false;
}

void printAvailableMoves(char board[][MAX_DIM], int n, char colour) {
    printf("Available moves for %c:\n", colour);

	// iterate through each row and col of board
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {

            // only check possible moves if current tile is empty
            if (board[row][col] == EMPTY) {
                bool legal = false;
                for (int dir = 0; dir < 8 && !legal; dir++) {
                    if (checkLegalInDirection(board, n, row, col, colour, directions[dir][0], directions[dir][1])) {
                        printf("%c%c\n", 'a' + row, 'a' + col);
                        legal = true;  // only needs to be valid in one direction to be a legal move at a tile
                    }
                }
            }

        }
    }
}

void setupBoardConfig(char board[][MAX_DIM], int n) {
    char colour = ' ';
    char rowChar = ' ';
    char colChar = ' ';
	int row = -1;
	int col = -1;

    printf("Enter board configuration:\n");
    while (true) {
        scanf(" %c %c %c", &colour, &rowChar, &colChar);

        // end config input when '!!!' is inputted
        if (colour == '!') {
            return;
        }

		// convert letter input to row/col number and set tile at location to inputted colour
        row = rowChar - 'a';
        col = colChar - 'a';
		board[row][col] = colour;
    }
}

bool checkValidAndFlip(char board[][MAX_DIM], int n, int row, int col, char colour) {
    if (!positionInBounds(n, row, col)) {
        return false;
    }

    bool isFlipped = false;
    for (int dir = 0; dir < 8; dir++) {
        // flip tiles in each direction that is valid
        if (checkLegalInDirection(board, n, row, col, colour, directions[dir][0], directions[dir][1])) {
            isFlipped = true;
            int currRow = row;
            int currCol = col;

            bool finishedFlipping = false;
            while (!finishedFlipping) {
				// change tiles in direction to colour, starting with the empty tile that is a valid move
                board[currRow][currCol] = colour;
                currRow += directions[dir][0];
                currCol += directions[dir][1];

				// stop flipping in direction when tile with same colour is reached
                if (board[currRow][currCol] == colour) {
                    finishedFlipping = true;
                }
            }
        }
    }

    return isFlipped;
}

void makeMove(char board[][MAX_DIM], int n) {
    char colour = ' ';
    char rowChar = ' ';
    char colChar = ' ';

    printf("Enter a move:\n");
    scanf(" %c %c %c", &colour, &rowChar, &colChar);
    int row = rowChar - 'a';
    int col = colChar - 'a';

    if (checkValidAndFlip(board, n, row, col, colour)) {
        printf("Valid move.\n");
    } else {
        printf("Invalid move.\n");
    }
}

// void playGame(char board[][MAX_DIM], int n, char playerColour, char computerColour) {
// }

// void getPlayerColour(char* playerColour, char computerColour) {
//     if (computerColour == BLACK) {
//         *playerColour = WHITE;
//     } else if (computerColour == WHITE) {
//         *playerColour = BLACK;
//     }
// }

int main(void) {
    char board[MAX_DIM][MAX_DIM];
    int n = 0;

    char computerColour = 'B';
    char playerColour = 'W';

    printf("Enter the board dimension: ");
    scanf("%d", &n);

    // printf("Computer plays (B/W): ");
    // scanf("%c\n", &computerColour);
    // getPlayerColour(&playerColour, computerColour);

    initBoard(board, n);
    printBoard(board, n);

    setupBoardConfig(board, n);
    printBoard(board, n);

    printAvailableMoves(board, n, WHITE);
    printAvailableMoves(board, n, BLACK);

    makeMove(board, n);
    printBoard(board, n);

    // playGame(board, n, playerColour, computerColour);
    return 0;
}
