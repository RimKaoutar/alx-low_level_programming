#include "main.h"

/**
 * _puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string.
*/


void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
		str++;
	}
	_putchar('\n');
}
