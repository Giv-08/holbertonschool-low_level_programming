#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
/**
 * err_exit - Function to handle errors
 * @str: Format string for the error message
 * @file: File name or descriptor for the error message
 * @code: Exit code
*/
void err_exit(const char *str, const char *file, int code)
{
	dprintf(STDERR_FILENO, str, file);
	exit(code);
}

/**
 * main - main function
 * @argc: take 'argc' as parameter
 * @argv: take 'argv' as parameter
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t size;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		err_exit("Error: Can't read from file %s\n", argv[1], 98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		err_exit("Error: Can't write to %s\n", argv[2], 99);
	while ((size = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(file_to, buffer, size) != size)
			err_exit("Error: Can't write to %s\n", argv[2], 99);
	}
	if (size == -1)
		err_exit("Error: Can't read from file %s\n", argv[1], 98);
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
