#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 48, j, k;

	while (i < 56)
	{
		j = i + 1;
		k = i + 2;
		while (j < 57)
		{

			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k++);

				if (i == 55 && j == 56 && k == 58)
					break;

				putchar(44);
				putchar(32);
			}
		j++;
		}
	i++;
	}
	putchar(10);
}
