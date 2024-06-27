#include <stdio.h>
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
	while (*src != '\0')
	{
		*dest = *src;
		printf("%s1\n", dest);
		src++;
		printf("%s2\n", dest);
		dest++;
		printf("%s3\n", dest);
	}
	*dest = '\0';
	return (dest);	
}
