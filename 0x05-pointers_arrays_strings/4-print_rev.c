#include "main.h"
/**
* print_rev - prints a string, followed by a new line
*@s: string of char to be printed.
* Return: void
**/
void print_rev(char *s)
{
	int j, k, str_len;

	str_len = 0;
	while (s[str_len])
	{
		str_len++;
	}
	k = 0;
	for (j = str_len; k <= j; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
