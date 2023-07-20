 #include "variadic_functions.h"

/**
 * print_strings - prints a given number of strings
 * separated by a specified separator
 * @separator: the string to be printed between numbers
 * @n:  the number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	if (n == 0)
	{
	printf("\n");
	return;
	}
	if (separator == NULL)
		separator = "";
	va_start(args, n);

	for (i = 0; i < n - 1; i++)
	{
		s = va_arg(args, char*);
		printf("%s%s", (s == NULL) ? "(nil)" : s, separator);
	}
	s = va_arg(args, char*);
	printf("%s\n", (s == NULL) ? "(nil)" : s);
	va_end(args);
}
