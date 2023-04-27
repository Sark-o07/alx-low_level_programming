#include "lists.h"
/**
* print_list- prints all the elements of a list_t list
* @h: a struct pointer
* Return: then number of nodes
**/
size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (; h != NULL;)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		s++;
	}
	return (s);
}
