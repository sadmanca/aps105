#include <stdio.h>
#include <stdlib.h> // for atoi() and atof()
#include <string.h>

int main(void) {
  char s1[13] = "Hello";
  char *t = " World!";

  // Before calling strcat(), we must ensure that the destination buffer
  // has sufficient space, in this case, 13 characters including the
  // null terminating character
  puts(strcat(s1, t));

  char s2[12] = "Hello";
  // use strncat(), the safe version of strcat()
  puts(strncat(s2, t, 6));

  // strcmp() returns a positive value if the first string follows the second
  printf("Comparing s1 and s2: %d\n", strcmp(s1, s2));

  // strcmp() returns a negative value if the first string precedes the second
  printf("Comparing s1 and s2: %d\n", strcmp(s2, s1));

  // strncmp() compares only up to n characters
  printf("Comparing s1 and s2 up to 11 characters: %d\n", strncmp(s1, s2, 11));

  // atoi() converts a string to an int
  printf("%d\n", atoi("314"));

  // atof() converts a string to a double
  printf("%.2lf\n", atof("3.14"));

  // strchr() returns a pointer to the first occurrence of character c in s
  printf("%s\n", strchr(s2, 'e'));

  // strstr(haystack, needle) returns a pointer to the first occurrence of the
  // string needle in the string haystack
  printf("haystack = %s\n", s1);
  printf("needle = %s\n", s2);
  printf("strstr(haystack, needle) = %s\n", strstr(s1, s2));
}
