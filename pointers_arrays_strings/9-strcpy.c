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
		src++;
		dest++;
	}
	dest = src;
	printf("%s s \n", src);
	printf("%s d \n", dest);
	return (dest);	
}
