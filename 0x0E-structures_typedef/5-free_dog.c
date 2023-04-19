#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - a function that  frees dogs.
 * @d: pointer to the type dog_t
 * Return: void
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
