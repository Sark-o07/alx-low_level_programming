#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all the parameters.
 * @n: number of parameters to be summed.
 * Return: sum of all parameters or 0 if n == 0
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;
	int elem, sum = 0;

	va_start(num_list, n);
	if (n == 0)
		return (0);

	≈ß≈çfor (i = 0; i < n; i++)
	{
		elem = va_arg(num_list, int);
		sum += elem;
	}
	va_end(num_list);

	return (sum);
}
