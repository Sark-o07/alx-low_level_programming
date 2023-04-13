#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers.
 *@min: minimum value to be filled.
 *@max: maximum value to be filled.
 *Return: the pointer to the newly created array
 **/
int *array_range(int min, int max)
{
	int *array;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = (int *)malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
