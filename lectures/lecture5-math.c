#include <math.h> // for mathematical functions
#include <stdio.h>

int main(void) {
  printf("%.1lf\n", sqrt(4.0));

  printf("%.1lf\n", sin(M_PI / 2));

  printf("%.2lf\n", asin(1.0));

  int floorValue = floor(5.3);
  printf("%d\n", floorValue);

  int ceilValue = ceil(-5.3);
  printf("%d\n", ceilValue);

  printf("%.1lf\n", fmod(5.3, 2.1));

  return 0;
}
