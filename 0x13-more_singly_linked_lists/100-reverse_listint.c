#include "lists.h"
/**
 * reverse_listint - reverses a listint
 *@head: node pointer to the starting node
 * return: pointer to the first node of the reversed list.
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL, *front = NULL;

	while (*head != NULL)
	{
		front = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head =front;
	}
	*head = back;
	return (*head);
}
