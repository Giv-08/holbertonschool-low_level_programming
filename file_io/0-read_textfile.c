#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: take char 'filename' as parameter
 * @letters: take 'letters' as parameter
 * Return: 0 if filename is NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
	{
		return (0);
	}
}
