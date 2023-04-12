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
	unsigned int i, j, len1 = 0, len2 = 0;
	char *new_string;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
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
	new_string[i] = '\0';
	return (new_string);
}
