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
	int i = 0, j, S1 = 0, S2 = 0;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				S1 += a[i][j];
			if (j == n - i - 1)
				S2 += a[i][j];
			j++;
		}
		i++;
	}
	printf("%d, %d", S1, S2);
}
