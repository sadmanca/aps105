#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief A node in a binary search tree.
 */
typedef struct node {
  int data;
  struct node *left, *right;
} Node;

/**
 * @brief Create a new node on the heap.
 */
Node *createNode(int value) {
  Node *p = (Node *)malloc(sizeof(Node));

  if (p != NULL) {
    p->data = value;
    p->left = p->right = NULL;
  }
  return p;
}

/**
 * @brief A binary search tree.
 */
typedef struct bstree {
  Node *root;
} BSTree;

/**
 * @brief Initialize the binary search tree to be empty.
 */
void initBSTree(BSTree *tree) { tree->root = NULL; }

/**
 * @return true if the tree is empty, false otherwise.
 */
bool isEmpty(BSTree *tree) {
  if (tree->root == NULL) {
    return true;
  }

  return false;
}

/**
 * @brief Find the node with the given value, non-recursively.
 *
 * @return The node that was found, or NULL if the node was not found.
 */
Node *search(BSTree *tree, int value) {
  Node *current = tree->root;

  while (current != NULL && current->data != value) {
    // We have not found the value yet.

    if (value < current->data) {
      // Check the left subtree.
      current = current->left;
    } else {
      // Check the right subtree.
      current = current->right;
    }
  }

  // Note: current can be NULL.
  return current;
}

void printHelper(Node *n) {
  if (n == NULL) {
    return; // Base case.
  }

  // Print all smaller values first.
  printHelper(n->left); // Recursive call.

  printf("%d ", n->data);

  // Print all larger values next.
  printHelper(n->right); // Recursive call.
}

/**
 * @brief Print the elements of the tree in order.
 */
void print(BSTree *tree) {
  // Starting from the root, recursively traverse and print the tree in-order.
  printHelper(tree->root);
}

/**
 * @brief Recursively traverse the subtree, looking for a node whose data
 * matches value.
 */
Node *searchRecursiveHelper(Node *n, int value) {
  if (n == NULL) {
    // Nothing left to explore.
    return n; // Base case.
  }

  if (n->data == value) {
    // Found the node.
    return n; // Base case (can combine with above if-statement).
  }

  // At this point, n is non-NULL.
  // Also, n is not the node we are looking for.

  if (value < n->data) {
    // Check the left subtree.
    return searchRecursiveHelper(n->left, value);
  } else {
    // Check the right subtree.
    return searchRecursiveHelper(n->right, value);
  }
}

/**
 * @brief Find the node with the given value, recursively.
 *
 * @return The node that was found, or NULL if the node was not found.
 */
Node *searchRecursive(BSTree *tree, int value) {
  // Start at the root and traverse the tree recursively.
  return searchRecursiveHelper(tree->root, value);
}

/**
 * @brief Insert a new value into the tree, without recursion.
 */
bool insert(BSTree *tree, int value) {
  if (isEmpty(tree)) {
    // The tree is empty, add its first node.
    tree->root = createNode(value);

    return tree->root != NULL;
  }

  // The tree is not empty.
  Node *current = tree->root; // The current subtree.
  Node *parent = NULL;        // the root node has no parent.

  while (current != NULL) {
    parent = current;

    if (value <= current->data) {
      // The new node should go to the left of the current subtree.
      current = current->left;
    } else {
      // The new node should go to the right of the current subtree.
      current = current->right;
    }
  }

  // At this point, current is NULL.
  // But also, we know that we need to insert to the right/left of parent.

  if (value <= parent->data) {
    // The new node should go to the left of the parent.
    parent->left = createNode(value);

    return parent->left != NULL;
  } else {
    // The new node should go to the right of the parent.
    parent->right = createNode(value);

    return parent->right != NULL;
  }
}

/**
 * @brief Recursively traverse the subtree and add a new node to the appropriate
 * parent.
 */
Node *insertRecursiveHelper(Node *n, int value) {
  if (n == NULL) {
    // We have reached an empty spot in the tree, create the node.
    return createNode(value); // Base case.
  }

  if (value <= n->data) {
    // The new node should go to the left of the current subtree.
    n->left = insertRecursiveHelper(n->left, value); // Recursive call.
  } else {
    // The new node should go to the right of the parent.
    n->right = insertRecursiveHelper(n->right, value); // Recursive call.
  }

  return n;
}

/**
 * @brief Insert a new value into the tree, with recursion.
 */
