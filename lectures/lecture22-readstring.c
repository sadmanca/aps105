#include <stdio.h>

char *getStringFromUserInputSafely(char *s, int size) {
  // exception handling
  if (size < 2) {
    return NULL;
  }

  int i = 0;
  char c;

  while (i < size - 1 && (c = getchar()) != '\n') {
    s[i] = c;
    i = i + 1;
  }

  s[i] = '\0';

  // returning a pointer to the buffer
  return s;
}

int main(void) {
  char s[6];

  // the size of the character array is the number of characters
  // in the array
  printf("sizeof(s) = %lu\n", sizeof(s));
  puts(getStringFromUserInputSafely(s, sizeof(s)));
  return 0;
}