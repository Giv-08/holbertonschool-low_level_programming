#include <stdio.h>
#include "main.h"

/**
* *leet - encodes a string into 1337
* @s: Take char 's' as string
* Return: s
*/

char *leet(char *s)
{
	char *text = s;
	
	while (*text != '\0')
	{
		if (*text >= 'a' || *text >= 'A')
		{
			*text = *text + 1;
		}
	}
	return (s);
}
