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

	if (length % 2 == 0)
		n = length / 2;
	else
		n = (length - 1) / 2;

	while (n++ < length)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
