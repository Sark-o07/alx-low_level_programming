#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 *
 * @h: Pointer to the head node of the doubly linked list.
 * Return: The number of nodes in the linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
