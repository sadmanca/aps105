#include <math.h>
#include <stdio.h>

int main(void) {
  double price;
  printf("Enter your dollar value: ");
  scanf("%lf", &price);

  printf("The price becomes: %.2lf\n", rint(price / 5 * 100) / 100 * 5);
  return 0;
}
