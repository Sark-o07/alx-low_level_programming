#include "main.h"
/**
 * get_bit - eturns the value of a bit at a given index.
 * @n: the decimal to be converted to binary
 * @index: the index of the bit to be gotten
 * Return: the value of the bit at index given or
 * -1 if an error occured
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
