#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: strings to concatenate
 * Return: pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	char *ptr, *ptr1;
	int i, j, count;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, count = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, count++)
			;
		count++;
	}
	count++;

	ptr = malloc(count * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	ptr1 = ptr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*ptr = av[i][j];
			ptr++;
		}
		*ptr = '\n';
		ptr++;
	}

	return (ptr1);
}
