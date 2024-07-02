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
	unsigned int a = 0;
	unsigned int b = 0;
	unsigned int counter = 0;
	int loop = 1; 
	int found = 0;

	while (s[a] != '\0' && loop == 1)
	{	
		found = 0;
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[i] == accept[b])
			{
				counter++;
				found = 1;
			}
			b++;
		}

		if (!found)
		{
			break;
		}

		a++;
	}
	return (counter);

}
