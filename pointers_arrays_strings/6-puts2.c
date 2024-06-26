#include <stdio.h>
#include "main.h"

/**
* puts2 - prints every other character of a string,
* starting with the first character, followed by a new line
* @str: Take a string as parameter
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
}
