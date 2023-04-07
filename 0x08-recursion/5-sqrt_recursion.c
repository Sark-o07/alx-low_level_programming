#include "main.h"
/**
*sqrt_checker - checks if a number is a perfect square
*@N: integer to be checked
*@count: the variable that holds the root
*Return: the root or -1
**/
int sqrt_checker(int N, int count)
{
	int diff = N - count * count;

	if (diff < 0)
		return (-1);
	else if (diff == 0)
		return (count);
	else
		return (sqrt_checker(N, count + 1));
}
int sqrt_checker(int N, int count);
/**
* _sqrt_recursion - a function that returns the square root
*@n: integer to be checked
*Return: the square root of the parameter or -1
**/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_checker(n, 1));
}
