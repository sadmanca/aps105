#include <stdio.h>

int main(void) {
    // Prompting the user to enter an input number
    printf("Please enter an input number: ");

    int input;
    scanf("%d", &input);

    int output;
    output = input * 7;
    printf("%d * 7 = %d\n", input, output);

    return 0;
}
