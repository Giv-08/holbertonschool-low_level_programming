#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user
 * @s: is a function pointer
 * Return: a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
	{
		i++;
	}

	if (ops[i].op != NULL)
	{
		return (ops[i].f);
	}
	return (NULL);
}
