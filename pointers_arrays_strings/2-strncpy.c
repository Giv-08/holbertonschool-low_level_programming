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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		src++;
	}
	dest[i] = '\0';
	return(dest);
}
