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
		if (*ptr == 'a' || *ptr == 'A') *ptr = '4';
		if (*ptr == 'e' || *ptr == 'E') *ptr = '3';
		if (*ptr == 'o' || *ptr == 'O') *ptr = '0';
		if (*ptr == 't' || *ptr == 'T') *ptr = '7';
		if (*ptr == 'l' || *ptr == 'L') *ptr = '1';
		
		text++;
	}
	return (0);
}
