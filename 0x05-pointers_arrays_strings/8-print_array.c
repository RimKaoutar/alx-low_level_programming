#include "main.h"

/**
 * print_array - , followed by a new line.
 * @a: array of integers.
 * @n: the number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{

	int i = 0;

	if (n < 0)
		n = 0;
	while (n--)
	{
		if (n >= 1)
			printf("%d, ", a[i++]);
		else
			printf("%d", a[i++]);
	}
	printf("\n");
}
