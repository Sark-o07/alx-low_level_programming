#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function
 **/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *arr, *separator = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(lst, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(lst, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(lst, double));
				break;
			case 's':
				arr = va_arg(lst, char *);
				if (!arr)
					str = "(nil)";
				printf("%s%s", separator, arr);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}
}
