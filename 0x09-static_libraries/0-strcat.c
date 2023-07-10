#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0, len_src = 0;

	while (dest[len_dest] != '\0')
		len_dest++;

	do {
		dest[len_dest++] = src[len_src++];
	} while (src[len_src] != '\0');
	return (dest);
}
