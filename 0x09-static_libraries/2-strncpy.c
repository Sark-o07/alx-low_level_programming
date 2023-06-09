#include "main.h"
/**
 **_strncpy - a function that copies a string.
 *@dest: the destination array
 *@src: the source array.
 *@n: the number of bytes.
 *Return: an overwritten string.
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
