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
		if (*text == 'a' || *text == 'A') *text = '4';
		if (*text == 'e' || *text == 'E') *text = '3';
		if (*text == 'o' || *text == 'O') *text = '0';
		if (*text == 't' || *text == 'T') *text = '7';
		if (*text == 'l' || *text == 'L') *text = '1';
		
		text++;
	}
	return (0);
}
