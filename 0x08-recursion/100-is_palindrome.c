#include "main.h"

/**
* is_palindrome - returns true if the given string is a palindrome
*@s: string to check
*Return: true if the given string is a palindrome
*/

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, len, 0));
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int check_palindrome(char *s, int len, int index)
{
	if (s[index] != s[len - 1 - index])
		return (0);
	else if (index <= len / 2)
		return (check_palindrome(s, len, index + 1));
	else
		return (1);
}
