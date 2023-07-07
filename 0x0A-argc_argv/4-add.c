#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the name of a program and a new line.
 * @argc: argument count, holds the number of arguments passed.
 * @argv: argument vector, array pointer that holds the arguments passed.
 * Return: 0 if success, 1 if error.
 */

int main(int argc, char *argv[])
{
	int i, res = 0;

	if (argc < 2)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			res += atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
