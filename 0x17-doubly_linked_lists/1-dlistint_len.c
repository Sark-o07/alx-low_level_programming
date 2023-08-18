#include "lists.h"
/**
 * dlistint_len - counts all the elements of a dlistint_t list.
 *
 * @h: Pointer to the head node of the doubly linked list.
 * Return: The number of nodes in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
