#include <stdio.h>

// using square brackets
int stringLength(const char *s) {
  int i = 0;

  while (s[i] != '\0')
    i++;

  return i;
}

// using pointer arithmetic ("Black Coffee version")
int stringLengthBCv1(const char *s) {
  int i = 0;

  while (*(s + i) != '\0')
    i++;

  return i;
}

int stringLengthBCv2(const char *s) {
  int i = 0;

  while (*(s + i))
    i++;

  return i;
}

int stringLengthBCv3(const char *s) {
  const char *t = s;

  while (*t)
    t++;

  return t - s;
}

int main(void) {
  char s[] = "Hello";

  printf("The length of the string is: %d\n", stringLength(s));
  printf("The length of the string is: %d\n", stringLengthBCv1(s));
  printf("The length of the string is: %d\n", stringLengthBCv2(s));
  printf("The length of the string is: %d\n", stringLengthBCv3(s));
  return 0;
}
