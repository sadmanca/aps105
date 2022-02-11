/*
APS105S-W22 Lab 5 Part 2 - Longest sequence of increasing numbers

In this part, you are asked to write a C function that finds the longest
sequence of increasing numbers in an array. You should implement a function that
receives an array passed as a parameter, and prints the longest sequence of
increasing numbers.

The prototype of the function MUST be:

    void longestSequence(int a[], int sizeA);

For example, we have an int array with values as 1, 3, 10, 1, 7, 8, 10, 30, 0.
Your code should identify the longest sequence of increasing numbers and print:

    Longest sequence is 1, 7, 8, 10, 30.

Array size cannot be 0.
*/

#include <stdio.h>

void longestSequence(int a[], int sizeA) {
    int curr_len = 0;
    int prev_len = 0;
    int start_longest = 0;

    for (int i = 0; i < sizeA; i++) {
        // if next num in sequence is larger than current num
        if (a[i + 1] > a[i]) {
            curr_len++;
            if (curr_len > prev_len) {
                start_longest = i + 1 - curr_len;
                prev_len = curr_len;
            }
        } else {
            prev_len = curr_len;
            curr_len = 0;
        }
    }

    printf("Longest sequence is ");
    int i = 0;
    for (i; i < prev_len; i++) {
        printf("%d, ", a[start_longest + i]);
    }   
    printf("%d.", a[start_longest + i]);
}

int main(void) {
    // int a[] = {1, 3, 10, 1, 7, 8, 10, 30, 0};
    int a[] = {-1, 0, -2, 1, -3, 3, -10, 5, -5, 8, -8, -10, 10, -6, 6, -7, 7, -9, 9, 0};
    int size = sizeof(a) / sizeof(a[0]);
    longestSequence(a, size);
    return 0;
}