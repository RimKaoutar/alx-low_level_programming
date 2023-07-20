#include "variadic_functions.h"

/**
 * print_numbers - the name of the function being defined
 * @separator:  string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n)
	{
		va_start(args, n);

		for (i = 0; i < n - 1; i++)
			printf("%d%s", va_arg(args, int), separator);

		printf("%d\n", va_arg(args, int));
	}
	va_end(args);
}
