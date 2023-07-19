#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Responsible for selecting the correct
 * job to perform the required operation.
 * @s: representing the requested operation.
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
