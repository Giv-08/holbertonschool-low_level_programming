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
	char *ptr_one;
	char *ptr_two;
	long num_one;
	long num_two;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_one = strtol(argv[1], &ptr_one, 10);
	num_two = strtol(argv[2], &ptr_two, 10);

	if (*ptr_one != '\0' || *ptr_two != '\0')
	{
		printf("Error\n");
		return (1);
	}

	printf("%ld\n", num_one * num_two);
	return (0);
}