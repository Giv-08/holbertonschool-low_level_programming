#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

 	a = atoi(argv[1]);
 	operator = argv[2];
 	b = atoi(argv[3]);

 	if ((strlen(operator) == 1 && strchr("+-*/%", operator[0]) != NULL) &&
        !((operator[0] == '/' || operator[0] == '%') && b == 0)) 
	{
		operation = get_op_func(operator);
		if (operation != NULL)
		{
			result = operation(a, b);
			printf("%d\n", result);
			return 0;
		}
	}

	printf("Error\n");
	return (operator[0] == '/' || operator[0] == '%') ? 100 : 99;
}
