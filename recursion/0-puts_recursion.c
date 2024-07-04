#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: Take char 's' as parameter
*/

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s);
		printf("%c\n", *s);
	}
}

