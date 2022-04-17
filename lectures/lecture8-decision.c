//  Travel advisory
//
// The purpose of this program is to help make a decision to issue
// an emergency advisory by the World Health Organization
// by consulting three experts, and seeing what their average confidence is.

// The input is the level of confidence expressed by three experts
// in fractions between 0 and 1.

// The output of the program is a Go/No Go decision based on the
// average of the three confidence levels.  If the average is greater
// than or equal to 70% it is a go.

#include <math.h>
#include <stdio.h>

int main(void) {
  const double thresholdForAlert = 0.70;

  double confidence1, confidence2, confidence3;

  printf("Enter the confidence levels of three experts: ");
  scanf("%lf%lf%lf", &confidence1, &confidence2, &confidence3);

  // First version: if (confidence1 > 1 || confidence2 > 1 || confidence3 > 1) {
  if ((confidence1 < 0 || confidence1 > 1) ||
      (confidence2 < 0 || confidence2 > 1) ||
      (confidence3 < 0 || confidence3 > 1)) {
    printf("Invalid input. Stopping...\n");
    return 0;
  }

  double average = (confidence1 + confidence2 + confidence3) / 3;
  printf("The average confidence value is: %lf\n", average);
  printf("%lf\n", average - thresholdForAlert);

  if (average > thresholdForAlert) {
    printf("It's time to issue the emergency advisory!\n");
  } else {
    printf("An emergency advisory is not recommended at this time.\n");
  }

  return 0;
}
