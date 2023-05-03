#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a node pointer to the head
 * Return: the head node’s data (n). if the linked list is empty return 0
 **/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
