// APS105S-W22 Lab 4 Part 2 - Erdos-Woods Numbers

// This program finds an Erdos-Woods number (if one exists) within a range of
// k values (inclusive; given by user) by testing for validity within a range of
// a values (inclusive; given by user).

// VALIDITY OF AN ERDOS-WOODS NUMBER: if for a positive integer k there is a 
// positive integer a such that each evaluation of gcd(a, a + i) > 1 or 
// gcd(a + k, a + i) > 1 returns true (where 0 < i < k), then k is an Erdos-Woods number.

#include <stdio.h>

int gcd(int num_1, int num_2) {
    if (num_1 == 0) {
        return num_2;
    } else {
        return gcd(num_2 % num_1, num_1);
    }
}

int main(void) {
    int start_k = -1;
    int stop_k = -1;
    int start_a = -1;
    int stop_a = -1;

    while (start_k <= 2) {
        printf("Enter the number to start searching for k (> 2, inclusive): ");
        scanf("%d", &start_k);
    }
    while (stop_k <= start_k) {
        printf("Enter the number to stop searching for k (inclusive): ");
        scanf("%d", &stop_k);
    }
    while (start_a <= 0) {
        printf("Enter the number to start searching for a (> 0, inclusive): ");
        scanf("%d", &start_a);
    }
    while (stop_a <= start_a) {
        printf("Enter the number to stop searching for a (inclusive): ");
        scanf("%d", &stop_a);
    }

    int is_erdos_woods = 1;
    for (int k = start_k; k <= stop_k; k++) {
        printf("Trying k = %d...\n", k);
        for (int a = start_a; a <= stop_a; a++) {
            for (int i = 0; i < k; i++) {
                is_erdos_woods = 1;
                if (!(gcd(a, a + i) > 1 || gcd(a + k, a + i) > 1)) {
                    is_erdos_woods = 0;
                    break;
                }
            }
            if (is_erdos_woods) {
                printf("Erdos-Woods number: %d\n", k);
                printf("a = %d", a);
                break;
            }
        }
        if (is_erdos_woods) {
            break;
        }
    }

    if (!is_erdos_woods) {
        printf("Erdos-Woods number not found.");
    }
    return 0;
}