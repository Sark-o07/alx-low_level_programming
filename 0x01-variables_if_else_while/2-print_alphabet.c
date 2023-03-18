#include <stdio.h>
#include <stdlib.h>
/**
 * main -print letters of the alphabet
 * Return: always (success)
*/
int main()
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	exit(EXIT_SUCCESS);
}
