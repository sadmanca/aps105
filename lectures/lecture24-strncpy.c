#include <stdio.h>
#include <string.h>

char *stringSafeCopy(char *dest, const char *src, int size) {
  int i;

  for (i = 0; i < size && (dest[i] = src[i]) != '\0'; i++) 
    ; 

  return dest;
}

int main(void) {
  char s[] = "Hello World!";
  char t[] = "Hello World!";

  strncpy(s, "Hello", 5);

  printf("The incorrectly copied string is: %s\n", s);

  strncpy(s, "Hello", 6);
  printf("The correctly copied string is: %s\n", s);

  // stringSafeCopy() exactly replicates the behaviour of strncpy()
  stringSafeCopy(t, "Hello", 5);

  printf("The incorrectly copied string is: %s\n", t);

  stringSafeCopy(t, "Hello", 6);
  printf("The correctly copied string is: %s\n", t);
}
