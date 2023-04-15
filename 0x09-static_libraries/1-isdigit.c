#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks checks for a digit (0 through 9).
 *@c: the int to be checked.
 * Return: 1 if char is uppercase, else 0.
 */
int _isdigit(int c)

{
	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
