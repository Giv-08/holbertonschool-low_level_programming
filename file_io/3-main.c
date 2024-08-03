#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
                dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	_copy(argv[1],argv[2]);
	return (0);
}
