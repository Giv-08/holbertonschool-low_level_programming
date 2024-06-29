#include <stdio.h>
#include "main.h"

/**
* *leet - encodes a string into 1337
* @s: Take char 's' as string
* Return: Always 0 (success)
*/

char *leet(char *s)
{
	char *text = s;
	
	while (*text != '\0')
	{
		if (*text == 'a' || *text == 'A')
		{
			*text = 1 + '0';
		}
		text++;
	}
	return (0);
}
