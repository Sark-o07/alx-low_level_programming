#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 *@s1: the first string
 *@s2: the second string
 *@n: number of bytes
 *Return: a pointer to the concatenated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len_1, len_2;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = strlen(s1);

	len_2 = strlen(s2);

	if (n >= len_2)
		n = len_2;

	concat = malloc(len_1 + n + 1);

	if (concat == NULL)
		return (NULL);

	memcpy(concat, s1, len_1);
	memcpy(concat + len_1, s2, n);

	concat[len_1 + n] = '\0';

	return (concat);
}
