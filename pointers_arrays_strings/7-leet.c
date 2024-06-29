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
	char map[256] = {0};

	map['a'] = map['A'] = '4';
	map['e'] = map['E'] = '3';
	map['o'] = map['O'] = '0';
	map['t'] = map['T'] = '7';
	map['l'] = map['L'] = '1';

	while (*text != '\0')
	{
		if (map[(unsigned char)*text])
		{
			*text = map[(unsigned char)*text];
		}
		text++;
	}
	return (s);
}
