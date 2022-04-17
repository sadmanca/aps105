#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char const *s;
  s = (char *) malloc(6);
  s[0] = 'H';
  return 0;
}
