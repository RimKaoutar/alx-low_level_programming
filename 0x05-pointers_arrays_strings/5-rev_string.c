#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string.
 */



void rev_string(char *s)
{

	int i = 0, length = 0;
	char swap;

	while (s[length] != '\0')
		length++;

	while (i < length / 2)
	{
		swap = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = swap;
		i++;
	}
}
