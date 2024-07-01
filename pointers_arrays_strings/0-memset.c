#include <stdio.h>
#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: Take char '*s' as parameter
* @b: Take char 'b' as parameter
* @n: Take int 'n' as parameter
* Return: 's' pointer to memory area
*/

char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;
	unsigned char *mem = s;

	while (n > 0)
	{
		*s = c;
		s++;
		n--;
	}
	printf("%c", mem);
	return (s);
}
