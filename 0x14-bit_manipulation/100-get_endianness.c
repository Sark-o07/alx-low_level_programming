include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: void
 **/
int get_endianness(void)
{
	unsigned int num = 0x04030201;
	char *c = (char *) &num;

	return (*c);
}
