#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * main - creates a file
 * @argc: take char 'argc' as parameter
 * @argv: take 'argv' as parameter
 * Return: 1 on success,if filename is NULL return -1
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t b_read, b_write;
	char buffer[1024];

	if (argc < 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", argv[2]), exit(99);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	b_write = write(file_to, buffer, 100);
	if (b_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]), exit(99);
	}
	b_read = read(file_from, buffer, 100);
	while ((b_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		b_write = write(file_to, buffer, b_read);
		if (b_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (b_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read to %s\n", argv[1]), exit(98);
	if (close(file_from) == -1 || close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	return (0);
}
