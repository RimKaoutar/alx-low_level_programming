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

	if (str == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		len++;

	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
		ptr[i] = s[i];

	ptr[len] = '\0';
	return (ptr);
}
