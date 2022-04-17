#include <stdbool.h>
#include <stdio.h>

void bubbleSort(int list[], int listLength) {
  int top, i;
  bool sorted = false; // add later

  for (top = listLength - 1; top > 0 && !sorted; top--) {
    sorted = true;
    for (i = 0; i < top; i++)
      if (list[i] > list[i + 1]) {
        int temp = list[i];
        list[i] = list[i + 1];
        list[i + 1] = temp;
        sorted = false;
      }
  }
}

void printArray(int list[], int listLength) {
  for (int i = 0; i < listLength; i++)
    printf("%d ", list[i]);
  printf("\n");
}

int main(void) {
  int list[] = {6, 3, 5, 8, 2};

  bubbleSort(list, 5);
  printArray(list, 5);
}
