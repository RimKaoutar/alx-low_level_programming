#include "main.h"

/**
 * _strncpy - A function that copies a string.
 *
 * @dest: pointer to destination input buffer
 * @src: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (len < n)
	{
		dest[len] = src[len];

		if (src[len] == '\0')
			break;

		len++;
	}
	dest[len] = '\0';
	return (dest);
}
