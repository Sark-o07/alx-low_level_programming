#include "main.h"
/**
 * factorial - calculates the factorial
 *@n: the integer to be factored
 *Return: factorial of a given number.
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
