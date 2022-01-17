/*
Part 2 — Deciphering a code

You want to use a 4-digit combination lock on a safe where you put your belongings when you
go skiing. As a matter of good practice, you want to change the combination every time you go.
Since you do not want to worry about people finding out what your combination is, you write it on
a paper using a coding scheme. If anyone reads your piece of paper, they will still not know your
combination.

The scheme you use takes the real combination and swaps the 1st and the 4th digit of the combination, 
and replaces each of the 2nd and 3rd digits by their 9’s complement. In other words, a combination of 
the form abcd is encoded as d(9-b)(9-c)a.

For example, if the actual combination is 0428, the encrypted combination will be 8570 (note that 0
and 8 are swapped, 4 is replaced by 9-4, and 2 is replaced by 9-2). The nice thing about his coding
scheme is that you can apply it again on the encrypted combination to calculate the real one.
Since you are now taking APS 105, your task is to write a C program to implement this code-decode
scheme. The user (you!) will, then, enter an encrypted combination and the program will output the
real combination. A sample output from an execution of the program appears below:

    Enter an encrypted 4-digit combination: 8021<enter>
    The real combination is: 1978

Note: You may assume that the entered combination is a valid 4-digit integer number. 
When reading the 4-digit combination from user input, you are not allowed to scan in individual characters;
instead, you should scan in a single integer using scanf.
*/

#include <stdio.h>

int main() {
    int combination;
    int thousands, hundreds, tens, ones;
    printf("Enter an encrypted 4-digit combination: ");
    scanf("%d", &combination);
    
    ones = combination % 10;
    combination = combination / 10;
    tens = combination % 10;
    combination = combination / 10;
    hundreds = combination % 10;
    combination = combination / 10;
    thousands = combination % 10;
    combination = combination / 10;
    
    // printf("\nthousands %d", thousands);
    // printf("\nhundreds %d", hundreds);
    // printf("\ntens %d", tens);
    // printf("\nones %d", ones);
    printf("The real combination is: %d%d%d%d", ones, 9-hundreds, 9-tens, thousands);
    
    return 0;
}