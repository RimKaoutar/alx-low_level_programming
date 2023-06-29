#include "main.h"

/**
 * rot13 -function that encodes a string using rot13.
 * @s: parameter
 * Return: encoded parameter
 */

char *rot13(char *s)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*s)
	{
		i = 0;
		while (i < 52)
		{
			if (*s == alpha[i])
			{
				*s = rot13[i];
				break;
			}
			i++;
		}
		s++;
	}

	return (s);
}
