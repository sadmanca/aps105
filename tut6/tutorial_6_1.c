#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
 * Takes a string size and reads that many characters
 * from stdin. The resulting dynamically-allocated string
 * is returned. There are many ways this could be done,
 * this is just a simple way that demonstrates that strings
 * can be indexes.
 */
char * getString(int size) {
	char *str = (char *)malloc(sizeof(char) * size + 1);

	printf("Enter %d characters: ", size);
	for (int i=0; i<size; i++) {
		// read each character one-by-one
		str[i] = getc(stdin);
	}
	// capture the enter-key
	getc(stdin);

	// be sure to remember the null terminator
	str[size] = '\0';

	return str;
}

int main() {
	srand(time(NULL));

	// pick a random phrase size between 6 and 10
	int phraseSize = rand() % (10 - 6 + 1) + 6;
	// pick a random remove size between 3 and 5
	int removeSize = rand() % (5 - 3 + 1) + 3;

	char *phrase = getString(phraseSize);
	char *remove = getString(removeSize);

	// search for the remove string in the phrase
	// If it is found, strstr will return a pointer
	// to the character within phrase where the remove
	// string was found. If it is not found, strstr will
	// return null.
	char *found = strstr(phrase, remove);
	char *result;

	if (found != NULL) {
		// the size of the result will be the phrase size minus the size
		// of the remove string plus one for the null terminator
		result = (char *)malloc(sizeof(char) * (phraseSize - removeSize) + 1);

		// because "found" points to the location within phrase where
		// the remove string was found, "found - phrase" is the number of
		// characters before the remove string in the phrase so copy these
		// to the result
		strncpy(
			result,
			phrase,
			found - phrase
		);

		// now we want to copy the characters after the remove string.
		// Becase we noticed that "found - phrase" is the number of
		// characters we already added to result, offset the copy there.
		// We also offset the characters we're copying from the found location
		// by the number of characters in the remove string to be sure to
		// only copy the characters after the remove string.
		strncpy(
			result + (found - phrase),
			found + removeSize,
			phraseSize - (found - phrase) - removeSize
		);

		result[phraseSize - removeSize] = '\0';
	} else {
		// if the remove string was not found, copy the entire phrase to
		// the result
		result = (char *)malloc(sizeof(char) * phraseSize + 1);
		strcpy(result, phrase);
	}

	printf("\nPhrase: %s\nRemove: %s\nResult: %s\n", phrase, remove, result);

	// be sure to free any allocated memory!
	free(phrase);
	free(remove);
	free(result);

	return 0;
}
