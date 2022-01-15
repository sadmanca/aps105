/*
Part 2 — Car Rental

iRent, a fictional car rental company, is currently having a promotion advertised as “rent 3 days and
drive 1 day free”. The fine print reads that 1 day within each 4-day block is free. This means that
there is no discount for a rental of 1 to 3 days, however, a 4 day rental is charged for only 3 days.
For rental periods of more than 4 days the same rule applies to each 4-day block in the rental period.
For example, if you rent a car for 11 days you are charged for 9 days. This is because it contains two
4-day blocks plus an extra 3 days; each of these first two 4-day blocks is counted as 3 days while
there is no discount for the last 3-day block.

Write a C program that calculates the total amount that a customer should pay for renting a car from
iRent. A 13% HST should be applied when calculating the total amount. Your program reads in
the daily rate or rental charge per day (in dollars) and the rental period (in days). It then prints the
number of free days that the customer receives, followed by the total charge (tax inclusive) rounded
to two decimal places.

Here is a sample output from an execution of the program:

    Enter the daily rate: 28.41<enter>
    Enter the rental period (in days): 10<enter>
    Your total free day(s) in this rental is: 2
    Your total charge including taxes is: 256.83

Note: You can assume that the user enters valid numbers. You should represent the HST tax rate
using a constant variable
*/

#include <stdio.h>
int main() {
    int rental_period, free_days;
    double rate, charge;

    printf("Enter the daily rate: ");
    scanf("%lf", &rate);
    printf("Enter the rental period (in days): ");
    scanf("%d", &rental_period);

    free_days = rental_period % 4;
    charge = (rental_period - free_days)*rate*1.13;

    printf("\nYour total free day(s) in this rental is: %d", free_days);
    printf("\nYour total charge including taxes is: %.2f", charge);

    return 0;
}