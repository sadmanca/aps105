// This C program calculates print all two-digit numbers found in consecutive
// digits of the floating point number that the user entered. First, prompts the
// user to enter a floating point number between 0 and 10, and its number of
// digits after the decimal point (no greater than `7`). Second, print all
// possible two-digit numbers found in consecutive digits of the floating point
// number that the user entered.

#include <math.h>
#include <stdio.h>

int main(void) {
  double input; // 15-16 significant digits for double
  int digits;

  printf("Enter a floating point number between 0 and 10: ");
  scanf("%lf", &input);

  printf("Enter the number of digits after the decimal point: ");
  scanf("%d", &digits);

  // The most important idea when teaching this solution to our students in the
  // tutorial is to write pseudocode first.

  // There are two ways to present the two-digit numbers. One of them is to
  // print the digit one by one; another is to print a two-digit number
  // at once. First, we need to figure out how to extract numbers one by one.
  // Ask the students to think about how the modulo % operator can be used to
  // extract the first digit and the second digit, respectively:

  // First, review how a double can be typecast to a float:
  // int number = (int) double_number.

  // When thinking over a solution, first think of a few toy examples.

  // For example, let's assume the user's input number is 2.1234567.
  // Total number of digits we have is 1 + digits entered by the user.
  // We need to extract 2 first. 
  // We can first throw the decimal away and have 21234567
  // Then we can extract the first number by dividing by number of digits and take %10 of the truncated int: 2
  // The second digit is extracted by dividing by a number less than digits and take % 10 of the truncated int: 1
  // If we decrease number of digits further by 1, we get the next two digits
  //We keep doing this until we are done with al digits, i.e. digits is 0
  
  int inputInt = rint(input * pow(10, digits));

  for(int i = digits; i > 0; i--){
    int d1 = (int)(inputInt / pow (10, i)) % 10;
    int d2 = (int)(inputInt / pow(10, i - 1)) % 10; 
    printf("%d%d \n", d1, d2); 
  }

  /*
  OR this sample solution is also correct!

  for(int i = 0; i < digitNumber; i++){
    int d1 = (int)(input * pow(10, i)) % 10;
    int d2 = (int)(input * pow(10, i + 1)) % 10;

    printf("%d%d \n", d1, d2);
  }
  */
  return 0;
}
