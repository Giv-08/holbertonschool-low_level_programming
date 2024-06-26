#include <stdio.h>
#include "main.h"

/**
* puts - prints every other character of a string, 
* starting with the first character, followed by a new line
*/
 
void puts2(char *str)
{
	while (*str != '\0')
	{
		str++;
		if (*str % 2 == 0)
		{
		_putchar(*str);
		}
	}
}
