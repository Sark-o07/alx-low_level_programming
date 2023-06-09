#include "main.h"
/**
 * _strpbrk - it searches a string for any of a set of bytes.
 *@s: the pointer to the string
 *@accept: the pointer to the string that is to be checked
 *Return: a pointer to the byte in s that matches one of the
 *byte in accept
 **/
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (*s == accept[m])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
