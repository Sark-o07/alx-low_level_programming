#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - rints the sum of the two diagonals of a square matrix.
 *@a: pointer to the mlti-array
 *@size: size of the matrix
 *Return: void
 **/
void print_diagsums(int *a, int size)
{
	int i, j, main_sum = 0, sec_sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				main_sum += a[i * size + j];
			}
			if (i == size - 1 - j)
			{
				sec_sum += a[i * size + j];
			}
		}
	}
	printf("%d, %d\n", main_sum, sec_sum);
}
