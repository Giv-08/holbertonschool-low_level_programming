#include <stdio.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: Take char '*s' as parameter
*/

void rev_string(char *s)
{
	int i, j;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < 2; j++)
	{

	for (i = 0; i < length; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	}
	_putchar('\n');
}
