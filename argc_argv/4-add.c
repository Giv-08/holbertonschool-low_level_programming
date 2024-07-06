#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: Take int 'argc' as parameter
 * @argv: Take char '*argv' as parameter
*/

int main(int argc, char *argv[])
{
	int a = 1;
	int b = 0;
	int total = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	
	while (a < argc)
	{
		while (b < argc)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		a++;
		total = atoi(argv[a]) + atoi(argv[a]);
	}

	printf("%d\n", total);
	return (0);
}
