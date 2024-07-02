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
	char *p, *a;
	p = s;
	a = accept;

	while (*p != '\0')
	{
		while (*a != '\0')
		{
			if (*p == *a)
			{
				break;
			}
			a++;
		}
		p++;

	if (*a == '\0')
	{
		break;
	}
	counter++;
	}
	return (counter);

}
