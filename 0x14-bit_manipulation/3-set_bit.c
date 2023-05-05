#include "main.h"
/**
 * set_bit - sets the value of a bitt to 1 at a given index
 * @index: is the index of the bit to be set
 * @n: the decimal to be operated
 * Return: 1 if it worked, or -1 if an error ocurred.
 **/
set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int)* 8)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
