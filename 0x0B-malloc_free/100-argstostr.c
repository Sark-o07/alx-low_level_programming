#include "main.h"
#include <stdlib.h>
/**
 **argstostr - concatenates all the
 *arguments of your program
 *@ac: num of args
 *@av: array of args
 *Return: a pointer to a new string,
 *or NULL if it fails
 **/
char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}

	str = malloc((length + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
