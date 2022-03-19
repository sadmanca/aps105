/*
TUTORIAL 7 Question:

Write a program that prompts the user for a list of words and then prints out the largest word in the list as well as all of the unique words in the list.

Since there are multiple parts at play, this problem will be solved in 3 parts. Each part builds on the previous one, so be sure the part is working correctly before proceeding.
*/

/*
Part 1: Write a function called getWord() that is repeatedly called by the main function. getWord gets the size of a word from the user, and the word itself. Terminate when the user presses 0 for the size of the string.

    Enter the number of words in the list: 3
    Enter the number of letters in the word: 5
    Enter the word: Tooth
    The word is: Tooth
    Enter the number of letters in the word: 6
    Enter the word: Banana
    The word is: Banana
    Enter the number of letters in the word: 7
    Enter the word: Kitchen
    The word is: Kitchen
    The list of words is: Tooth Banana Kitchen
    The longest word in the list is: Kitchen

*/

/*
Part 2: Modify your code to prompt the user for the number of words in the list, then create the list from the user's inputs. Write a function called printList() that prints the list and the longest word in the list.

    Enter the number of words in the list: 3
    Enter the number of letters in the word: 5
    Enter the word: Tooth
    The word is: Tooth
    Enter the number of letters in the word: 6
    Enter the word: Banana
    The word is: Banana
    Enter the number of letters in the word: 7
    Enter the word: Kitchen
    The word is: Kitchen
    The list of words is: Tooth Banana Kitchen
    The longest word in the list is: Kitchen

*/

/*
Part 3: Modify your code so that no string is repeated more than once in the list.

    Enter the number of words in the list: 4
    Enter the number of letters in the word: 5
    Enter the word: Tooth
    The word is: Tooth
    Enter the number of letters in the word: 6
    Enter the word: Banana
    The word is: Banana
    Enter the number of letters in the word: 7
    Enter the word: Kitchen
    The word is: Kitchen
    Enter the number of letters in the word: 6
    Enter the word: Banana
    The word is: Banana
    The list of words is: Tooth Banana Kitchen
    The longest word in the list is: Kitchen

*/