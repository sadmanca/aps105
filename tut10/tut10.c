/*
TUTORIAL 10 Question:

In Lab 9, you are expected to build your personal music library using linked
lists. In this tutorial, we will go back to arrays for storing the songs in the
music library, and practice a particular sorting algorithm using this music
library.

Each song in your program will be represented by the following structure:

    typedef struct song {
    char songName[MAX_LENGTH];
    char artist[MAX_LENGTH];
    char genre[MAX_LENGTH];
    } Song;

Rather than using a linked list in Lab 9, your personal music library in this
tutorial will be stored in an array. For this reason, you can assume that there
will be no more than 100 songs in the library:

    Song Library[MAX_LIBRARY_SIZE];

This declaration creates 100 elements of an array, each of which has a songName,
artist, and genre in it. As a result, unlike Lab 9, you will not need to
dynamically allocate any data. A pointer to the string for the song name for
element i of that array would be referred to as:

    Library[i].songName

and similarly the artist name by:

    Library[i].songName[2]

Very similar to Lab 9, your program will support a command-driven interface,
with the following four commands:

**Command I**: Inserts a new song to the end of the music library. Implement a
function named inputStringFromUser() to prompt the user for a song name, an
artist, and a genre. The insertion should be performed into the element after
the end of the current set of songs in the array. For example, the first
insertion should go in the first element of the array, the next at the second,
and so on.

**Command P**: Prints the entire music library. If the library is empty, your
program prints "The music library is empty."

**Command S**: Sorts the music library in ascending alphabetical order by artist. If
two or more songs have the same artist, it sorts in ascending alphabetical order
by their song names. To implement this command, your program should call the
\verb|cocktailSort()| function with the following prototype:

    void cocktailSort(Song library[], int size);

**Command Q**: Quits the program without printing anything. An error message
"Invalid command." will be printed for all other commands. The program will then
continue to prompt for the next command.
*/