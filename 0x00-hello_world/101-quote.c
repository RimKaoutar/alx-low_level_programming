#include<stdio.h>

/**
 * main - Entry point
 *
 *prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (i = 0; i < 59; i++)

	{
		putchar(quot[i]);

	}
	return (1);
}
