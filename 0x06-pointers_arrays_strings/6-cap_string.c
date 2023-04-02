#include "main.h"

/**
 * cap_string - a function that capitalizes
 * a string
 * @s: the string parameter
 * Return: string
 **/
char *cap_string(char *s)
{
	int capitalize_next = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			capitalize_next = 1;
			continue;
		}
		if (s[i] >= 97 && s[i] <= 122)
		{
			if (capitalize_next)
			{
				s[i] -= 32;
				capitalize_next = 0;
			}
		}
		else
		{
			capitalize_next = 0;
		}
	}
	return (s);
}
