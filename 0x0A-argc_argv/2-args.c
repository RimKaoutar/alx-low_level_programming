#include <stdio.h>

/**
 * main - prints the name of a program and a new line.
 * @argc: argument count, holds the number of arguments passed.
 * @argv: argument vector, array pointer that holds the arguments passed.
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
