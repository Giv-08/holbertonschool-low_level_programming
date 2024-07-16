#include <stdio.h>
#include "function_pointers.h"

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user
 * @s: is a function pointer
 * Return: 0 if false, something else otherwise.
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
	int i;
}
