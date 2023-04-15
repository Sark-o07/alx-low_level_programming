#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 *@c: the int to be checked.
 * Return: 1 if char is uppercase, else 0.
 */
int _isupper(int c)

{
	if (c >= 65  && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
