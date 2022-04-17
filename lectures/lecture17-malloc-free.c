#include <stdio.h>
#include <stdlib.h> // for malloc() and free()

int main(void) {
  int numStudents;
  printf("Enter the number of students: ");
  scanf("%d", &numStudents);

  int *marks;
  marks = (int *)malloc(numStudents * sizeof(int));
  // or optionally:
  // marks = malloc(numStudents * sizeof(int));

  if (marks == NULL) {
    printf("Error: malloc() failed due to some catastrophical reasons.\n");
  } else {
    for (int i = 0; i < numStudents; i++)
      scanf("%d", &marks[i]); // or: marks + i

    for (int i = 0; i < numStudents; i++)
      printf("%d\n", marks[i]); // or: *(marks + i)

    free(marks);
  }

  return 0;
}
