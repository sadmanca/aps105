/*
APS105S-W22 Lab 5 Part 1 - Median of two sorted arrays

Implement a C function, named median, that receives two arrays as parameters
passed and returns the median of the values stored in these two arrays. The
two arrays are sorted. The prototype of the function MUST be:

    double median(int a[], int b[], int sizeA, int sizeB);

For example, if I have int a[] = {1, 2, 10, 12, 100}; and int b[] = {3, 11,
20, 500, 600};, then the median is (11+12)/2 = 11.5.
*/

#include <stdio.h>

double median(int a[], int b[], int sizeA, int sizeB) {
    int combined_size = sizeA + sizeB;
    int combined[combined_size];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < sizeA && j < sizeB) {
        if (a[i] < b[j]) {
            combined[k] = a[i];
            i++;
        } else {
            combined[k] = b[j];
            j++;
        }
        k++;
    }

    if (i == sizeA) {
        while (j < sizeB) {
            combined[k] = b[j];
            j++;
            k++;
        }
    }

    if (j == sizeB) {
        while (i < sizeA) {
            combined[k] = a[i];
            i++;
            k++;
        }
    }

    if (combined_size % 2 == 0) {
        return ((double) combined[combined_size / 2] + combined[combined_size / 2 - 1]) / 2;
    } else {
        return (double) combined[combined_size / 2];
    }
}

int main(void) {
    // test median method
    // int a[] = {1, 2, 10, 12, 100};
    // int b[] = {3, 11, 20, 500, 600};
    int a[] = {1, 2, 10};
    int b[] = {500, 600};
    int sizea = sizeof(a)/sizeof(a[0]);
    int sizeb = sizeof(b)/sizeof(b[0]);
    printf("%.1lf", median(a, b, sizea, sizeb));
    return 0;
}