#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: Take int 'argc' as parameter
 * @argv: Take char '*argv' as parameter
 * Return: If one of the number contains symbols
 * that are not digits, print Error, followed by
 * a new line, and return 1
*/

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 0;
	int total = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (a < argc)
	{
		while (argv[a][b] != '\0')
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		total += atoi(argv[a]);
		a++;
	}

	printf("%d\n", total);
	return (0);
}
