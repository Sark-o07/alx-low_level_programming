#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
*@a: a function parameter
*@b: a function parameter
* Return: always 0
**/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
