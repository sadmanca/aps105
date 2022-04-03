/* Function to reverse the linked list */
void reverse(LinkedList *list) {
  // Initialize three pointers prev, next as NULL and curr as head
  Node *prev = NULL;
  Node *current = list->head;
  Node *next = NULL;

  // Iterate through the linked list and reverse links
  while (current != NULL) {
    // Store next
    next = current->next;

    // Reverse current node's link to previous node
    current->next = prev;

    // Move pointers one position ahead.
    prev = current;
    current = next;
  }
  list->head = prev;
}
