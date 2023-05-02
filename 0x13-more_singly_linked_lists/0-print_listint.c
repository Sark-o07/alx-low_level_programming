#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: a pointer to the start_node
 * Return: the number of elements outputted
 **/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
