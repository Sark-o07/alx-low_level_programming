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
	int j, total = 0;
	unsigned long int check, xor = n ^ m;

	j = (sizeof(unsigned long int) * 8) - 1;

	while (j >= 0)
	{
		check = xor >> j;
		if (check & 1)
			total++;
		j--;
	}

	return (total);
}
