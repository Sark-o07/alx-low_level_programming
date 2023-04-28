#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: double pointer to data type list_t
 * @str: string pointer
 * Return: the address of the new element, or NULL if it failed
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int size = 0;

	while (str[size])
	{
		size++;
	}

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);
	temp->len = size;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
