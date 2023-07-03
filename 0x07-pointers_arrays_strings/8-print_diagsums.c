#include "main.h"

/**
 * print_diagsums - print the sum of the two
 *                 diagonals of a square matrix
 *                 of integers.
 * @a: input pointer
 * @size: size of the matrix
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i = 0, S1 = 0, S2 = 0;

	while (i < size)
	{
		S1 += a[i];
		S2 += a[size - i - 1];
		i++;
		a += size;
	}
	printf("%d, %d\n", S1, S2);
}
