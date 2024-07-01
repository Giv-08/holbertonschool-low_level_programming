#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
* @s: Take char 's' as parameter
* @accept: Take char 'accept' as parameter
* Return: the number of bytes in the initial segment of
* 's' which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *ptr = accept;

	while (*s != '\0')
	{
		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				count++;
				break;
			}
			ptr++;
		}

		if (*ptr == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
