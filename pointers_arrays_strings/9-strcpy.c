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
	char temp[];

	printf("%s\n", src);
	
	src = temp;
	temp = dest;

	printf("%s\n", dest);

	return (dest);
}
