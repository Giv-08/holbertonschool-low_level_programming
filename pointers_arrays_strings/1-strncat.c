#include <stdio.h>
#include "main.h"

/**
* *_strncat - Concatenates two string
* @dest: Take char '*dest' as parameter
* @src: Take char '*src' as parameter
* @n: Take int 'n' as parameter
* Return: return a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int length = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && src[length] <= n)
	{
		*dest = *src;
		src++;
		dest++;
	}

	printf("%d", n);
	return (temp);
}
