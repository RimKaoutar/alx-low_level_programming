#include "main.h"

/**
 * print_alphabet_x10 - Entry point.
 *
 * Description: prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */


void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (j = 0; i < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alpha[i]);
		}
		_putchar('\n');
	}
}
