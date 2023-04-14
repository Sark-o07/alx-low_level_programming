#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory
 *block using malloc and free
 *@ptr: is a pointer to the memory previously allocated
 *@old_size: the size, in bytes, of the allocated space for ptr
 *@new_size: the new size, in bytes of the new memory block
 *Return: pointer to the new memory block
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	pointr = malloc(new_size);
	free(ptr);
	return (pointr);
}
