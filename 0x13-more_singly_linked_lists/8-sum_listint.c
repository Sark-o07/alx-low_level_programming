#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: the node pointer to the head
 * Return: the sum of all the data of a linked_list
 * sum of all the data (n) of a listint_t linked list.
 **/
int sum_listint(listint_t *head)
{
	int add = 0;
	listint *p = head;

	while(p != NULL)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
