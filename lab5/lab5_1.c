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
#include <math.h>
#include <stdbool.h>

// double array_median(int a[], int sizeA) {
//     if (sizeA % 2 == 0) {
//         return ((double) a[sizeA / 2] + a[(sizeA / 2) + 1]) / 2;
//     } else {
//         return (double) a[sizeA / 2];
//     }
// }

double median(int a[], int b[], int sizeA, int sizeB) {
    // return (array_median(a, sizeA) + array_median(b, sizeB)) / 2;
    int combined[sizeA + sizeB];
    for (int i = 0; i < sizeA; i++) {
        combined[i] = a[i];
    }
    bool is_combined = false;
    for (int i = 0; i < sizeB; i++) {
        while (!is_combined) {
            

            if (sizeof(combined)/sizeof(combined[0]) == sizeA + sizeB) {
                is_combined = true;
            }
        }
    }
    
}

int main(void) {
    return 0;
}