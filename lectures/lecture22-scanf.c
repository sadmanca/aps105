#include <stdio.h>

int main(void) {
  char s[6];

  printf("Please enter a string with no more than 5 characters: ");
  // scanf() skips leading white spaces, and reads characters until it hits a
  // whitespace
  // Important: scanf() is unsafe and can cause buffer overflow; do
  // not use in production code
  scanf("%s", s);
  printf("The string is: %s\n", s);

  return 0;
}
