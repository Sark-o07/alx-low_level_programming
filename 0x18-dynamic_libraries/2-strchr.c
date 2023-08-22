#include <stddef.h>
#include "main.h"
/**
 **_strchr - a function that locates a character in a string.
 *@s: pointer to the string s
 *@c:the character c to be checked
*Return:  a pointer to the first occurrence of the character c
 **/
char *_strchr(char *s, char c)
{
	int i, j;

	for (i = 0; s[i] != '\0' ; i++)
		;
	for (j = 0; j <= i; j++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
