#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: the int to be converted and printed
 * Return: void
 **/
void print_binary(unsigned long int n)
{
	int l, totale = 0;
	unsigned int check;

	for (l = 63; l >= 0; l--)
	{
		check = n >> l;
		if (check & 1)
		{
			_putchar('1');
			totale++;
		}
		else if (totale != 0)
		{
			_putchar('0');
		}
	}
	if (totale == 0)
		_putchar('0');
