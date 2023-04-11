#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the command name
 *@argc: the size of an array argv
 *@argv: an arry containing the program
 *command line argument
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int result = 1, i = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (; i < argc; i++)
	{
		result *= atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
