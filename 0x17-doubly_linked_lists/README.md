# 0x17-doubly_linked_lists

## Description

This project contains C functions that implement various operations on doubly linked lists.

## List of Functions

1. `size_t print_dlistint(const dlistint_t *h);`
    - Prints all the elements of a dlistint_t list.
    - Returns the number of nodes.
    - Format: see example

2. `size_t dlistint_len(const dlistint_t *h);`
    - Returns the number of elements in a linked dlistint_t list.

3. `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
    - Adds a new node at the beginning of a dlistint_t list.
    - Returns the address of the new element, or NULL if it failed.

4. `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
    - Adds a new node at the end of a dlistint_t list.
    - Returns the address of the new element, or NULL if it failed.

5. `void free_dlistint(dlistint_t *head);`
    - Frees a dlistint_t list.

6. `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
    - Returns the nth node of a dlistint_t linked list.
    - Returns NULL if the node does not exist.

7. `int sum_dlistint(dlistint_t *head);`
    - Returns the sum of all the data (n) of a dlistint_t linked list.
    - Returns 0 if the list is empty.

8. `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
    - Inserts a new node at a given position.
    - Returns the address of the new node, or NULL if it failed.
    - Does not add the new node and returns NULL if insertion is not possible.

9. `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
    - Deletes the node at index index of a dlistint_t linked list.
    - Returns 1 if it succeeded, -1 if it failed.

## Usage

To use these functions, include the corresponding header file `lists.h` in your C program.

## Author

Ugbala Nicholas
