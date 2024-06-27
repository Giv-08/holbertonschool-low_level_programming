#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* *_strcpy - Copies the string pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest
* @dest: Take char '*dest' as parameter
* @src: Take char '*src' as parameter
* Return: value of pointer 'dest'
*/

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	
	*dest = '\0';
	return (original_dest);
}
