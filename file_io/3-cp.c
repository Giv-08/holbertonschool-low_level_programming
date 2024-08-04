#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * err_exit - function for dprintf
 * @str: take char 'str' as parameter
 * @file: take 'file' as parameter
 * @code: take 'code' as parameter
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
	int size = 1024;
	int b_write = 0;
	int *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		err_exit("Error: Can't read from file %s\n", argv[1], 98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		err_exit("Error: Can't write to %s\n", argv[2], 99);
	}
	while (size != 0)
	{
		size = read(file_from, buffer, 1024);
		if (size < 0)
		{
			err_exit("Error: Can't read from file %s\n", argv[1], 98);
		}
		b_write = write(file_to, buffer, size);
		if (b_write < 0)
		{
			err_exit("Error: Can't write to %s\n", argv[2], 99);
		}
	}
	if (close(file_from) == -1)
		err_exit("Error: Can't close fd %d\n", argv[1], 100);
	if (close(file_to) == -1)
		err_exit("Error: Can't close fd %d\n", argv[2], 100);
	return (0);
}
