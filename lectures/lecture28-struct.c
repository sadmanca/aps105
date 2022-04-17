#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// User-defined data structures

typedef struct date {
  int year, month, day;
} Date;

void printDate(Date date) {
  printf("The date is: %d/%d/%d\n", date.year, date.month, date.day);
}

void printDatev2(Date *date) {
  printf("The date is: %d-%d-%d\n", date->year, date->month, date->day);
}

int main(void) {
  Date confederation = {1867, 7, 1};
  printDate(confederation);

  // Updating the fields of a data structure
  // using the dot operator

  confederation.year = 1867;
  confederation.month = 7;
  confederation.day = 1;
  printDate(confederation);

  // Declaring a pointer to a local variable
  Date *p = &confederation;
  printDate(*p);

  // Updating the fields using ->
  p->year = 1867; // equivalent to (*p).year = 1867;
  p->month = 7;
  p->day = 1;
  printDate(*p);
  printDatev2(p);

  return 0;
}
