#include"main.h"
/**
 * _strcat - function that concatenates two strings.
 *@dest: the array to be appended to
 *@src: the array to be appended.
 *Return: a pointer to the resulting string dest
 **/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
