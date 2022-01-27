/*
Part 1 — Substance Test

Table 1 below shows the normal boiling points of several substances. Write a C program that
prompts the user for the observed boiling point of a substance in degree Celsius (◦C) (as an integer),
and identifies the substance if the observed boiling point is within t ◦C of the expected boiling point, 
where t is a threshold defined by the user. If the data input is not within t ◦C of any of the boiling 
points in the table, the program should output the message: 

    Substance unknown.

Table 1: Substances and their normal boiling points.
| Substance | Normal boiling point |
|-----------|----------------------|
| Water     | 100                  |
| Mercury   | 357                  |
| Copper    | 1187                 |
| Silver    | 2193                 |
| Gold      | 2660                 |

Here is a sample output from an execution of the program:

    Enter the threshold in Celsius: 10<enter>
    Enter the observed boiling point in Celsius: 2668<enter>
    The substance you tested is: Gold

Here is another example:

    Enter the threshold in Celsius: 30<enter>
    Enter the observed boiling point in Celsius: 1156<enter>
    Substance unknown.

Note: you may assume that the entered values by the user are valid integers within the range allowed
by the int type. The test cases will only use threshold values sufficiently small to yield unique
answers.
*/

//
// APS105-W22 Lab 3 Part 1 - Substance Test
//
// This program identifies a substance if its boiling point (given by the user) is within a given 
// threshold of the expected boiling point of various substances
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int  WATER_BOILING_POINT = 100, MERCURY_BOILING_POINT = 357, COPPER_BOILING_POINT = 1187, SILVER_BOILING_POINT = 2193, GOLD_BOILING_POINT = 2660;
    int threshold, boiling_point;

    printf("Enter the threshold in Celsius: ");
    scanf("%d", &threshold);

    printf("Enter the observed boiling point in Celsius: ");
    scanf("%d", &boiling_point);
    
    if (abs(boiling_point - WATER_BOILING_POINT) <= threshold) {
        printf("The substance you tested is: Water");
    } else if (abs(boiling_point - MERCURY_BOILING_POINT) <= threshold) {
        printf("The substance you tested is: Mercury");        
    } else if (abs(boiling_point - COPPER_BOILING_POINT) <= threshold) {
        printf("The substance you tested is: Copper");        
    } else if (abs(boiling_point - SILVER_BOILING_POINT) <= threshold) {
        printf("The substance you tested is: Silver");        
    } else if (abs(boiling_point - GOLD_BOILING_POINT) <= threshold) {
        printf("The substance you tested is: Gold");        
    } else {
        printf("Substance unknown.");
    }

    return 0;
}

