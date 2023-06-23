#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
*/

void print_diagonal(int n)
{
	n = abs(n);
	while (n--)
	{
		putchar('\\');
		putchar('\n');
	}
	putchar('\n');
}
