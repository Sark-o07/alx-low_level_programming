#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two integer a and b
 * @a: first integer variable
 * @b: second integer
 * Return: the sum of a and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts int b from a
 * @a: first int
 * @b: second int
 * Return: the difference between a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - products of a and b
 * @a: first int
 * @b: second int
 * Return: the productof a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides int a by b
 * @a: first integer
 * @b: second integer
 * Return: returns the result of the division
 **/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - finds the remainder of the division
 * @a: first integer
 * @b: second integer
 * Return: reutrns the remainder of the division of two integer
 **/
int op_mod(int a, int b)
{
	return (a % b);
}
