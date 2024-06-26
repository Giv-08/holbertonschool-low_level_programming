#include <stdio.h>
#include "main.h"

/**
* rev_string - reverses a string
* @s: Take char '*s' as parameter
*/

void rev_string(char *s)
{
	int i;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i > 0; i--)
	{
		if (i == 0)
		{
			_putchar(*s++);

		}
		else
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
