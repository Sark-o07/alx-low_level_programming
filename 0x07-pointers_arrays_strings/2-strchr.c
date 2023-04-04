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

	for (; *s != '\0' ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
