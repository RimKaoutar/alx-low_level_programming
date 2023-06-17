#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48;

	while (i < 103)
	{
		if (i > 57 && i++ < 97)
			continue;
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
