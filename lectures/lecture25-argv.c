#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: ./a.out arg1 arg2\n");
    exit(0);
  }

  for (int i = 0; i < argc; i++) {
    printf("%s ", argv[i]); // or *(argv + i)
  }
  printf("\n");

  return 0;
}