bool insertRecursive(BSTree *tree, int value) {
  // Start at the root and recursively traverse the tree.
  Node *inserted = insertRecursiveHelper(tree->root, value);

  // The root of the tree may have been updated.
  tree->root = inserted;

  return inserted != NULL;
}

/**
 * @brief Search for a node and remove it from the tree.
 *
 * @return true if the node was removed, false otherwise (e.g., did not find a
 * matching node).
 */
bool deleteNode(BSTree *tree, int value) {
  if (isEmpty(tree)) {
    // The tree is empty, there is nothing to remove.
    return false;
  }

  // The tree is not empty.

  // Search for value, but also keep track of parent.
  Node *current = tree->root; // The current subtree.
  Node *parent = NULL;        // the root node has no parent.

  while (current != NULL && current->data != value) {
    parent = current;

    if (value < current->data) {
      // Check the left subtree.
      current = current->left;
    } else {
      // Check the right subtree.
      current = current->right;
    }
  }

  if (current == NULL) {
    // The value we are searching for is not in the tree.
    return false;
  }

  if (current->left != NULL && current->right != NULL) {
    // The current node has two children (left and right).
    parent = current;
    Node *successor = current->right; // the right subtree.

    // Find the smallest node (minimum data) in the right subtree.
    while (successor->left != NULL) {
      parent = successor;
      successor = successor->left; // Check the left subtree.
    }

    // Change current's data to be the minimum value that we found.
    current->data = successor->data;
    // Update current to successor, which is now the node to be deleted.
    current = successor;
  }

  if (current->left == NULL) {
    // The current node has one child (right).
    if (parent == NULL) {
      // The current node is the root node.
      Node *temp = current->right; // Save a pointer to the right child.

      free(current); // Delete the (previously) root node.

      tree->root = temp; // Update root to be the right child.

      return true;
    }

    // The current node is not the root node.

    if (parent->left == current) {
      // The node to be deleted is in parent's left subtree.
      parent->left =
          current
              ->right; // Parent's left subtree is now current's right subtree.
    } else {
      // The node to be deleted is in parent's right subtree.
      parent->right =
          current
              ->right; // Parent's right subtree is now current's right subtree.
    }
    // We have saved a pointer to current's right subtree in its parent, it is
    // now safe to free it.
    free(current);

    return true;
  }

  if (current->right == NULL) {
    // The current node has one child (left).
    if (parent == NULL) {
      // The current node is the root node.
      Node *temp = current->left; // Save a pointer to the left child.

      free(current); // Delete the (previously) root node.

      tree->root = temp; // Update root to be the left child.

      return true;
    }

    // The current node is not the root node.

    if (parent->left == current) {
      // The node to be deleted is in parent's left subtree.
      parent->left =
          current->left; // Parent's left subtree is now current's left subtree.
    } else {
      // The node to be deleted is in parent's right subtree.
      parent->right =
          current
              ->left; // Parent's right subtree is now current's left subtree.
    }
    // We have saved a pointer to current's left subtree in its parent, it is
    // now safe to free it.
    free(current);

    return true;
  }

  return true;
}

int main(void) {
  int list[] = {15, 3, 2, 9, 4, 30, 6, 8, 7, 1, 18, 31, 32};

  BSTree tree;
  initBSTree(&tree);

  for (int i = 0; i < 13; i++) {
    bool inserted = insertRecursive(&tree, list[i]);

    if (!inserted) {
      printf("Could not insert node %d into the tree, exiting.\n", i);

      return 0;
    }
  }

  printf("The tree contains (in ascending order): ");
  print(&tree);
  printf("\n");

  int searchValue;
  printf("Enter a value to search for recursively: ");
  scanf("%d", &searchValue);

  Node *n = searchRecursive(&tree, searchValue);
  if (n == NULL) {
    printf("Could not find %d in the tree.\n", searchValue);
  } else {
    printf("Found %d in the tree.\n", searchValue);
  }

  printf("Enter a value to search for: ");
  scanf("%d", &searchValue);
  n = search(&tree, searchValue);
  if (n == NULL) {
    printf("Could not find %d in the tree.\n", searchValue);
  } else {
    printf("Found %d in the tree.\n", searchValue);
  }

  for (int i = 0; i < 13; i++) {
    printf("Deleting %d.\n", list[i]);

    deleteNode(&tree, list[i]);

    if (!isEmpty(&tree)) {
      printf("The tree is now: ");
      print(&tree);
      printf("\n");
    }
  }

  return 0;
}
