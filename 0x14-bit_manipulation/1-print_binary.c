#include "main.h"

/**
 * print_binary - that prints the binary representation of a number.
 * @n: is the number of the Input
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) + '0');
}