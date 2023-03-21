#include "main.h"

/**
 *_isalpha -checks for alphabetic character.
 *@c: is the car to be checked.
 * Return: 1 if char is alphabet, else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
