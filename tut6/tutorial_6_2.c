#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>

int main() {
	char string[] = "I go to the University of Toronto.";
	printf("String: \"%s\"\n", string);

	// get the input character from the user
	char search;
	printf("Enter a character: ");
	scanf("%c", &search);

	// search for the location of the first instance
	// of the character in the string
	char *location = strchr(string, search);

	// initialize a boolean which will tell us if the
	// character has been found anywhere in the string
	bool found = false;

	// loop until the character is no longer found
	while (location != NULL) {
		found = true;

		// the index location of the character in the string
		// is the pointer of the found character in the string
		// minus the pointer of the first character
		printf("Found at index %ld\n", location - string);

		// update the location of the next found character
		// starting at the previous location's next character
		// (i.e. the pointer location plus 1)
		location = strchr(location + 1, search);
	}

	// if the character was not found, print that
	if (!found) {
		printf("Character not found.\n");
	}

	return 0;
}
