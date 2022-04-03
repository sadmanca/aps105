/* removes duplicates from a linked list */
void simplify(LinkedList *list) {
  Node *current;
  current = list->head;

  // if linked list is empty, return
  if (current == NULL)
    return;

  // loop through the linked list and remove duplicates
  while (current->next != NULL) {
    // current node and next node are duplicates
    if (current->data == current->next->data) {
      // remove the next node from the list and free its memory
      Node *nodeToRemove = current->next;
      current->next = current->next->next;
      free(nodeToRemove);
    } else
      current = current->next;
  }
}
