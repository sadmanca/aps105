#include <stdio.h>

void swap(int marks[], int i, int j) {
  int temp = marks[i];
  marks[i] = marks[j];
  marks[j] = temp;
}

void reverse(int marks[], int size) {
  for (int low = 0, high = size - 1; low < high; low++, high--)
    swap(marks, low, high);
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
