#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the name of a program and a new line.
 * @argc: argument count, holds the number of arguments passed.
 * @argv: argument vector, array pointer that holds the arguments passed.
 * Return: 0 if success, 1 error.
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	res =  atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", res);
	return (0);
}
