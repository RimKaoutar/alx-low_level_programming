#include "main.h"

/**
 * print_array - , followed by a new line.
 * @a: array of integers.
 * @n: the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{

	int i = 0;

	while (n--)
	{
		printf("%d, ", str[i++]);
	}
	_putchar('\n');
}
