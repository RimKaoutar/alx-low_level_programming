#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}
	while (len_src < n && src[len_src])
	{
		dest[len_dest++] = src[len_src++];
	}
	return (dest);
}
