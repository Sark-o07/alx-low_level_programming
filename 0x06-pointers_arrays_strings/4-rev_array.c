#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 *@a: an array of integers
 *@n: the number of elements to swap
 * Return: void
 **/
void reverse_array(int *a, int n)
{
	int i, j;
	int b[50];

	j = n;
	for (i = 0; i < j; i++)
	{
		n--;
		b[i] = a[n];
	}
	for (i = 0; i < j; i++)
	{
		a[i] = b[i];
	}
}
