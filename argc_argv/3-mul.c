#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Take int 'argc' as parameter
 * @argv: Take char '*argv' as parameter
 * Return: If the program does not receive two arguments,
 * your program should print Error, followed by a new line,
 * and return 1
 */

int main(int argc, char *argv[])
{
	int num_one = atoi(argv[1]);
	int num_two = atoi(argv[2]);

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

	printf("%d\n", num_one * num_two);
	return (0);
}
