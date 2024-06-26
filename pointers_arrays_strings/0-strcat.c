#include <stdio.h>
#include "main.h"

/**
* *_strcat - Concatenates two strings
* appends the src string to the dest string, overwriting
* the terminating null byte (\0) at the end of dest, and
* then adds a terminating null byte
* @dest: Take char '*dest' as parameter
* @src: Take char '*src' as parameter
* Return: return a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (temp);
}
