#include <stdio.h>
#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line
* @str: Take char '*str' as parameter`
*/

void puts_half(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		if (length / 2)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');

}
