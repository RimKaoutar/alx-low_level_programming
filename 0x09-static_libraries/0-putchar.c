#include "main.h"

/**
 * main - Entry point.
 *
 * Description: prints _putchar, followed by a new line,
 * using putchar prototype.
 *
 * Return: On success 0.
 */
int main(void)
{
	char word[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
