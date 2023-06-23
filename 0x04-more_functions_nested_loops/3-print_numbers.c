#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
*/

void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c++);
	}
	_putchar('\n');

}
