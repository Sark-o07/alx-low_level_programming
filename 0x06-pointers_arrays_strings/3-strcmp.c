#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: the array of string to be comapred
 * @s2: the array of string to be compared
 * Return: negative value if the first string is smaller than the second,
* zero if they are equal
*a positive value if the first string is greater than the second.
**/
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] == s2[count] && s1[count] != '\0';  count++)
		;
	return (s1[count] - s2[count]);
}
