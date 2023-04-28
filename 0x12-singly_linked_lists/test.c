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
int main(void)
{
	list_t *head = NULL;
	printf("address of *head: %p\n", &head);
	printf("value of head 1: %p\n", head);
	add_node(&head, "Hello");
	printf("address of *head1: %p\n", head->next);
	printf("value of head 2: %p\n", head);
	add_node(&head, "world!");
	printf("address of *head3: %p\n", head->next->next);
	printf("value of head 3: %p\n", head);
	printf("%s\n", head->str);  // Output: world!
	printf("%s\n", head->next->str);  // Output: Hello
	return 0;
}
