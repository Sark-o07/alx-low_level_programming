#include "lists.h"
/**
* list_len - prints the number of elem of a list_t list
* @h: a struct pointer
* Return: then number of nodes
**/
size_t list_len(const list_t *h)
{
	size_t s = 0;

	for (; h != NULL;)
	{
		h = h->next;
		s++;
	}
	return (s);
}
