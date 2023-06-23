#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: the number of times the character _ should be printed.
*/

void print_line(int n)
{
	n = abs(n);
	while (n--)
		_putchar('_');
	_putchar('\n');
}
