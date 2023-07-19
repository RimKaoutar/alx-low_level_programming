#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on param of each array element.
 * @array: an array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < (int) size; i++)
		action(array[i]);
}
