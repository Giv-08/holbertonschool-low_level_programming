#include <stdio.h>
#include "main.h"

/**
* puts - prints every other character of a string, 
* starting with the first character, followed by a new line
*/
 
void puts2(char *str)
{
	if (*str % 2 == 0)
	{
		while (*str != '\0')
		{
			str++;
		}
		_putchar(*str);
	}
}
