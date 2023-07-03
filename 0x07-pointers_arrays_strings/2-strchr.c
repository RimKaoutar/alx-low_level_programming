#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from input array
 *
 * Return: first occurence of charatcer or null if not found
*/

char *_strchr(char *s, char c)
{
	char *occ = '\0';

	while (*s)
	{
		if (*s == c)
		{
			occ = *s;
			break;
		}
		s++;
	}
	return (occ);
}
