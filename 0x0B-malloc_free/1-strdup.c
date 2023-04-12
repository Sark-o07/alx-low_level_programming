#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **_strdup - function that returns a pointer to
 *a newly allocated space in memory, which contains
 *a copy of the string given as a parameter.
 *@s: a pointer to the original string.
 *Return: a pointer to the duplicated string.
 *It returns NULL if insufficient memory was available
**/
char *_strdup(char *s)
{
	int i, len = strlen(s);
	char *new_string;

	if (*s == NULL)
		return (NULL);
	new_string = (char *) malloc((len + 1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		new_string[i] = s[i];
	return (new_string);
}
