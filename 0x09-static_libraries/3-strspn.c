#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: pointer to the string
 *@accept: pointer to the prefix
 *Return: the number of bytes in the initial segment of s
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, index = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				index++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			return (index);
		i++;
	}
	return (index);
}
