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
	unsigned int counter = 0;
	char *p, *a;;

	while (*s != '\0')
	{
		while (*ptr != '\0')
		{
			if (*ptr == *a)
			{
				break;
			}
			ptr++;
		}
		s++;
	}

	if (*a == '\0')
	{
		break;
	}
	counter++;
	return (counter);

}
