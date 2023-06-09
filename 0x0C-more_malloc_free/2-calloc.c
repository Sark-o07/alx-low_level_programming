#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_calloc - function that allocates memory
 *for an array, using malloc.
 *@nmemb: number of elements
 *@size: number of bytes
 *Return:a pointer to the allocated memory.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pointr = malloc(nmemb * size);

	if (pointr == NULL)
		return (NULL);
	memset(pointr, 0, nmemb * size);

	return (pointr);
}
