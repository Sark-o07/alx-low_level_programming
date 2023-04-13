#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc.
 *@b: size of the memory
 *Return: a pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
        unsigned int *pointr;

        pointr = malloc(b);

        if (pointr == NULL)
                exit(98);

	return (pointr);
}
