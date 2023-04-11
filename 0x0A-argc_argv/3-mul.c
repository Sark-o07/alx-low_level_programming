#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the command name
 *@argc: the size of an array argsv
 *@argsv: an arry containing the program
 *command line argument
 * Return: 0
 **/
int main(int argc, char *argsv[])
{
	int result = 1, i = 1;

	if (argsv[argc - 1] == NULL || argsv[argc - 2])
	{
		printf("Error\n");
		return (1);
	}
	for (; i < argc; i++)
	{
		result *= atoi(argsv[i]);
	}
	printf("%d\n", result);
	return (0);
}
