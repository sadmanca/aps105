/*
Part 3 — Unit Conversion

Write a C program that asks the user to enter a distance (assumed to be in metres). Convert this
distance to yards, feet, inches and a decimal number, rounded to two decimal places, that indicates
any remaining fraction of an inch. Use the conversion factor 1 inch = 2.54 cm. For example, if the
user enters a value of 3.376, the output will be:

    3 yards, 2 feet, 0 inches, 0.91 inches remainder

The prompt to the user should take the form:

    Please provide a distance in metres:

written by itself on a single line.

Note: if the input leads to something like the following:

    1 yards, 1 feet, 1 inches, 0.00 inches remainder
    
This is fine. You do not need to change the output to read 1 yard, 1 foot, 1 inch. Likewise, if
yards, feet or inches have a value of 0, no need to remove their prints from the output.
*/

//
// APS105 Winter 2022 Lab 1 Part 3
//
// A C program that converts metres to yards, feet and inches.
//

#include <stdio.h>
int main() {
    double input = 5;
    printf("Please provide a distance in metres: ");
    scanf("%lf", &input);

    double remainder = input * 100 / 2.54;
    int yards = remainder / 36;
    remainder = remainder / 36 - yards;

    int feet = remainder * 3;
    remainder = remainder * 3 - feet;

    int inches = remainder * 12;
    remainder = remainder * 12 - inches;

    printf("%d yards, %d feet, %d inches, %.2f inches remainder", yards, feet, inches, remainder);

    return 0;
}