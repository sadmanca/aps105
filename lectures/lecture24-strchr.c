#include <stdio.h>
#include <string.h>

int main(void) {
  char s[] = "This is a sample string";

  printf("Looking for the character 's' in \"%s\"...\n", s);

  char *p = strchr(s, 's');

  while (p != NULL) {
    printf("Found at index %ld\n", p - s);
    p = strchr(p + 1, 's');
  }

  return 0;
}
