#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: string of name to print
 * @f: pointer to the function
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
