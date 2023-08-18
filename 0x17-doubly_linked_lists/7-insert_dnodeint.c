#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a list.
 *
 * @h: A pointer to a pointer to the head node of the doubly linked list.
 * @idx: The index where the new node should be inserted. Index starts at 0.
 * @n: The integer value to be stored in the new node.
 *
 * Return: A pointer to the new node, or NULL if insertion failed.
 * If it is not possible to add the new node at index idx, NULL is returned.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head;
	unsigned int i;

	new_node = NULL;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->prev = head;
						new_node->next = head->next;
						head->next = new_node;
						new_node->next->prev = new_node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new_node);
}
