#include <stdio.h>

int main(void) {
    const double InchesToCMs = 2.54;

    double inputInches, outputCMs;

    printf("Enter the number of inches to convert: ");

    scanf("%lf", &inputInches);
    outputCMs = inputInches * InchesToCMs; 

    printf("The number of centimetres is %.2lf\n", outputCMs);

    return 0;
}
