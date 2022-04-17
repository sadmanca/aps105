#include <stdio.h>
#include <string.h>

// using square brackets
char *stringCopy(char *dest, const char *source) {
  int i = 0;

  while (source[i] != '\0') {
    dest[i] = source[i];
    i++;
  }

  dest[i] = '\0';
  return dest;
}

// using pointer arithmetic ("Black Coffee" version)
char *stringCopyBC(char *dest, const char *source) {
  char *t = dest;

  while (*source != '\0') {
    *dest = *source;
    dest++;
    source++;
  }

  *dest = '\0';
  return t;
}

char *stringCopyBCv2(char *dest, const char *source) {
  char *t = dest;

  while ((*dest = *source) != '\0') {
    dest++;
    source++;
  }

  return t;
}

char *stringCopyBCv3(char *dest, const char *source) {
  char *t = dest;

  while ((*dest++ = *source++) != '\0')
    ;
  return t;
}

char *stringCopyBCv4(char *dest, const char *source) {
  char *t = dest;

  while ((*dest++ = *source++))
    ;
  return t;
}

int main(void) {
  char dest[6];

  printf("The copied string is: %s\n", strcpy(dest, "Hello"));

  printf("The copied string is: %s\n", stringCopy(dest, "HEllo"));

  printf("The copied string is: %s\n", stringCopyBC(dest, "HELlo"));

  printf("The copied string is: %s\n", stringCopyBCv2(dest, "HELLo"));

  printf("The copied string is: %s\n", stringCopyBCv3(dest, "HELLO"));

  return 0;
}
