#include <stdio.h>
#include "dog.h"
/**
 * init_dog - a function that initialize
 * a variable of type struct dog
 * @d: pointer variable of the type struct dog
 * @name: first member of struct dog
 * @age: second member of struct dog
 * @owner: third member of struct dog
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
