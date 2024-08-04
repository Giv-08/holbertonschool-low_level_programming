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
void err_exit(char *str, char *file, int code)
{
	dprintf(STDERR_FILENO, str, file);
	exit(code);
}
/**
 * _copy - copy content from one file to another
 * @ff: take char 'ff' as parameter
 * @ft: take 'ft' as parameter
 * Return: 1 on success,if filename is NULL return -1
*/
void _copy(char *ff, char *ft)
{
	int file_from, file_to;
	ssize_t b_read, b_write;
	char buffer[1024];

	file_from = open(ft, O_RDONLY);
	if (file_from == -1)
	{
		err_exit("Error: Can't read from file %s\n", ff, 98);
	}
	file_to = open(ff, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (file_to == -1)
	{
		close(file_from);
		err_exit("Error: Can't write from file %s\n", ft, 99);
	}
	b_write = write(file_to, buffer, 100);
	if (b_write == -1)
	{
		err_exit("Error: Can't write to %s\n", ft, 99);
	}

	b_read = read(file_from, buffer, sizeof(buffer));
	while (b_read > 0)
	{
		b_write = write(file_to, buffer, b_read);
		if (b_write != b_read)
		{
			close(file_from);
			close(file_to);
			err_exit("Error: Can't write to %s\n", ft, 99);
		}
	}
	if (b_read == -1)
	{
		close(file_from);
		close(file_to);
		err_exit("Error: Can't read to %s\n", ff, 98);
	}
	if (close(file_from) == -1)
	{
		err_exit("Error: Can't close fd %d\n", ff, 100);
	}
	if (close(file_to) == -1)
	{
		err_exit("Error: Can't close fd %d\n", ft, 100);
	}
}
/**
 * main - main function
 * @argc: take int 'argc' as parameter
 * @argv: take char 'argv' as parameter
 * Return: 0 on success
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_copy(argv[1], argv[2]);
	return (0);
}
