#include <stdio.h>
#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: Take char '*s' as parameter
* @b: Take char 'b' as parameter
* @n: Take int 'n' as parameter
* Return: 's' pointer to memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *a = (unsigned char *)s;
	unsigned int i = 0;

	while (i < n)
	{
		a[i] = (unsigned char)b;
		i++;
	}

	return (s);
}
