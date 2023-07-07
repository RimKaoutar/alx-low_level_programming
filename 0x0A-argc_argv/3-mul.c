#include <stdio.h>

/**
 * main - prints the name of a program and a new line.
 * @argc: argument count, holds the number of arguments passed.
 * @argv: argument vector, array pointer that holds the arguments passed.
 * Return: 0 if success, 1 error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
