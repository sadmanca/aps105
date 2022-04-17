#include <stdio.h>

int main(void) {
  char s[6];

  // The safe way is to use fgets(), which doesn't skip leading white spaces
  printf("Please enter a string with no more than 5 characters: ");
  printf("The size is: %d\n", sizeof(s));
  fgets(s, sizeof(s), stdin);
  printf("The string is: %s\n", s);

  return 0;
}
