#include <stdio.h>
#include <stdbool.h> //to access bool, true, false

bool checkPrime(int num)
{
    /*
    Input: int variable num
    Output: bool variable isPrime
    This function takes in an int variable num, and returns if it is a prime number.
     */

    // Declare the flag
    bool isPrime = true;

    // Use a for loop that iterates from 2 to N
    for (int count = 2; count <= num / 2 && isPrime; count++){
        // Check the number is divisible by counter.
        if (num % count == 0){
            // If divisible, set the flag as 'false' and terminate the loop.
            isPrime = false;
        }
    }
    return isPrime;
}

int main(void)
{
    // Declare the number
    int num;

    // Declare the flag
    bool found = false;

    // Initialize the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    //This for loop iterates all numbers from 2 to num/2 to find prime number counter that satisfies num - counter is prime number too
    for (int counter = 2; counter <= num / 2; counter++){
        // condition for counter to be a prime number AND for num - counter to be prime number too
        if (checkPrime(counter) && checkPrime(num - counter)){
            // num = primeNumber1 + primeNumber2
            // num = counter + (num - counter)
            printf("%d can be expressed as the sum of %d and %d. \n", num, counter, num - counter);
            found = true;
        }
    }

    if (!found)
        printf("%d cannot be expressed as the sum of two prime numbers.", num);

}
