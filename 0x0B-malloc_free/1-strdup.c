#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **_strdup - function that returns a pointer to
 *a newly allocated space in memory, which contains
 *a copy of the string given as a parameter.
 *@str: a pointer to the original string.
 *Return: a pointer to the duplicated string.
 *It returns NULL if insufficient memory was available
**/
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *new_string;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	new_string = (char *) malloc((len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new_string[i] = str[i];
		if (str[i] == '\0')
		{
			break;
		}
	}
	return (new_string);
}
