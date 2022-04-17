#include <stdio.h>

int main(int argc, char *argv[]) {
  char *t;

  t = "hello";
  printf("t = %s\n", t);

  // You can read from the string
  printf("t[1] = %c\n", t[1]);

  // But you cannot write into it as it is a string constant
  t[1] = 'E';
  printf("t = %s\n", t);

  return 0;
}
