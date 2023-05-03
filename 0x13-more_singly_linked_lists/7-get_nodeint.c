#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: the head node pointer
 * @index: is the index of the node starting at 0
 * Return: the node at the index given, returns NULL if node cease to exist
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp != NULL && i < index)
	{
		i++;
		temp = temp->next;
	}
	if (index > i || !temp)
		return (NULL);
	return (temp);
}
