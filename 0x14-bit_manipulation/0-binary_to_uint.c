#include "main.h"
/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b: the input string binary
 * Return: the converted number,
 * or 0 if b is NULL or if b contains non-'0'/'1' characters.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
			value = (value << 1) + (*b - '0');
		else
			return (0);
		b++;

	}
	return (value);
}
