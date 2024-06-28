#include <stdio.h>
#include "main.h"

/**
* *_strncpy -  copies a string
* @dest: - Task char '*dest' as parameter
* @src: - Task char '*src' as parameter
* @n: - Task int 'n' as parameter
* Return: temp as a starting address of *dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	dest = '\0';
	return (temp);
}
