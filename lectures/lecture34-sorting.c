#include <stdio.h>

void insertionSort(int list[], int listLength) {
  int top;

  for (top = 1; top < listLength; top++) {
    int item = list[top];
    int indexOfEmptySlot = top;

    while (indexOfEmptySlot > 0 && item < list[indexOfEmptySlot - 1]) {
      list[indexOfEmptySlot] =
          list[indexOfEmptySlot - 1]; // shift data to the right to make space
      indexOfEmptySlot--;
    }

    list[indexOfEmptySlot] = item;
  }
}

void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void selectionSort(int list[], int listLength) {

  for (int top = listLength - 1; top > 0; top--) {
    // find largest from 0 to top
    int indexOfLargest = 0;
    for (int i = 1; i <= top; i++)
      if (list[i] > list[indexOfLargest])
        indexOfLargest = i;

    // put largest at top
    swap(&list[indexOfLargest], &list[top]);
  }
}

void printArray(int list[], int listLength) {
  for (int i = 0; i < listLength; i++)
    printf("%d ", list[i]);
  printf("\n");
}

int main(void) {
  int list[] = {7, 3, 5, 8, 2};

  insertionSort(list, 5);
  printArray(list, 5);

  int list2[] = {7, 3, 5, 8, 2};
  selectionSort(list2, 5);
  printArray(list2, 5);
}
