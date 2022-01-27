/*
Part 3 — Change

In this part, you are asked to write a program that makes change for amounts less than one dollar.
User input should be a positive integer value less than 100, which represents an amount of cash,
in cents. The program should prompt the user for a such a positive integer value, and should then
print the original amount of cash, together with a set of coins (quarters, dimes, nickels, cents) that
could make up that amount. The program should produce change containing the minimum number
of coins required for the given amount. The output should be in a natural, non-stilted form. For
example, input of 58 should produce the following output:

    58 cents: 2 quarters, 1 nickel, and 3 cents.

rather than something like

    58 cents: 2 quarters, 0 dimes, 1 nickels, 3 cents.

Invalid input (0, negative values or positive values of 100 or more) should be rejected by your
program as shown in the examples below. Your program should repeatedly prompt the user for the
next amount, until an invalid amount has been entered. When an invalid amount has been entered
by the user, the program will terminate.

SAMPLE RUN

Shown below is a sample run of the program. The values 10, 16, 20, . . . are entered by the user in
each sample run. Given the same user input, your output should match the following output exactly,
including all punctuation. Any variation from this will result in a loss of marks with some test cases.

    Please give an amount in cents less than 100: 10
    10 cents: 1 dime.
    Please give an amount in cents less than 100: 16
    16 cents: 1 dime, 1 nickel, and 1 cent.
    Please give an amount in cents less than 100: 20
    20 cents: 2 dimes.
    Please give an amount in cents less than 100: 28
    28 cents: 1 quarter and 3 cents.
    Please give an amount in cents less than 100: 30
    30 cents: 1 quarter and 1 nickel.
    Please give an amount in cents less than 100: 36
    36 cents: 1 quarter, 1 dime, and 1 cent.
    Please give an amount in cents less than 100: 67
    67 cents: 2 quarters, 1 dime, 1 nickel, and 2 cents.
    Please give an amount in cents less than 100: 75
    75 cents: 3 quarters.
    Please give an amount in cents less than 100: 99
    99 cents: 3 quarters, 2 dimes, and 4 cents.
    Please give an amount in cents less than 100: -3
    -3 cents: invalid amount.
*/

//
// APS105-W22 Lab 3 Part 3 - Change
//
// This program calculates the minimum number of coins (of quarters, dimes, nickels, and/or cents)
// required to equal the value of a number of cents totalling less than 100 (i.e. less than 1 dollar).
//

#include <stdio.h>
#include <string.h>

int main(void) {
    // variables to store number of coins of each type
    int cents, quarters, dimes, nickels;
    const int QUARTER_VALUE = 25, DIME_VALUE = 10, NICKEL_VALUE = 5;

    printf("Please give an amount in cents less than 100: ");
    while (1) {
        // initialize strings for printing an additional "s" when there are more than 1 coin
        char quarters_plural[9] = "quarter", nickels_plural[8] = "nickel", dimes_plural[6] = "dime", cents_plural[6] = "cent";
        scanf("%d", &cents);
        
        printf("%d cents: ", cents);

        if (cents <= 0 || cents >= 100) {
            printf("invalid amount.");
            break;
        }

        quarters = cents / QUARTER_VALUE;
        cents -= quarters * QUARTER_VALUE;

        dimes = cents / DIME_VALUE;
        cents -= dimes * DIME_VALUE;

        nickels = cents / NICKEL_VALUE;
        cents -= nickels * NICKEL_VALUE;

        // if there is more than 1 coin of a type, set string of coin to be plural
        if (quarters > 1) {
            strcpy(quarters_plural, "quarters");
        }
        if (nickels > 1) {
            strcpy(nickels_plural, "nickels");
        }
        if (dimes > 1) {
            strcpy(dimes_plural, "dimes");
        }
        if (cents > 1) {
            strcpy(cents_plural, "cents");
        }

        // nested if-else for all possible combinations of types and singularity/plurality of coins
        if (quarters) {
            printf("%d %s", quarters, quarters_plural);
            if (dimes) {
                if (nickels) {
                    if (cents) {
                        // quarters dimes nickels cents
                        printf(", %d %s", dimes, dimes_plural);
                        printf(", %d %s", nickels, nickels_plural);
                        printf(", and %d %s.", cents, cents_plural);
                    } else {
                        // quarters dimes nickels
                        printf(", %d %s", dimes, dimes_plural);
                        printf(", and %d %s.", nickels, nickels_plural);
                    }
                } else if (cents) {
                    // quarters dimes cents
                    printf(", %d %s", dimes, dimes_plural);
                    printf(", and %d %s.", cents, cents_plural);
                } else {
                    // quarters dimes
                    printf(" and %d %s.", dimes, dimes_plural);
                }
            } else if (nickels) {
                if (cents) {
                    // quarters nickels cents
                    printf(", %d %s", nickels, nickels_plural);
                    printf(", and %d %s.", cents, cents_plural);
                } else {
                    // quarters nickels
                    printf(" and %d %s.", nickels, nickels_plural);
                }
            } else if (cents) {
                // quarters cents
                printf(" and %d %s.", cents, cents_plural);
            } else {
                // quarters
                printf(".");
            }
        } else if (dimes) {
            printf("%d %s", dimes, dimes_plural);
            if (nickels) {
                if (cents) {
                    // dimes nickels cents
                    printf(", %d %s", nickels, nickels_plural);
                    printf(", and %d %s.", cents, cents_plural);
                } else {
                    // dimes nickels
                    printf(" and %d %s.", nickels, nickels_plural);
                }
            } else if (cents) {
                // dimes cents
                printf(" and %d %s.", cents, cents_plural);
            } else {
                // dimes
                printf(".");
            }
        } else if (nickels) {
            printf("%d %s", nickels, nickels_plural);
            if (cents) {
                // nickels cents
                printf(" and %d %s.", cents, cents_plural);
            } else {
                // nickels
                printf(".");
            }
        } else if (cents) {
            // cents
            printf("%d %s.", cents, cents_plural);
        }

        printf("\nPlease give an amount in cents less than 100: ");
    }
    return 0;
}