#include "main.h"

/**
 * _puts - writes the string str and a trailing newline to stdout.
 * @str: string.
*/


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
