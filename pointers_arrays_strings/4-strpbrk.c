#include "main.h"
#include <stdio.h>

/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: Take char '*s' as parameter
* @accept: Take char '*accept' as parameter
* Return: a pointer to the byte in s that matches one of 
* the bytes in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		if (*s == *accept)
		{
			i++;
		}
	}	
	return (s);
}
