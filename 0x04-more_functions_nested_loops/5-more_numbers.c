#include "main.h"
#include <stdbool.h>

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
*/

void more_numbers(void)
{
	int i = 10, j, c;
	bool digit = false;

	while (i--)
	{
		digit = false;
		j = 2;
		while (j--)
		{
			c = 48;
			while (c < 58)
			{
				if (digit)
				{
					if (c > 52)
						break;
					_putchar(49);
				}
					_putchar(c++);
			}
			digit = true;
		}
		_putchar('\n');
	}
}
