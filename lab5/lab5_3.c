/*
APS105S-W22 Lab 5 Part 3 - Longest Common Sequence

This part requires that you implement a C function that takes in as parameters
two arrays and their sizes. This function is required to find the longest common
sequence of numbers in these arrays. The prototype of the function MUST be:

    void longestMutualSequence(int firstArr[], int secondArr[], int sizeA, int sizeB);

For example, if you have int a[] = {1, 2, 3, 4, 1000, 90, 100, 110, 200, 202};
and int b[] = {1, 1, 2, 3, 90, 100, 110, 200, 202, 600};, your function should
output:

    Longest Common Sequence is 90, 100, 110, 200, 202.

If there are two common sequences of the same size, your function should print
out the first common sequence found.
*/

#include <stdio.h>

void longestMutualSequence(int firstArr[], int secondArr[], int sizeA, int sizeB) {
    int longest_seq[sizeA + sizeB];
    int longest_len = 0;
    int curr_len = 0;

    for (int i = 0; i < sizeA; i++) {
        for (int j = 0; j < sizeB; j++) {
            if (firstArr[i] == secondArr[j]) {
                // declare initial length of common sequence as 1
                // because a common value between firstArr and secondArr has been found
                curr_len = 1;
                int curr_i = i;
                int curr_j = j;

                // iterate through both arrays starting at the common value at
                // indices i and j until a common value is not found
                // or until last value of first or second array is reached
                while (firstArr[curr_i + 1] == secondArr[curr_j + 1] && curr_i < sizeA - 1 && curr_j < sizeB - 1) {
                    curr_len++;
                    curr_i++;
                    curr_j++;
                }

                // if length of current common sequence is longer than previous common sequence
                // then replace longest_seq with values from current common sequence
                if (curr_len > longest_len) {
                    longest_len = curr_len;
                    // only need to use values from one array
                    // because the sequence is common for both arrays
                    curr_i = i;
                    for (int k = 0; k < curr_len; k++) {
                        longest_seq[k] = firstArr[curr_i];
                        curr_i++;
                    }
                }
            }
        }
    }

    printf("Longest common sequence is ");
    int i = 0;
    for (i = 0; i < longest_len - 1; i++) {
        printf("%d, ", longest_seq[i]);
    }
    printf("%d.", longest_seq[i]);
}

int main(void) {
    // int a[] = {1, 2, 3, 4, 1000, 90, 100, 110, 200, 202};
    // int b[] = {1, 1, 2, 3, 90, 100, 110, 200, 202, 600};
    // Longest common sequence is 90, 100, 110, 200, 202.

    // int a[] = {1, 80, 83, 75, 56};
    // int b[] = {75, 56, 56, 75, 56};
    // Longest common sequence is 75, 56.
    
    int a[] = {3,1,2,1};
    int b[] = {1,2,1,3};

    longestMutualSequence(a, b, sizeof(a)/sizeof(a[0]), sizeof(b)/sizeof(b[0]));
    return 0;
}