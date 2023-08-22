#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 *@s: string of char to be printed.
 * Return: void
 **/
void _puts(char *s)
{
	int i, str_len;

	str_len = 0;
	while (s[str_len])
	{
		str_len++;
	}
	for (i = 0; i < str_len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
