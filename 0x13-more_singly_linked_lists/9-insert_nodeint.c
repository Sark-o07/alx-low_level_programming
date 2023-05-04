#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to the start of the node
 * @idx: the index position to insert the new data.
 * @n: the integer value to be inserted as data
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;

	if (idx == 0)
	{
		new->next = temp;
		*head = new;
		return (new);
	}
	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		i++;
		temp = temp->next;
	}
	return (NULL);
}
