#include "lists.h"
/**
 *add_node_end - adds a new node at the end of list_t
 * @head: double pointer to the data type list_t
 * @str: stringer pointer
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *holder = *head;
	unsigned int size = 0;

	while (str[size])
		size++;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = size;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (holder->next != NULL)
		holder = holder->next;
	holder->next = temp;
	return (temp);
}
