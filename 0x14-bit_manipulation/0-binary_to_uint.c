#include "main.h"
/**
 * power - self-defined power function
 * @base: the base
 * @exponent: the exponent
 * Return: the result of the function
 **/
double power(double base, int exponent)
{
	double result = 1.0;
	int i;

	for (i = 0; i < exponent; i++)
		result *= base;

	return (result);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: the binary to be converted
 * Return:  the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1
 **/
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0, expo = 0;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	while (b[len])
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decimal += (b[i] - '0') * power(2, expo);
		expo++;
	}
	return (decimal);
}
