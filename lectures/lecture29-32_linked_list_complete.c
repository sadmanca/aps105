#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

/**
 * @brief Represents a node in a linked list.
 */
typedef struct node {
  int data;
  struct node *next;
} Node;

/**
 * @brief Represents a linked list.
 */
typedef struct linkedList {
  Node *head;
} LinkedList;

/**
 * @brief Allocate a new node on the heap.
 *
 * @param value The data value of the node.
 *
 * @return A pointer to the new node.
 */
Node *createNode(int value) {
  Node *newNode = (Node *)malloc(sizeof(Node));

  if (newNode != NULL) {
    newNode->data = value;
    newNode->next = NULL;
  }

  return newNode;
}

/**
 * @brief Insert a new node at the front of the list.
 *
 * This function will allocate space for a new node and update the list.
 *
 * @param list A pointer to the linked list to modify. Assumed to be non-NULL.
 * @param value The data value of the new node being added.
 *
 * @return true if a new node was successfully added, false otherwise (e.g.,
 * out-of-memory).
 */
bool insertAtFront(LinkedList *list, int value) {
  // Create a new node.
  Node *temp = createNode(value);
  if (temp == NULL) {
    // We couldn't allocate enough memory for a new node.
    return false;
  }

  // The node will be inserted before head, so next should point to head.
  temp->next = list->head;
  // Now update head to the new front of the list.
  list->head = temp;

  return true;
}

/**
 * @brief Initialize the members of a linked list.
 *
 * @param list A pointer to the linked list to initialize. Assumed to be
 * non-NULL.
 */
void initList(LinkedList *list) {
  // The head initially points to nothing.
  list->head = NULL;
}

/**
 * @brief Check if the list is empty.
 *
 * @param list A pointer to the linked list to check. Assumed to be non-NULL.
 *
 * @return true if the list is empty, false otherwise.
 */
bool isEmpty(LinkedList *list) {
  if (list->head == NULL) {
    // The head does not point to anything.
    return true;
  }

  return false;
}

/**
 * @brief Print out the data value of each element of the list.
 *
 * @param list A pointer to the linked list to print. Assumed to be non-NULL.
 */
void printList(LinkedList *list) {
  Node *current = list->head;

  while (current != NULL) {
    // Print out the data at this element.
    printf("%d\n", current->data);
    // Move to the next element in the list.
    current = current->next;
  }
}

/**
 * @brief Find the first node with the given value.
 *
 * @param list A pointer to the linked list to search. Assumed to be non-NULL.
 * @param value The value to search for.
 *
 * @return The node that was found, or NULL if the node was not found.
 */
Node *findFirstNode(LinkedList *list, int value) {
  Node *current = list->head;

  while (current != NULL) {
    if (current->data == value) {
      // Found the node.
      return current;
    }

    // Did not find the node.
    // Move to the next element in the list.
    current = current->next;
  }

  // Did not find the node in the entire list.
  return NULL;
}

/**
 * @brief Insert a new node at the end of the list.
 *
 * @param list A pointer to the linked list to modify. Assumed to be non-NULL.
 * @param value  The data value of the new node being added.
 *
 * @return true if a new node was successfully added, false otherwise (e.g.,
 * out-of-memory).
 */
bool insertAtBack(LinkedList *list, int value) {
  if (isEmpty(list)) {
    // The list is empty, there is no difference between back/front.
    return insertAtFront(list, value);
  }

  Node *current = list->head;

  // Traverse the list until we reach the last element.
  while (current->next != NULL) {
    current = current->next;
  }

  // n now points to the last element of the list.
  current->next = createNode(value); // Add a new node to the end.

  if (current->next == NULL) {
    // We couldn't allocate enough memory for a new node.
    return false;
  }

  return true;
}

/**
 * @brief Insert a node into an ordered list, and keeps it in order.
 *
 * @param list A pointer to the linked list to search. Assumed to be non-NULL.
 * @param value The data value of the new node being added.
 *
 * @return true if a new node was successfully added, false otherwise (e.g.,
 * out-of-memory).
 */
bool insertIntoOrderedList(LinkedList *orderedList, int value) {
  if (isEmpty(orderedList)) {
    // The list is empty, insertion at front/back is the same thing.
    return insertAtFront(orderedList, value);
  }

  if (value < orderedList->head->data) {
    // The value to insert comes before the current head, so insert before it.
    return insertAtFront(orderedList, value);
  }

  Node *current = orderedList->head;
  while (current->next != NULL && value > current->next->data) {
    // The value to insert is larger than the next element in the list.
    // Move to the next element in the list.
    current = current->next;
  }

  Node *newNode = createNode(value);
  if (newNode == NULL) {
    // Could not allocate memory for a new node.
    return false;
  }

  // current may be the last element in the list, and it may also be the last
  // element in an ordered list that is less than value.

  // Link the rest of the list with this new node.
  newNode->next = current->next;
  current->next = newNode; // Overwrite next with the new node.

  return true;
}

/**
 * @brief Delete the first node of the linked list.
 *
 * @param list A pointer to the linked list to modify. Assumed to be non-NULL.
 */
void deleteFront(LinkedList *list) {
  if (isEmpty(list)) {
    // The list is empty, there is nothing to delete.
    return;
  }

  // Save the location of the node after head. Could be NULL, that's okay
  Node *newHead = list->head->next;
  // Free up the memory used by the current head.
  free(list->head);
  // Update the current head to the saved location.
  list->head = newHead;
}

