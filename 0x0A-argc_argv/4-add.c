#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the command name
 *@argc: the size of an array argv
 *@argv: an arry containing the program
 *command line argument
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int j, result = 0, i = 1;
	char *pointr; /**n address to store the +ve num args**/

	for (; i < argc; i++)
	{
		pointr = argv[i]; /**storing the +ve num args**/
		for (j = 0; pointr[j] != '\0'; j++)
			if (!isdigit(pointr[j]))
			{
				printf("Error\n");
				return (1);
			}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
