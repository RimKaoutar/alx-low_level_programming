#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string.
 */

void print_rev(char *s)
{
	int length = _strlen(s);

	while (length)
	{
		_putchar(s[length--]);
	{
	_putchar('\n');
}
