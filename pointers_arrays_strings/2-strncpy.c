#include <stdio.h>
#include "main.h"

/**
* *_strncpy -  copies a string
* @dest - Task char '*dest' as parameter
* @src - Task char '*src' as parameter
* @n - Task int 'n' as parameter
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	return (temp);
}
