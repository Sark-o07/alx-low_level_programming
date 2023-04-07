#include "main.h"
/**
*is_prime_number - a function for prime-number.
*@N: the integer to be checked
*@i: the integer used to check the divisibility
* Return: returns 1 if the input integer is a
 **/
int loop_recursion(int N, int i);
int is_prime_number(int n)
{
	if (n == 0 || n == 1)
		return (0);
	else if (n < 0)
		return (0);
	else
		return (loop_recursion(n, 2));
}
/**
*loop_recursion - loop to iterate through 2 to N/2
*@N: the integer to be checked
*@i: the integer used to check the divisibility
*the given number
* Return: returns 1 if the input integer is a prime-number
**/
int loop_recursion(int N, int i)
{
	if (i > N / 2)
		return (1);
	else if (N % i == 0)
		return (0);
	else
		return (loop_recursion(N, i + 1));
}
