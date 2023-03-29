#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 *@str: array to be printed
 *Return: void
 **/
void puts2(char *str)
{
	int count = 0, i;

	while (str[count])
	{
		count++;
	}
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
