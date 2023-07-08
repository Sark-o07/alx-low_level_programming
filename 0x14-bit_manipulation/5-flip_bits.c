#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, totale = 0;
	unsigned long int check, xor = n ^ m;

	i = (sizeof(unsigned long int) * 8) - 1;
	while (i >= 0)
	{
		check = xor >> i;
		if (check & 1)
			totale++;
		i--;
	}

	return (totale);
}
