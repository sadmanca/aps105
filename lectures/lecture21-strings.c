#include <stdio.h>

int main(void) {
  const int Length = 5;

  // Declaring and initializing a string as a character array
  char str[Length + 1] = {'H', 'e', 'l', 'l', 'o', '\0'};
  printf("str = %s\n", str);

  // An alternative that is simpler
  char s[] = "Hello";

  // If you declare the string without enough space,
  // such as char s[4] = "Hello";
  // it will be a compile-time warning and run-time error.

  printf("s = %s\n", s);

  // Declaring and initializing a string as a character pointer
  char *t = "Hello";
  printf("t = %s\n", t);

  // You can change the characters in the string s
  s[1] = 'E';
  printf("s = %s\n", s);

  // You can change the pointer variable t to point to another string
  t = "HELLO";
  printf("t = %s\n", t);

  // But you cannot change s to point to another string
  // such as: s = "HELLO";
  // It will be a compile-time error: array type is not assignable

  // In addition, you cannot change characters in the string pointed to by t
  // such as: t[1] = 'e';
  // It may or may not cause a segmentation fault or bus error (on macOS)
  // at run time.
  // see lecture21-segfault.c as an example

  t = s;
  printf("t = %s\n", t);

  // Now that t points to s, we can safely change the characters
  t[2] = 'L';
  printf("t = %s\n", t);

  return 0;
}
