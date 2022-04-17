#include <stdio.h>

// This program finds the largest number in x, y and z, and assigns it to max
int main(void) {
  int x, y, z, max;
  printf("Please enter x, y, and z: ");
  scanf("%d%d%d", &x, &y, &z);

  if (x >= y) { // excludes y
    if (x >= z) {
      max = x;
    } else {
      max = z;
    }
  } else { // excludes x
    if (y >= z) {
      max = y;
    } else {
      max = z;
    }
  }

  printf("The largest number is %d.\n", max);
}
