#include <stdio.h>
#include "main.h"

/**
* _puts - Prints a string, followed by a new line, to stdout
* @str: Take char '*str' as parameter
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
