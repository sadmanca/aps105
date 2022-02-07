/*
TUTORIAL 2

Question 1:

Write a single statement in C that declares a boolean variable named divisible
and assigns true to divisble if and only if the value stored in an int variable
position is exactly divisible by 5 or 7. Assume position variable is already
declared and initialized.

SOLUTION:

    bool divisible = position % 7 == 0 || position % 5 == 0;

OR using De Morgan's Law can be written as:

    bool divisible = !(position % 7 != 0 && position % 5 != 0);
    
*/