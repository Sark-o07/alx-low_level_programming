#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 *and initializes it with a specific char.
 *@size: an unsigned integer indicating the of
 *size of the array to be created
 *@c: a character that the array will be initialized with.
 *Return: a pointer to the array, or NULL if it fails
 **/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = (char *) malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
