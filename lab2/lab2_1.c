/*
You decide to purchase a car, and you will need a loan to purchase your car. You will need a small
down payment up front and pay the rest (with some interest) by monthly payments over a fixed
term (ranging from a few months to several years). Given a purchase price P (in dollars), a down
payment D (in dollars), a finance term n (in months), and the monthly interest rate r, the monthly
payment M (in dollars) that you will be required to pay over n months is calculated using the
following formula: $ M=\frac{(P-D) \times r \times(1+r)^{n}}{(1+r)^{n}-1} $

For example, if the monthly interest rate is 0.4%, a customer can buy a $21000 car with just $1000
down payment and around $458.78 per month for 48 months. Since you want to study different
scenarios, write a C program that will assist you to quickly calculate the monthly payments you
will have to make. Your program reads in the purchase price of that fancy car (an integer value),
the amount of down payment (an integer value), the finance term (an integer value representing
the number of months), the monthly interest rate (a real number representing the monthly interest
percentage), and then prints the monthly payment rounded to 2 decimal places. You may assume
that inputs are valid numbers and the finance term and the interest rate are not zero.
Here is a sample output from an execution of the program:

    Enter the purchase price P: 21000<enter>
    Enter the amount of down payment D: 1000<enter>
    Enter the finance term (in months): 48<enter>
    Enter the monthly interest rate (in percent): 0.4<enter>

    The monthly payment is: 458.78

Note: To compute x^y, use the pow function in the math.h library. To use the math.h library, you
will need to add the following line to the beginning of your program:

    #include <math.h>

*/

#include <stdio.h>
#include <math.h>

int main() {
    int price, down_payment, finance_term;
    double monthly_interest, monthly_payment;

    printf("Enter the purchase price P: ");
    scanf("%d", &price);
    printf("Enter the amount of down payment D: ");
    scanf("%d", &down_payment);
    printf("Enter the finance term (in months): ");
    scanf("%d", &finance_term);
    printf("Enter the monthly interest rate (in percent): ");
    scanf("%lf", &monthly_interest);
    monthly_interest = monthly_interest / 100;

    monthly_payment = (price - down_payment) * monthly_interest * pow(1 + monthly_interest, finance_term);
    monthly_payment = monthly_payment / (pow(1 + monthly_interest, finance_term) - 1);

    printf("\nThe monthly payment is: %.2f", monthly_payment);

    return 0;
}