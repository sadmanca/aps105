#include <stdbool.h>
#include <stdio.h>

// The partition algorithm is originated from "Introduction to Algorithms",
// by Cormen, Leiserson, and Rivest, First Edition

// Note: there were other variants of the partition algorithm. For example,
// Tony Hoare's original partition algorithm is implemented as follows:

/*
int partition(int list[], int low, int high) {
   int pivot = low, left = low, right = high;

   while (true) {
       while (list[left] < list[pivot])
           left++;
       while (list[right] > list[pivot])
           right--;
       printf("left = %d, right = %d\n", left, right);
       if (left < right)
           swap(list, left, right);
       else
           return right;
   }
}
*/

// The third edition of "Introduction to Algorithms" included the following
// variant:

/*
int partition(int list[], int low, int high) {
   int pivot = list[high], left = low - 1;

   for (int right = low; right < high; right ++) {
      if (list[right] <= pivot) {
        left++;
        swap(list, left, right);
      }
   }

   swap(list, left + 1, high);
   return left + 1;
}
*/

// Code written by: Baochun Li

void swap(int list[], int left, int right) {
  int t = list[right];
  list[right] = list[left];
  list[left] = t;
}

int partition(int list[], int low, int high) {
  int pivot = low, left = low + 1, right = high;

  while (true) {
    while (left <= right && list[left] <= list[pivot]) {
      left++;
    }

    while (left <= right && list[right] > list[pivot]) {
      right--;
    }

    printf("left = %d, right = %d\n", left, right);

    if (left < right) {
      swap(list, left, right);
    } else {
      swap(list, pivot, right);
      return right;
    }
  }
}

void quicksortHelper(int list[], int low, int high) {
  int i;
  if (low < high) {
    int pivot = partition(list, low, high);

    for (i = 0; i < 14; i++)
      printf("%d ", list[i]);
    printf("\n");

    quicksortHelper(list, low, pivot - 1);
    quicksortHelper(list, pivot + 1, high);
  }
}

void quicksort(int list[], int length) {
  return quicksortHelper(list, 0, length - 1);
}

int main(void) {
  int i, list[14] = {61, 46, 12, 46, 52, 63, 91, 27, 55, 74, 14, 71, 37, 87};

  quicksort(list, 14);
  for (i = 0; i < 14; i++)
    printf("%d ", list[i]);
  printf("\n");
  return 0;
}
