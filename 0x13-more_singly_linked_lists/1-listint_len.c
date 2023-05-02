#include "lists.h"
/**
 * listint_len - prints all the elements of a listint_t list.
 * @h: a pointer to the start_node
 * Return: the number of elements outputted
 **/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}

	return (count);
}
