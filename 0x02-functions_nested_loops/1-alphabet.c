#include "main.h"

/**
 * print_alphabet - function
 *
 * Description: prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
}
