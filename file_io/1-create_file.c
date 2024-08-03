#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * create_textfile - creates a file
 * @filename: take char 'filename' as parameter
 * @text_content: take 'text_content' as parameter
 * Return: 1 on success,if filename is NULL return -1
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t b_write;
	int i = 0;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		write(file, "", *text_content);
	}
	else
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	b_write = write(file, text_content, i);
	if (b_write == -1 || (int)b_write != i)
	{
		return (-1);
	}

	close(file);
	return (1);
}
