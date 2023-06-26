#include "main.h"

/**
 * _strlen - function that calculates the length of a string.
 * @s:
 *
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '0')
	{
		length++;
		s++;
	}
}
