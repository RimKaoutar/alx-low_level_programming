#include "main.h"
/**
 * flip_bits - that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: is to input number
 * @m: is to input numbers
 * Return: the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0;

	while (n || m)
	{
		if ((n & 1) ^ (m & 1))
			res++;
		n >>= 1;
		m >>= 1;
	}
	return (res);
}
