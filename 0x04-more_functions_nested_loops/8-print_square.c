#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: the size of the square
*/

void print_square(int size)
{
	int i = 0, j;

	while (i++ < size)
	{
		j = 0;
		while (j++ < size)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
