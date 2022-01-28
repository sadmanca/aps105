// APS105S-W22 Lab 4 Part 2 - Erdos-Woods Numbers

#include <stdio.h>

int gcd(int num_1, int num_2) {
    if (num_1 == 0) {
        return num_2;
    } else {
        return gcd(num_2 % num_1, num_1);
    }
}

int main(void) {
    int start_k = -1, stop_k = -1, start_a = -1, stop_a = -1;
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

    // start_k = 3;
    // stop_k = 20;
    // start_a = 1;
    // stop_a = 10000;

    // start_k = 3;
    // stop_k = 22;
    // start_a = 3000000;
    // stop_a = 4000000;

    // start_k = 3;
    // stop_k = 15;
    // start_a = 1;
    // stop_a = 3000;

    int is_erdos_woods;
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