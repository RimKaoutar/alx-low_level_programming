#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
*/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		ptr[i] = s[i];

	return (ptr);
}
