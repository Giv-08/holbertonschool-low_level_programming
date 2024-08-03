#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - creates a file
 * @filename: take char 'filename' as parameter
 * @text_content: take 'text_content' as parameter
 * Return: 1 on success,if filename is NULL return -1
*/

void main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t b_read, b_write;
	char buffer[100];

	// check if argument is not the correct one, code 97
	// if file_to already exists, truncate it
	// if file_from does not exist, or if you can not read it, exit with code 98
	// if you can not create or if write to file_to fails, exit with code 99
	// if you can not close a file descriptor , exit with code 100, where FD_VALUE is the value of the file descriptor
	// You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
}
