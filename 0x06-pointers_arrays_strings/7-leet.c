#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @s: string input
 *
 * Return: @s
*/

char *leet(char *s)
{
	int i = 0, j;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == ul[j] || s[i] == sl[j])
				s[i] = n[j];
			j++;
		}
		i++;
	}
	return (s);
}
