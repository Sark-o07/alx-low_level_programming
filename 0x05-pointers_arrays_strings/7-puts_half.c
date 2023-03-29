#include "main.h"
/**
 * puts_half - rints half of a string, followed by a new line.
 *@str: array to be printed
*Return: void
**/
void puts_half(char *str)
{
	int count = 0, half_count, j;

	while (str[count])
	{
		count++;
	}
	if (count % 2 != 0)
	{
		half_count = (count - 1) / 2;
	} else
	{
		half_count = count / 2;
	}
	for (j = half_count; j < count; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
