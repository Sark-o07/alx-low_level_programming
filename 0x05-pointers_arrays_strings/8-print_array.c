#include <stdio.h>
#include "main.h"
/**
* print_array - prints n elements of an array of integers
*@a: array to be checked
*@n: integer to count number of items to be printed
* Return: void
**/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (n - 1 == i)
		{
			break;
		}
		printf(", ");
	}
	printf("\n");
}
