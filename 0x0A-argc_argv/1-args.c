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
	(void)(argsv);
	printf("%d\n", argc - 1);
	return (0);
}