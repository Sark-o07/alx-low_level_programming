#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it successful, -1 if it fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h, *temp;
	unsigned int i;

	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h1->prev;

	i = 0;

	while (h != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp->next = h->next;

				if (h->next != NULL)
					h->next->prev = temp;
			}

			free(h);
			return (1);
		}
		temp = h;
		h = h->next;
		i++;
	}

	return (-1);
}
