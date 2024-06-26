#include <stdio.h>
#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line
* @str: Take char '*str' as parameter`
*/

void puts_half(char *str)
{
	int length = 0;
	int half, a;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
		for (a = half; a < length; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		half = (length - 1) / 2;
		for (a = half + 1; a < length; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');

}
