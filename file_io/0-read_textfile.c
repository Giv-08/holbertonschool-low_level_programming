#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: take char 'filename' as parameter
 * @letters: take 'letters' as parameter
 * Return: 0 if filename is NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t b_read, b_write, file;

	if (filename == NULL)
        {
                return (0);
        }
	file = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	b_read = read(file, buffer, letters);
	b_write = write(STDOUT_FILENO, buffer, b_read);

	free(buffer);
	close(file);
	return (b_write);
}
