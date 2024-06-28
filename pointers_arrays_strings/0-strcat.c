#include <stdio.h>
#include "main.h"

/**
* *_strcat - Concatenates two strings 
* appends the src string to the dest string, overwriting
* the terminating null byte (\0) at the end of dest, and
* then adds a terminating null byte
* @dest: Take char '*dest' as parameter
* @src: Take char '*src' as parameter
* Return: return a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	printf("\n ");
	printf("%s printf dest  \n ", dest);
	printf("%s printf  tmp \n ", temp);
	printf("%s printf  src   \n", src);
	printf("\n ");

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	printf("%s printf dest \n", dest);
	printf("%s printf  tmp \n ", temp);
	printf("%s printf  src   \n", src);
	printf("\n ");

	*dest = '\0';
	return (src);
}
