#include "main.h"
#include <stdio.h>

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
	int i = 0;

	while (i < argc)
	{
		if (*argv[i] > 2)
		{
			printf("%d\n", i * i);
		}
		else if (*argv[i] < 2)
		{
			printf("Error");
			return (1);
		}
		i++;
	}
	return (0);
}
