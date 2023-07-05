#include "main.h"

/**
 * square_root - checks the input number from sqrt to the base
 * @sqrt: number is squared and compared against base
 * @base: base number
 * Return: natural square root of number base
 */

int square_root(int sqrt, int base)
{
	if (sqrt * sqrt == base)
		return (sqrt)
	else if (sqrt * sqrt > base)
		return (-1);
	else
		return (square_root(sqrt + 1, base));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to be used
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	 square_root(1, n);
}
