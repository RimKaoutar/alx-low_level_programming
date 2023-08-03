#include "main.h"

/**
 * clear_bit - that sets the value of a bit to 0 at a given index.
 * @n: is to input numbers
 * @index: is to input index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
		return (1);
}
