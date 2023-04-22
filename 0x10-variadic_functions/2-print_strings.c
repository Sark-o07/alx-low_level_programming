#include <stdarg.h>
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
	if (n == 0)
	{
		printf("\n");
		return;
	}
	for (j = 0; j < n; j++)
	{
		arr = va_arg(arr_list, char *);
		if (arr == NULL || *arr == '\0')
			printf("(nil)");
		else
			printf("%s", arr);
		if (separator != NULL && j != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arr_list);
}
