#include <stdio.h>
#include "main.h"

/**
* *_memset - copies memory area
* @dest: Take char '*dest' as parameter
* @src: Take char '*src' as parameter
* @n: Take int 'n' as parameter
* Return: 'dest' pointer to memory area
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *a = (unsigned char *)dest;
	unsigned char *b = (unsigned char *)src;
	unsigned int i = 0;

	while (i < n)
	{
		a[i] = b[i];
		i++;
	}

	return (dest);
}
