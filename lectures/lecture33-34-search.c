#include <stdio.h>

int sequentialSearch(int list[], int listLength, int item) {
  for (int i = 0; i < listLength; i++) {
    if (item == list[i]) {
      return i;
    }
  }

  return -1;
}

int binarySearch(int list[], int listLength, int item) {
  int low = 0;
  int high = listLength - 1;
  int middle;

  while (low <= high) {
    middle = (low + high) / 2;
    if (item == list[middle])
      return middle;
    else if (item < list[middle])
      high = middle - 1;
    else
      low = middle + 1;
  }
  return -1;
}

int binSearchHelper(int list[], int low, int high, int item) {
  if (high < low) // failure - item not in list
    return -1;

  int middle = (low + high) / 2;
  if (item == list[middle]) // success
    return middle;
  else if (item < list[middle]) // try bottom half
    return binSearchHelper(list, low, middle - 1, item);
  else // try top half
    return binSearchHelper(list, middle + 1, high, item);
}

int recursiveBinarySearch(int list[], int listLength, int item) {
  return binSearchHelper(list, 0, listLength - 1, item);
}

int main(void) {
  int list[] = {3, 5, 6, 7, 9};
  printf("Found 3 at index %d.\n", sequentialSearch(list, 5, 3));
  printf("Found 5 at index %d.\n", binarySearch(list, 5, 5));
  printf("Found 7 at index %d.\n", recursiveBinarySearch(list, 5, 7));
}
