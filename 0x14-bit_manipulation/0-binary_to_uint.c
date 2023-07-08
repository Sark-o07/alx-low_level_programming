#include "main.h"
/**
 * binary_to_uint - coverts a binary number to an usigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if t's any char that is not 0 or 1 |
 * b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int base_10 = 0;

	if (b == NULL)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		base_10 = 2 * base_10 + (b[j] - '0');
	}
	return (base_10);
}
