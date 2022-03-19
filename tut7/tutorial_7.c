#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// NOTE: To run the code in a certain part, comment out the code function in the other parts

// Part 1:

// This function prompts the user for inputs and prints them out.
bool getWord(){
    int size;
    char * word;

    // To properly store the word in memory, we need to allocate enough space for the word
    // To do that, we need to know how long the word is going to be
    printf("Enter the number of letters in the word: ");
    scanf("%d", &size);
    
    // When the user enters 0 for the size of the word, we want to stop prompting them
    if(size == 0) return false;

    // Since a word is represented by a string, and a string is an array of characters, we need
    // to allocate enough space for the number of letters * the size of each letter (character)
    word = malloc(size*sizeof(char) + 1);

    // Note that if we run out of space, malloc will return NULL. So, we need to catch that case
    if(!word){
        printf("Failed to allocate memory for a new word\n");
        return false;
    }

    printf("Enter the word: ");
    scanf("%s", word); 

    // This helps us make sure that the word was read in properly.
    printf("The word is: %s\n", word);

    free(word);
    return true;
}

int main(void){
    int loop = true;

    // Note: there are many ways this loop and loop variable can be written written
    // Feel free to demonstrate other versions to the class
    while(loop){
        loop = getWord();
    }

    printf("There are no more words\n");

    return 0;
}

//#############################################################################################

// Part 2:

// Note: This function is almost identical to the one in Part 1, except for what is returned. 
// Also note that since we are returning the word, we do not free the pointer here
char* getWord(){
    int size;
    char * word;

    printf("Enter the number of letters in the word: ");
    scanf("%d", &size);

    word = malloc(size*sizeof(char) + 1);

    // Note that if we run out of space, malloc will return NULL. So, we need to catch that case
    if(!word){
        printf("Failed to allocate memory for a new word\n");
        return false;
    }

    printf("Enter the word: ");
    scanf("%s", word);

    printf("The word is: %s\n", word);

    return word;
}

// This function takes a list of strings and the size of the list and prints out the items
// in the list as well and the longest string in the list. 
void printList(char ** list, int length){
    printf("The list of words is: ");
    
    int ind = 0;
    int maxlen = 0;

    // I recommend writing two for loops first, one for printing the words in the list
    // and one for finding the longest word. Then, combine them afterwards for efficiency. 
    for(int i = 0; i < length; i++){
        printf("%s ", list[i]);

        // Typecase to int because strlen produces a long long unsigned int
        if((int) strlen(list[i]) > maxlen){
            maxlen = (int) strlen(list[i]);
            ind = i;
        }
    }

    printf("\n");
    printf("The longest word in the list is: %s", list[ind]);
}

int main(void){
    int length;
    char ** list;

    // To be able to initialize the list, we need to know how many words are going to be in the list
    printf("Enter the number of words in the list: ");
    scanf("%d", &length);

    // Since the list is a list of strings, we use the size of a string pointer to allocate memory.
    // This is because each string in the list is defined by a pointer that points to the beginning
    // of the string.
    list = malloc(length*sizeof(char*));

    // Note that if we run out of space, malloc will return NULL. So, we need to catch that case
    if(!list){
        printf("Failed to allocate memory for a new list\n");
        return false;
    }

    for(int i = 0; i < length; i++){
        list[i] = getWord();
    }

    printList(list, length);

    // Free all pointers that were allocated in this program
    for(int i = 0; i < length; i++){
        free(list[i]);
    }
    free(list);

    return 0;
}

//############################################################################################

// Part 3:

// Note: This section uses the same getWord() and printList() functions as Part 2.

int main(void){
    int length;
    char ** list;
    char * temp;
    int num = 0;
    bool new = true;

    printf("Enter the number of words in the list: ");
    scanf("%d", &length);

    list = malloc(length*sizeof(char*));

    // Note that if we run out of space, malloc will return NULL. So, we need to catch that case
    if(!list){
        printf("Failed to allocate memory for a new list\n");
        return false;
    }

    for(int i = 0; i < length; i++){

        // If this is the first word to be added to the list, we don't need to check for duplicates
        if(i == 0){
            list[i] = getWord();
            num = 1;
            continue;
        }

        // This time, instead of adding the word to the list directly, we store it in a temporary
        // variable to compare to the words that are already in the list first. If the new word
        // is already in the list, then we do not add it a second time. 
        temp = getWord();
        for(int j = 0; j < num; j++){
            // We use ! here because strcmp returns 0 when the two strings are equal. Since we only
            // want the flag to change if the strings are equal, we need to make sure that the if
            // statement runs when they are equal. 
            if(!strcmp(list[j], temp)){
                new = false; 
                break;
            }
        }

        // Only if the word that was entered is a new word, add it to the list. The num variable
        // keeps track of how many unique words are on the list. It is different from the length
        // variable because the length variable is the total size of the list of words that the 
        // user is inputting.
        if(new){
            list[num] = temp;
            num++;
        }

        // We need to make sure to reset the flag for the next user inputted word
        new = true;
    }

    printList(list, num);

    // Free all pointers that were allocated in this program. Note that we do not need to free
    // temp on its own because that memory address is pointed to by one of the items on the list.
    // If we free temp, that address will be attempted to be freed twice and cause an error
    for(int i = 0; i < length; i++){
        free(list[i]);
    }
    free(list);

    return 0;
}
