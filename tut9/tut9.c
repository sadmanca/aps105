/*
TUTORIAL 9 Question 1:

The following C structure is used to define each node in a linked list:

    typedef struct node {
        int data;
        struct node *next;
    } Node;

Assume that nodes in the linked list are maintained in order of their values, such that the value stored in each node is greater than or equal to the value in predecessor nodes. Write a C function:

    void simplify(Node *head)

that deletes any duplicate items in the linked list. The parameter head is a pointer to the head node of a linked list. Note that the head node of the linked list will remain unchanged after the deletions are made.

EXAMPLE:
Before calling simplify, the linked list contains:

    13 13 15 15 17 17 17 19 22 25 25 28

After calling simplify, the linked list contains:

    13 15 17 19 22 25 28

*/

/*
TUTORIAL 9 Question 2:

The following C structure is used to define each node in a linked list:

    typedef struct node {
        int data;
        struct node *next;
    } Node;

Write a reverse() function that reverses the input linked list.

EXAMPLE:
Input list:

    5 -> 15 -> 10

reverse() should reverse the list:

    10 -> 15 -> 5

*/

/*
TUTORIAL 9 Question 3:

The following C structure is used to define each node in a linked list:

    typedef struct node {
        int data;
        struct node *next;
    } Node;

Write a rotate() function that rotates the input linked list counter-clockwise by k nodes, where k is a positive integer that is smaller than the count of nodes in the linked list.

EXAMPLE:
K = 4, Input list:

    10 -> 20 -> 30 -> 40 -> 50 -> 60

rotate() should produce the list:

    50 -> 60 -> 10 -> 20 -> 30 -> 40

*/