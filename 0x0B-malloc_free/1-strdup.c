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
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	ptr = malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		ptr[i] = str[i];
	}

	ptr[len] = '\0';

	return (ptr);
}
