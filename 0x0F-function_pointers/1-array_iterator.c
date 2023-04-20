#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array.
 * @array: array to be acted on.
 * @size: the size of the array.
 * @action: a pointer to the function you need to use.
 * Return: a void
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
