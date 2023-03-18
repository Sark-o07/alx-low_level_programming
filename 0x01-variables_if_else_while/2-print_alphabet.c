#include <stdio.h>
#include <stdlib.h>
/**
 * main -print letters of the alphabet
 * Return: always (success)
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
