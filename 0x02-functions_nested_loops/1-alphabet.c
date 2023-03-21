#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int c;
	for (c = 'a', c <= 'z', c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
