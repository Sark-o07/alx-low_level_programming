#include "main.h"

/**
* string_toupper - a function that converts lowercase
* characters of a string to upper case
* @s: the string parameter
* Return: string
**/
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] = '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
