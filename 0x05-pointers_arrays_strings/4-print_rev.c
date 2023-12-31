#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string.
 */

void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	while (length--)
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
