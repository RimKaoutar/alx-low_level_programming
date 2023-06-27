#include "main.h"

/**
 * puts_half  - print the second half of the string, followed by a new line.
 * @str: string.
 */

void puts_half(char *str)
{
	int n, length = 0;

	while (str[length] != '\0')
		length++;

	n = (length - 1) / 2;

	while (n <= length)
	{
		_putchar(str[n++]);
	}
	_putchar('\n');
}
