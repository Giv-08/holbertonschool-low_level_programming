#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: Take char '*s' as parameter
*/

void rev_string(char *s)
{
	int i = 0;
	char temp;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (i < length / 2)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
		i++;
	}
	_putchar('\n');
}
