#include "main.h"
/**
 * *_strncat - a function that concatenates two strings.
 *@dest: the array of strings to be appdended to
 *@src: the array of strings to be appended
 *@n: the number of bytes to be appended.
 *Return: a pointer to the resulting string dest.
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
