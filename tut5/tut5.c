/*
TUTORIAL 5 Question: 

The Sieve of Eratosthenes is an ancient algorithm for finding prime numbers. To
use this algorithm to find all prime numbers less than a given integer, say 100,
we start by making a list of consecutive integers less than 100. We first take p
= 2, the smallest prime number, and print it. We then eliminate all multiples of
p less than 100 in the list, (2p, 3p, 4p, ...), from the list, since they are
multiples of p and are therefore not prime numbers. After eliminating the
multiples of p, we find the first number after p that has not yet been
eliminated, as it must be the next prime number. We assign this new prime number
to p, print it, and eliminate its multiples from the list, and so on. We repeat
this procedure until p^2 is greater than or equal to 100. The numbers that
remain in the list are prime numbers, and we finish by printing them out.

Write a complete C program that uses the Sieve of Eratosthenes algorithm to
print all prime numbers less than 100. Your implementation must not use the `%`
(modulo) operator.

Sample output:

    2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97

Hint: Use an array of size 100 to keep track of whether an integer has been eliminated or not.
*/