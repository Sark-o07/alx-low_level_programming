#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * _strlen - a function that returns the length of a string
 *@s: string to be checked
 * Return: length of the string
 **/
int _strlen(char *s)
{
	int str_length = 0;

	while (s[str_length])
	{
		str_length++;
	}
	return (str_length);
}
/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte, to the
* buffer pointed to by dest.
* @dest: destination.
* @src: source.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - creates a new dog.
 * @name: first member of the type dog_t
 * @age: second member of the type dog_t
 *@owner: third member of the type dog_t
 * Return: NULL if the function fails
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	d->name = malloc(_strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(_strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);

	return (d);
}
