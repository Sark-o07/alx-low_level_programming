#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index specified
 * @head: a node pointer to the start
 * @index: the position of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *target;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		i++;
	}

	target = temp->next;
	temp->next = target->next;
	free(target);
	return (1);
}
