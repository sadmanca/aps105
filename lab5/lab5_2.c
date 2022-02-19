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
    int longest_seq[sizeA];
    int longest_len = 0;
    
    for (int i = 0; i < sizeA; i++) {
        // declare length of increasing sequence as 1
        // because the array will always have at least 1 item
        int curr_len = 1;

        // determine length of longest increasing sequence starting at i
        // use separate variable index to avoid changing i because we want to iterate 
        // through every potential starting index i in the array
        int index = i; 
        while (a[index + 1] > a[index] && index < sizeA - 1) {
            curr_len++;
            index++;
        }

        // if length of current increasing sequence is longer than previous longest sequence,
        // then replace longest_seq with the values in the current increasing sequence
        if (curr_len > longest_len) {
            longest_len = curr_len;
            index = i;
            for(int j = 0; j < curr_len; j++) {
                longest_seq[j] = a[index];
                index++;
            }
        }
    }
    
    printf("Longest sequence is ");
    int i = 0;
    for (i = 0; i < longest_len - 1; i++) {
        printf("%d, ",longest_seq[i]);
    }
    printf("%d.", longest_seq[i]);
}

int main(void) {
    int a[] =  {1, 3, 10, 1, 7, 8, 10, 30, 0};
    // int a[] =  {-1, 0, -2, 1, -3, 3, -10, 5, -5, 8, -8, -10, 10, -6, 6, -7, 7, -9, 9, 0};
    longestSequence(a, sizeof(a)/sizeof(a[0]));
    return 0;
}