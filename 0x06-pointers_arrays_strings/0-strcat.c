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
	int len = 0;

	while (*dest != '\0')
	{
		dest++;
		len++;
	}
	/*dest--;*/
	do {
		dest[len++] = *src;
		src++;
	} while (*src != '\0');
	/*dest[len] = '\0';*/
	return (dest);
}
