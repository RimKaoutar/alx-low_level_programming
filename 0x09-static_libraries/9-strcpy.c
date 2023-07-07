#include "main.h"


/**
 * _strcpy - copies a string from one pointer to another
 *	including the terminating null byte (\0)
 *
 * @src: source of string parameter input
 * @dest: destination of string
 *
 * Return: pointer to dest input parameter
*/

char *_strcpy(char *dest, char *src)
{
	int a = 0, b = 0;

	while (src[a] != '\0')
		dest[b++] = src[a++];
	dest[b] = '\0';

	return (dest);
}
