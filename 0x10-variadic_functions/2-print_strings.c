#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - output string
 * @separator: separate strings
 * @n: number of args
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *arr;

	va_list arr_list;

	va_start(arr_list, n);

	for (j = 0; j < n; j++)
	{
		arr = va_arg(arr_list, char *);
		if (!arr)
			arr = "nil";
		if (!separator)
			printf("%s", arr);
		else if (separator && j == 0)
			printf("%s", arr);
		else
			printf("%s%s", separator, arr);
	}
	printf("\n");
	va_end(arr_list);
}
