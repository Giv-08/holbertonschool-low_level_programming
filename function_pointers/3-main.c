#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
#include "3-get_op_func.c"
#include "3-op_functions.c"

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *s;
	int result;

	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	s = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (s[0] != argv[2][0])
	{
		printf("Error\n");
		exit(99);
	}

	if ((s[0] == '/' || s[0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = ops.f(a, b);
	return (0);
}
