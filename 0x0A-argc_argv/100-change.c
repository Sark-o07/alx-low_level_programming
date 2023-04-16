#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the minimum number of
 *coins to make change for an amount of money.
 *@argc: arguments count
 *@argv: arguments vector
 *Return: 1 or 0
 **/
int main(int argc, char *argv[])
{
	int i, n, coins = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= cents[i])
		{
			n -= cents[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
