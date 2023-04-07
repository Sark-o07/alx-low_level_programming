#include "main.h"
/**
 **/
int _sqrt_recursion(int n)
{
	int count = 1, diff = 0;

	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (diff < 0)
		return (-1);
	diff = n - count;
	return(1 + _sqrt_recursion(diff - (count + 2)));
}
			
			
	
