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
        int a, b;
        char *operator;
        int result;
        int (*operation)(int, int);

        if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }

        operator = argv[2];
        a = atoi(argv[1]);
        b = atoi(argv[3]);

        if ((strlen(operator) == 1 && strchr("+-*/%", operator[0]) != NULL) &&
	!((operator[0] == '/' || operator[0] == '%') && b == 0))
        {
        	operation = get_op_func(operator);
		if (operation != NULL)
		{
			result = operation(a, b);
			return (0);
		}
	}
	printf("Error\n");
	return (operator[0] == '/' || operator == '%') ? 100 : 99;
}
