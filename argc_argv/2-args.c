#include "main.h"
#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 * @argc: Take int 'argc' as parameter
 * @argv: Take char '*argv' as parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
