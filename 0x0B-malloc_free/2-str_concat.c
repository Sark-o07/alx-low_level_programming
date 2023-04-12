#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 **str_concat - function that returns a pointer to
 *a newly allocated space in memory, which contains
 *a copy of the concatenated strings given as a parameter.
 *@s1: a pointer to the first string.
 *@s2: a pointer to the second string.
 *Return: a pointer to the concatenated string.
 *It returns NULL if insufficient memory was available
**/
char *str_concat(char *s1, char *s2)
{
	int i, j, len1 = strlen(s1), len2 = strlen(s2);
	char *new_string;

	if (s1 == (NULL)|| s2 == NULL)
		return (NULL);
	new_string = (char *) malloc((len2 + len1) * sizeof(char));
	if (new_string == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new_string[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		new_string[i] = s2[j];
		i++;
	}
	return (new_string);
}
