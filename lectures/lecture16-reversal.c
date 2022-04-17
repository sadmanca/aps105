#include <stdio.h>

void swap(int *m, int *n) {
  int temp = *m;
  *m = *n;
  *n = temp;
}

void reverse(int marks[], int size) {
  for (int low = 0, high = size - 1; low < high; low++, high--)
    swap(&marks[low], &marks[high]);
}

int main(void) {
  int marks[5];

  for (int i = 1; i <= 5; i++)
    scanf("%d", &marks[i - 1]);

  reverse(marks, 5);

  for (int i = 0; i < 5; i++)
    printf("%d ", marks[i]);
  printf("\n");
}
