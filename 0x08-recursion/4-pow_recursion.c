#include "main.h"
/**
 * _pow_recursion - calculates the exponential
 *@x: the base integer
 *@y: the exponent integer.
 *Return:the value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	y--;
	return (x * _pow_recursion(x, y));
}
