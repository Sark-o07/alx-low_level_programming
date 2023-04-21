#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i, elem;

	va_start(num_list, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			elem = va_arg(num_list, int);
			printf("%d", elem);
		}

		else if (separator && i == 0)
		{
			elem = va_arg(num_list, int);
			printf("%d", elem);
		}
		else
		{
			elem = va_arg(num_list, int);
			printf("%s%d", separator, elem);
		}
	}
	va_end(num_list);
	printf("\n");
}