void deleteBack(LinkedList *list) {
  if (isEmpty(list)) {
    // The list is empty, there is nothing to delete.
    return;
  }

  if (list->head->next == NULL) {
    // There is only one node in this list.
    deleteFront(list);

    return;
  }

  Node *current = list->head;

  // Traverse the list until we reach the second last element.
  // Thanks to the previous if-statement, we know that list->head->next is
  // non-NULL.
  while (current->next->next != NULL) {
    current = current->next;
  }

  // current now points to the second last element of the list.
  free(current->next);  // Delete the last element of the list.
  current->next = NULL; // The second last element is now the last element.
}

/**
 * @brief Delete every node of the linked list.
 *
 * @param list A pointer to the linked list to erase. Assumed to be non-NULL.
 *
 * @return The number of nodes deleted.
 */
int deleteAllNodes(LinkedList *list) {
  int numDeleted = 0;

  while (!isEmpty(list)) {
    deleteFront(list);
    numDeleted++;
  }

  // The list is now empty. Optionally, set it to NULL to confirm.
  list->head = NULL;

  return numDeleted;
}

/**
 * @brief Delete the first node that matches a search query.
 *
 * @param list A pointer to the linked list to search. Assumed to be non-NULL.
 * @param value The value to search for.
 *
 * @return true if a node was deleted, false if the node was not found.
 */
bool deleteFirstMatch(LinkedList *list, int value) {
  if (isEmpty(list) == true) {
    // There is nothing to do in an empty list.
    return false;
  }

  if (list->head->data == value) {
    // The first node matches the value.

    deleteFront(list);
    return true;
  }

  // Search for a node that matches the value, but maintain a pointer to the
  // node just before it.
  Node *current = list->head;
  while (current->next != NULL && current->next->data != value) {
    current = current->next;
  }

  // current now points to a node just before the node that matched, OR current
  // points to the last node.
  if (current->next != NULL) {
    // current does not point to the last node.
    Node *temp = current->next; // temp is the node we must delete.
    current->next = temp->next; // Update n so that temp is no longer linked.
    free(temp);

    return true;
  }

  return false;
}

/**
 * @brief Delete all nodes that match the search query.
 *
 * @param list A pointer to the linked list to search. Assumed to be non-NULL.
 * @param value The value to search for.
 *
 * @return The number of nodes deleted.
 */
int deleteAllMatches(LinkedList *list, int value) {
  int numDeleted = 0;

  while (deleteFirstMatch(list, value)) {
    numDeleted++;
  }

  return numDeleted;
}

void testUnordered(void) {
  // Create and initialize a LinkedList.
  LinkedList unorderedList;
  initList(&unorderedList);

  if (isEmpty(&unorderedList)) {
    printf("The list is currently empty.\n");
  }

  printf("Enter a number greater than 1.\n");
  int max;
  scanf("%d", &max);

  if (max < 0) {
    max = 2;
  }

  // Testing insertAtFront
  printf("Adding %d random numbers to the front of the list.\n", max);
  for (int i = 0; i < max; i++) {
    int randomValue = rand() % 10 + 1;
    printf("Generated: %d\n", randomValue);

    // Add it to the front of the list.
    insertAtFront(&unorderedList, randomValue);
  }

  printf("Currently, the list contains:\n");
  printList(&unorderedList);

  // Test deleteFront and deleteBack
  printf("Deleting the first element of the list.\n");
  deleteFront(&unorderedList);
  printf("Deleting the last element of the list.\n");
  deleteBack(&unorderedList);
  printf("Currently, the list contains:\n");
  printList(&unorderedList);

  // Test insertAtBack
  printf("Adding %d random numbers to the back of the list.\n", max);
  for (int i = 0; i < max; i++) {
    int randomValue = rand() % 10 + 1;
    printf("Generated: %d\n", randomValue);

    // Add it to the back of the list.
    insertAtBack(&unorderedList, randomValue);
  }

  printf("Currently, the list contains:\n");
  printList(&unorderedList);

  printf("Enter a node to search for: ");
  int value;
  scanf("%d", &value);

  Node *n = findFirstNode(&unorderedList, value);
  if (n == NULL) {
    printf("Could not find %d.\n", value);
  } else {
    printf("Found %d!\n", value);
  }

  printf("Enter a node to search for and delete: ");
  scanf("%d", &value);

  bool wasDeleted = deleteFirstMatch(&unorderedList, value);
  if (wasDeleted == false) {
    printf("Could not find %d. Nothing was deleted.\n", value);
  } else {
    printf("Node deleted. The list is now:\n");
    printList(&unorderedList);
  }

  printf("Enter a node to search for and delete all occurences of it: ");
  scanf("%d", &value);
  int numDeleted = deleteAllMatches(&unorderedList, value);
  if (numDeleted == 0) {
    printf("Could not find %d. Nothing was deleted.\n", value);
  } else {
    printf("All nodes with %d were deleted. The list is now:\n", value);
    printList(&unorderedList);
  }

  if (isEmpty(&unorderedList) == false) {
    numDeleted = deleteAllNodes(&unorderedList);
    printf("Deleted the remaining %d nodes from the list.\n", numDeleted);
  }
}

void testOrdered(void) {
  // Create and initialize a LinkedList.
  LinkedList orderedList;
  initList(&orderedList);

  printf("Enter a number greater than 1.\n");
  int max;
  scanf("%d", &max);

  if (max < 0) {
    max = 2;
  }

  printf("Adding %d random numbers to a sorted list.\n", max);
  for (int i = 0; i < max; i++) {
    int randomValue = rand() % 10 + 1;
    printf("Generated: %d\n", randomValue);

    // Add it to the list in sorted order
    insertIntoOrderedList(&orderedList, randomValue);

    printf("The list now contains:\n");
    printList(&orderedList);
  }

  // Clean up memory.
  deleteAllNodes(&orderedList);
}

int main(void) {
  // srand(); // commented out for deterministic behaviour
  testUnordered();
  testOrdered();
  return 0;
}
