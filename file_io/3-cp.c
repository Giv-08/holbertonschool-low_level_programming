#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 * @argc: no. of params
 * @argv: array of params
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *file_one, *file_two;
	int fdone, fdtwo, size = 1024, b_write = 0, *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_one = argv[1];
	file_two = argv[2];
	fdone = open(file_one, O_RDONLY);
	fdtwo = open(file_two, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fdone < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_one);
		exit(98);
	}
	if (fdtwo < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_two);
		exit(99);
	}

	while (size != 0)
	{
		size = read(fdone, buffer, 1024);
		if (size < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_one);
			exit(98);
		}
		
		b_write = write(fdtwo, buffer, size);
		if (b_write < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_two);
			exit(99);
		}
	}

	if (close(fdone) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdone);
		exit(100);
	}

	if (close(fdtwo) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdtwo);
		exit(100);
	}
        return (0);
}
