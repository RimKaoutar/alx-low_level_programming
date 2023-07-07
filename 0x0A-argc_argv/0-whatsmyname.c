#include <stdio.h>

/**
 * main - prints the name of a program and a new line.
 * @argc: argument count, holds the number of arguments passed.
 * @argv: argument vector, array pointer that holds the arguments passed.
 * Return: 0 if success
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}
