#include <stdio.h>
/**
 * main -Print all the letters except q and e
 * Return: 0;
*/
int main(void)
{
	char c, e, q;

	e = 'e';
	q = 'q';
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == e || c == q)
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
