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
	
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src <= n)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';
	return (temp);
}
