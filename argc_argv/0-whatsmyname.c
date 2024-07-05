#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i >= argc)
	{
		printf("%d\n", *argv[i]);
		i++;
	}
	return (0);
}
