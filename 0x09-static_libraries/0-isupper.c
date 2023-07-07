#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: takes in integer type (ascii value) input for function
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
