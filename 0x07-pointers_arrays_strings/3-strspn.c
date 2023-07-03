#include "main.h"

/**
 * _strspn - a function that gets the
 *           length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j] && accept[j] != s[i])
			j++;
		if (accept[j])
			return (i);
		i++;
	}
	return (i);
}
