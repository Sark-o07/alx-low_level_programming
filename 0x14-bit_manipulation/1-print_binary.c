#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: the int to be converted and printed
 * Return: void
 **/
void print_binary(unsigned long int n)
{
	unsigned int check;
	int j, total = 0;

	for (j = 63; j >= 0; j--)
	{
		check = n >> j;

		if (check & 1)
		{
			_putchar('1');
			total++;
		}
		else if (total != 0)
		{
			_putchar('0');
		}
	}
	if (total == 0)
		_putchar('0');
}
