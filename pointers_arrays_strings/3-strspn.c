#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * Return: the number of bytes in the initial segment of 
 * 's' which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	char *a = s;
	char *b = accept;

	while (*a != '\0')
	{
		while (*b != '\0')
		{
			if (*a == *b)
			{
				i++;
			}
			b++;
		}
		a++;
	}
	return (i);
}
